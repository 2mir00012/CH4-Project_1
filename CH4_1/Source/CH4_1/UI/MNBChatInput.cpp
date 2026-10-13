#include "UI/MNBChatInput.h"
#include "Player/MNBPlayerController.h"
#include "Player/MNBPlayerState.h"
#include "Game/MNBGameStateBase.h"
#include "Blueprint/WidgetTree.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/ProgressBar.h"

void UMNBChatInput::NativeConstruct()
{
    Super::NativeConstruct();
    if (ReadyButton) ReadyButton->OnClicked.AddUniqueDynamic(this, &ThisClass::ToggleReady);
    GuessButton->OnClicked.AddUniqueDynamic(this, &ThisClass::SendGuess);
    ChatButton->OnClicked.AddUniqueDynamic(this, &ThisClass::SendChat);
    GuessInput->OnTextCommitted.AddUniqueDynamic(this, &ThisClass::OnGuessCommitted);
    EditableTextBox_ChatInput->OnTextCommitted.AddUniqueDynamic(this, &ThisClass::OnChatCommitted);
    MessageList->ClearChildren();
    if (const auto* PC = GetOwningPlayer<AMNBPlayerController>())
        for (const FString& Message : PC->GetChatMessages()) AppendMessage(Message);
}

void UMNBChatInput::NativeTick(const FGeometry& Geometry, float DeltaSeconds)
{
    Super::NativeTick(Geometry, DeltaSeconds);
    auto* PC = GetOwningPlayer<AMNBPlayerController>();
    const auto* PS = PC ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
    const auto* GS = GetWorld()->GetGameState<AMNBGameStateBase>();
    if (!PC || !PS || !GS) return;
    FString Status;
    int32 ReadyCount = 0;
    int32 PlayerCount = 0;
    const AMNBPlayerState* Opponent = nullptr;
    for (APlayerState* State : GS->PlayerArray)
        if (const auto* Other = Cast<AMNBPlayerState>(State))
        {
            ++PlayerCount;
            if (Other != PS && (!Opponent || Other->GetPlayerId() < Opponent->GetPlayerId())) Opponent = Other;
            ReadyCount += Other->IsReady() ? 1 : 0;
            if (!Status.IsEmpty()) Status += TEXT("\n");
            Status += FString::Printf(TEXT("%s%s    %d승    시도 %d / %d    %s"),
                *Other->PlayerNameString, Other == PS ? TEXT(" (나)") : TEXT(""),
                Other->GetWinCount(), Other->GetCurrentGuessCount(), Other->GetMaxGuessCount(),
                GS->bWaitingForReady ? (Other->IsReady() ? TEXT("준비 완료") : TEXT("준비 대기")) :
                (GS->bRoundEnding ? TEXT("결과 확인") : (GS->Turn.Player == Other ? TEXT("현재 차례") : TEXT("대기 중"))));
        }
    PlayerInfoText->SetText(FText::FromString(Status));
    InputErrorText->SetText(PC->InputError);
    const double Remaining = GS->GetRemainingTurnSeconds();
    const auto SetPlayerPanel = [GS](const AMNBPlayerState* Player, UTextBlock* Name, UTextBlock* Wins, UTextBlock* Details)
    {
        if (Name) Name->SetText(FText::FromString(Player ? Player->PlayerNameString : TEXT("접속 대기")));
        if (Wins) Wins->SetText(FText::FromString(Player ? FString::Printf(TEXT("%02d"), Player->GetWinCount()) : TEXT("--")));
        if (Details) Details->SetText(FText::FromString(Player ? FString::Printf(TEXT("남은 기회  %d / %d\n%s"),
            Player->GetMaxGuessCount() - Player->GetCurrentGuessCount(), Player->GetMaxGuessCount(),
            GS->bWaitingForReady ? (Player->IsReady() ? TEXT("준비 완료") : TEXT("준비 대기")) :
            GS->bRoundEnding ? TEXT("결과 확인 중") : GS->Turn.Player == Player ? TEXT("현재 차례") : TEXT("상대 차례 대기")) : TEXT("플레이어를 기다립니다.")));
    };
    SetPlayerPanel(PS, LocalNameText, LocalWinsText, LocalDetailsText);
    SetPlayerPanel(Opponent, OpponentNameText, OpponentWinsText, OpponentDetailsText);
    if (RoundText) RoundText->SetText(FText::FromString(FString::Printf(TEXT("ROUND %02d"), GS->RoundNumber)));
    if (TimerValueText)
    {
        TimerValueText->SetText(FText::FromString(GS->Turn.bActive ? FString::Printf(TEXT("%02d"), FMath::CeilToInt(Remaining)) : TEXT("--")));
        TimerValueText->SetColorAndOpacity(FSlateColor(GS->Turn.bActive && Remaining <= 5.0 ? FLinearColor(1.f,.20f,.12f) : FLinearColor(1.f,.68f,.20f)));
    }
    if (TurnStatusText)
    {
        FString TurnText = PlayerCount < 2 ? TEXT("상대를 기다리는 중 · 두 명 이상 필요합니다.") :
            FString::Printf(TEXT("준비 %d / %d · 모두 준비하면 시작합니다."), ReadyCount, PlayerCount);
        if (GS->bRoundEnding) TurnText = TEXT("결과 확인 중 · 잠시 후 다시 준비해 주세요.");
        else if (GS->Turn.bActive && IsValid(GS->Turn.Player))
            TurnText = FString::Printf(TEXT("%s 차례 | 남은 시간 %d초 | %s"),
                *GS->Turn.Player->PlayerNameString, FMath::CeilToInt(Remaining),
                GS->Turn.Player == PS ? TEXT("숫자를 입력하세요") : TEXT("상대방의 입력을 기다리세요"));
        TurnStatusText->SetText(FText::FromString(TurnText));
    }
    if (ReadyButton) ReadyButton->SetIsEnabled(GS->bWaitingForReady && !GS->bRoundEnding);
    if (ReadyButtonText)
        ReadyButtonText->SetText(FText::FromString(GS->bRoundEnding ? TEXT("결과 확인 중") :
            !GS->bWaitingForReady ? TEXT("경기 진행 중") : PS->IsReady() ? TEXT("준비 취소") : TEXT("준비하기")));
    if (TurnProgress)
    {
        TurnProgress->SetPercent(GS->Turn.bActive ? FMath::Clamp(static_cast<float>(Remaining) / FMath::Max(1.f, GS->Turn.DurationSeconds), 0.f, 1.f) : 0.f);
        TurnProgress->SetFillColorAndOpacity(Remaining <= 5.0 ? FLinearColor(.9f,.15f,.12f) : FLinearColor(.08f,.55f,.30f));
    }
    const bool bCanGuess = !GS->bWaitingForReady && !GS->bRoundEnding && GS->Turn.bActive && GS->Turn.Player == PS
        && Remaining > 0.0 && PS->HasGuessesLeft();
    GuessInput->SetIsEnabled(bCanGuess);
    GuessButton->SetIsEnabled(bCanGuess);
}

void UMNBChatInput::ToggleReady()
{
    if (auto* PC = GetOwningPlayer<AMNBPlayerController>())
        if (const auto* PS = PC->GetPlayerState<AMNBPlayerState>()) PC->SetReady(!PS->IsReady());
}

void UMNBChatInput::AppendMessage(const FString& Message)
{
    auto* Line = WidgetTree->ConstructWidget<UTextBlock>();
    Line->SetColorAndOpacity(FSlateColor(FLinearColor(.82f,.89f,.93f)));
    Line->SetText(FText::FromString(Message));
    Line->SetAutoWrapText(true);
    FSlateFontInfo Font = Line->GetFont(); Font.Size = 17; Line->SetFont(Font);
    CastChecked<UScrollBoxSlot>(MessageList->AddChild(Line))->SetPadding(FMargin(0, 4));
    if (MessageList->GetChildrenCount() > 80) MessageList->RemoveChildAt(0);
    MessageList->ScrollToEnd();
}

void UMNBChatInput::SendGuess()
{
    if (auto* PC = GetOwningPlayer<AMNBPlayerController>()) PC->SubmitGuess(GuessInput->GetText().ToString());
    GuessInput->SetText(FText::GetEmpty());
}

void UMNBChatInput::SendChat()
{
    if (auto* PC = GetOwningPlayer<AMNBPlayerController>()) PC->SetChatMessageString(EditableTextBox_ChatInput->GetText().ToString());
    EditableTextBox_ChatInput->SetText(FText::GetEmpty());
}

void UMNBChatInput::OnGuessCommitted(const FText& Text, ETextCommit::Type Method)
{
    if (Method == ETextCommit::OnEnter) SendGuess();
}

void UMNBChatInput::OnChatCommitted(const FText& Text, ETextCommit::Type Method)
{
    if (Method == ETextCommit::OnEnter) SendChat();
}
