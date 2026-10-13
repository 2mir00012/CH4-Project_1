
#if WITH_DEV_AUTOMATION_TESTS
#include "CoreMinimal.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "Engine/GameViewportClient.h"
#include "UnrealClient.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Misc/FileHelper.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonWriter.h"
#include "UObject/UObjectIterator.h"
#include "Blueprint/WidgetTree.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Game/MNBGameStateBase.h"
#include "Player/MNBPlayerController.h"
#include "Player/MNBPlayerState.h"
#include "UI/MNBChatInput.h"
#include "Slate/WidgetRenderer.h"
#include "Widgets/SOverlay.h"
#include "Engine/TextureRenderTarget2D.h"
#include "ImageUtils.h"
#include "RenderingThread.h"

static FString ProbePrefix, LastCommand;
static double NextProbe = 0;
static FDelegateHandle ProbeHandle;

void MNBStartNetworkProbe()
{
    if (!FParse::Value(FCommandLine::Get(), TEXT("MNBProbe="), ProbePrefix)) return;
    ProbeHandle = FWorldDelegates::OnWorldTickStart.AddLambda([](UWorld* World, ELevelTick Tick, float Delta)
    {
        if (!World->IsGameWorld() || World->GetNetMode() != NM_Client || FPlatformTime::Seconds() < NextProbe) return;
        auto* PC = Cast<AMNBPlayerController>(World->GetFirstPlayerController());
        auto* PS = PC ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
        auto* GS = World->GetGameState<AMNBGameStateBase>();
        if (!PC || !PS || !GS) return;
        NextProbe = FPlatformTime::Seconds() + .10;
        UMNBChatInput* Chat = nullptr; UTextBlock* Notice = nullptr;
        for (TObjectIterator<UUserWidget> It; It; ++It)
        {
            if (!IsValid(*It) || !It->IsInViewport() || It->GetWorld() != World || It->GetOwningPlayer() != PC || !It->WidgetTree) continue;
            if (auto* Candidate = Cast<UMNBChatInput>(*It)) Chat = Candidate;
            if (auto* Label = Cast<UTextBlock>(It->WidgetTree->FindWidget(TEXT("NotificationText")))) Notice = Label;
        }
        if (!Chat || !Notice) return;
        FString Command;
        if (FFileHelper::LoadFileToString(Command, *(ProbePrefix + TEXT("_command.txt"))) && Command != LastCommand)
        {
            FString Sequence, Rest, Action, Input;
            if (Command.Split(TEXT("\n"), &Sequence, &Rest) && Rest.Split(TEXT("\n"), &Action, &Input))
            {
                LastCommand = Command;
                if (Action == TEXT("guess") || Action == TEXT("chat"))
                {
                    const bool bGuess = Action == TEXT("guess");
                    auto* Box = CastChecked<UEditableTextBox>(Chat->WidgetTree->FindWidget(bGuess ? TEXT("GuessInput") : TEXT("EditableTextBox_ChatInput")));
                    Box->SetText(FText::FromString(Input));

                    Box->OnTextCommitted.Broadcast(Box->GetText(), ETextCommit::OnEnter);
                }
                else if (Action == TEXT("rawguess")) PC->ServerRPCSubmitGuess(Input, GS->RoundNumber, GS->Turn.Id);
                else if (Action == TEXT("staleguess")) PC->ServerRPCSubmitGuess(Input, GS->RoundNumber - 1, GS->Turn.Id);
                else if (Action == TEXT("staleturn")) PC->ServerRPCSubmitGuess(Input, GS->RoundNumber, GS->Turn.Id - 1);
                else if (Action == TEXT("doubleguess"))
                {
                    PC->ServerRPCSubmitGuess(Input, GS->RoundNumber, GS->Turn.Id);
                    PC->ServerRPCSubmitGuess(Input, GS->RoundNumber, GS->Turn.Id);
                }
                else if (Action == TEXT("disconnect")) PC->ConsoleCommand(TEXT("disconnect"));
                else if (Action == TEXT("ready")) PC->SetReady(Input == TEXT("1"));
                else if (Action == TEXT("readybutton"))
                {
                    if (auto* Button = Cast<UButton>(Chat->WidgetTree->FindWidget(TEXT("ReadyButton"))))
                        Button->OnClicked.Broadcast();
                }
                else if (Action == TEXT("staleready")) PC->ServerRPCSetReady(true, GS->RoundNumber, GS->ReadyRevision - 1);
                else if (Action == TEXT("viewportshot")) FScreenshotRequest::RequestScreenshot(Input, true, false);
                else if (Action == TEXT("screenshot") || Action == TEXT("screenshotcompact"))
                {

                    auto* ChatCopy = CreateWidget<UMNBChatInput>(PC, Chat->GetClass());
                    auto* NoticeCopy = CreateWidget<UUserWidget>(PC, PC->NotificationTextWidgetClass);
                    auto ChatSlate = ChatCopy->TakeWidget();
                    ChatCopy->NativeTick(FGeometry(), 0.f);
                    auto Overlay = SNew(SOverlay)
                        + SOverlay::Slot()[ChatSlate]
                        + SOverlay::Slot()[NoticeCopy->TakeWidget()];
                    FWidgetRenderer Renderer(true);
                    const int32 Width = Action == TEXT("screenshotcompact") ? 1100 : 1600;
                    const int32 Height = Action == TEXT("screenshotcompact") ? 850 : 900;
                    auto* Target = Renderer.DrawWidget(Overlay, FVector2D(Width,Height));
                    FlushRenderingCommands();
                    TArray<FColor> Pixels;
                    FReadSurfaceDataFlags ReadFlags;
                    ReadFlags.SetLinearToGamma(false);
                    if (Target && Target->GameThread_GetRenderTargetResource()->ReadPixels(Pixels, ReadFlags))
                    {
                        TArray64<uint8> PNG;
                        FImageUtils::PNGCompressImageArray(Width,Height,Pixels,PNG);
                        FFileHelper::SaveArrayToFile(PNG, *Input);
                    }
                    ChatCopy->MarkAsGarbage(); NoticeCopy->MarkAsGarbage();
                }
            }
        }
        auto Json = MakeShared<FJsonObject>();
        Json->SetStringField(TEXT("name"), PS->PlayerNameString);
        Json->SetNumberField(TEXT("count"), PS->GetCurrentGuessCount());
        Json->SetNumberField(TEXT("round"), GS->RoundNumber);
        Json->SetNumberField(TEXT("turn_id"), GS->Turn.Id);
        Json->SetBoolField(TEXT("turn_active"), GS->Turn.bActive);
        Json->SetStringField(TEXT("turn_player"), IsValid(GS->Turn.Player) ? GS->Turn.Player->PlayerNameString : TEXT(""));
        Json->SetNumberField(TEXT("deadline"), GS->Turn.EndServerTime);
        Json->SetNumberField(TEXT("remaining"), GS->GetRemainingTurnSeconds());
        Json->SetNumberField(TEXT("server_time"), GS->GetServerWorldTimeSeconds());
        if (auto* TurnText = Cast<UTextBlock>(Chat->WidgetTree->FindWidget(TEXT("TurnStatusText"))))
            Json->SetStringField(TEXT("widget_turn"), TurnText->GetText().ToString());
        Json->SetBoolField(TEXT("ending"), GS->bRoundEnding);
        Json->SetBoolField(TEXT("waiting_ready"), GS->bWaitingForReady);
        Json->SetNumberField(TEXT("ready_revision"), GS->ReadyRevision);
        Json->SetBoolField(TEXT("ready"), PS->IsReady());
        Json->SetNumberField(TEXT("wins"), PS->GetWinCount());
        if (auto* Button = Chat->WidgetTree->FindWidget(TEXT("ReadyButton")))
            Json->SetBoolField(TEXT("ready_enabled"), Button->GetIsEnabled());
        if (auto* Caption = Cast<UTextBlock>(Chat->WidgetTree->FindWidget(TEXT("ReadyButtonText"))))
            Json->SetStringField(TEXT("ready_caption"), Caption->GetText().ToString());
        Json->SetStringField(TEXT("notice"), PC->NotificationText.ToString());
        Json->SetStringField(TEXT("widget_notice"), Notice->GetText().ToString());
        Json->SetStringField(TEXT("binding_notice"), Notice->TextDelegate.IsBound() ? Notice->TextDelegate.Execute().ToString() : TEXT("UNBOUND"));
        Json->SetStringField(TEXT("error"), PC->InputError.ToString());
        Json->SetStringField(TEXT("command"), LastCommand);
        auto* GuessBox = Chat->WidgetTree->FindWidget(TEXT("GuessInput"));
        Json->SetBoolField(TEXT("guess_enabled"), GuessBox->GetIsEnabled());
        Json->SetStringField(TEXT("widget_counts"), CastChecked<UTextBlock>(Chat->WidgetTree->FindWidget(TEXT("PlayerInfoText")))->GetText().ToString());
        auto Counts = MakeShared<FJsonObject>();
        for (APlayerState* State : GS->PlayerArray)
            if (const auto* Other = Cast<AMNBPlayerState>(State)) Counts->SetNumberField(Other->PlayerNameString, Other->GetCurrentGuessCount());
        Json->SetObjectField(TEXT("counts"), Counts);
        auto Wins = MakeShared<FJsonObject>();
        auto ReadyStates = MakeShared<FJsonObject>();
        for (APlayerState* State : GS->PlayerArray)
            if (const auto* Other = Cast<AMNBPlayerState>(State))
            {
                Wins->SetNumberField(Other->PlayerNameString, Other->GetWinCount());
                ReadyStates->SetBoolField(Other->PlayerNameString, Other->IsReady());
            }
        Json->SetObjectField(TEXT("win_counts"), Wins);
        Json->SetObjectField(TEXT("ready_states"), ReadyStates);
        TArray<TSharedPtr<FJsonValue>> Messages;
        for (const FString& Message : PC->GetChatMessages()) Messages.Add(MakeShared<FJsonValueString>(Message));
        Json->SetArrayField(TEXT("messages"), Messages);
        FString Serialized;
        FJsonSerializer::Serialize(Json, TJsonWriterFactory<>::Create(&Serialized));
        FFileHelper::SaveStringToFile(Serialized, *(ProbePrefix + TEXT("_state.json")), FFileHelper::EEncodingOptions::ForceUTF8WithoutBOM);
    });
}

void MNBStopNetworkProbe()
{
    FWorldDelegates::OnWorldTickStart.Remove(ProbeHandle);
}
#endif
