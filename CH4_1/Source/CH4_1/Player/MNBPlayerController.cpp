#include "Player/MNBPlayerController.h"
#include "Game/MNBGameModeBase.h"
#include "Game/MNBGameStateBase.h"
#include "UI/MNBChatInput.h"
#include "Net/UnrealNetwork.h"

AMNBPlayerController::AMNBPlayerController() { bReplicates = true; }

void AMNBPlayerController::BeginPlay()
{
    Super::BeginPlay();
    if (!IsLocalController()) return;
    if (ChatInputWidgetClass)
    {
        ChatInputWidget = CreateWidget<UMNBChatInput>(this, ChatInputWidgetClass);
        if (ChatInputWidget) ChatInputWidget->AddToViewport();
    }
    if (NotificationTextWidgetClass)
    {
        NotificationTextWidget = CreateWidget<UUserWidget>(this, NotificationTextWidgetClass);
        if (NotificationTextWidget) NotificationTextWidget->AddToViewport(1);
    }
    bShowMouseCursor = true;
    FInputModeUIOnly InputMode;
    InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
    SetInputMode(InputMode);
}

void AMNBPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AMNBPlayerController, NotificationText);
}

void AMNBPlayerController::SubmitGuess(const FString& Input)
{
    if (!IsLocalController()) return;
    InputError = FText::GetEmpty();
    if (const auto* GS = GetWorld()->GetGameState<AMNBGameStateBase>())
        ServerRPCSubmitGuess(Input, GS->RoundNumber, GS->Turn.Id);
}

void AMNBPlayerController::SetChatMessageString(const FString& Input)
{
    if (IsLocalController()) ServerRPCPrintChatMessageString(Input);
}

void AMNBPlayerController::ServerRPCSubmitGuess_Implementation(const FString& Input, int32 RoundNumber, int32 TurnId)
{
    if (auto* GM = GetWorld()->GetAuthGameMode<AMNBGameModeBase>()) GM->SubmitGuess(this, Input, RoundNumber, TurnId);
}

void AMNBPlayerController::ServerRPCPrintChatMessageString_Implementation(const FString& Input)
{
    if (auto* GM = GetWorld()->GetAuthGameMode<AMNBGameModeBase>()) GM->PrintChatMessageString(this, Input);
}

void AMNBPlayerController::ClientRPCPrintChatMessageString_Implementation(const FString& Message)
{
    PrintChatMessageString(Message);
}

void AMNBPlayerController::ClientRPCShowInputError_Implementation(const FText& Message)
{
    InputError = Message;
    if (!Message.IsEmpty()) PrintChatMessageString(TEXT("[안내] ") + Message.ToString());
}

void AMNBPlayerController::PrintChatMessageString(const FString& Message)
{
    ChatMessages.Add(Message);
    if (ChatMessages.Num() > 80) ChatMessages.RemoveAt(0);
    UE_LOG(LogTemp, Log, TEXT("MNB_MESSAGE %s"), *Message);
    if (ChatInputWidget) ChatInputWidget->AppendMessage(Message);
}

void AMNBPlayerController::SetReady(bool bReady)
{
    if (!IsLocalController()) return;
    InputError = FText::GetEmpty();
    if (const auto* GS = GetWorld()->GetGameState<AMNBGameStateBase>())
        ServerRPCSetReady(bReady, GS->RoundNumber, GS->ReadyRevision);
}

void AMNBPlayerController::ServerRPCSetReady_Implementation(bool bReady, int32 RoundNumber, int32 ReadyRevision)
{
    if (auto* GM = GetWorld()->GetAuthGameMode<AMNBGameModeBase>())
        GM->SetPlayerReady(this, bReady, RoundNumber, ReadyRevision);
}
