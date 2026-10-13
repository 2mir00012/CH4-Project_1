#include "Game/MNBGameModeBase.h"
#include "Game/MNBGameStateBase.h"
#include "Player/MNBPlayerController.h"
#include "Player/MNBPlayerState.h"
#include "Library/MNBNumberBaseballLibrary.h"
#include "TimerManager.h"

AMNBGameModeBase::AMNBGameModeBase()
{
    PlayerControllerClass = AMNBPlayerController::StaticClass();
    PlayerStateClass = AMNBPlayerState::StaticClass();
    GameStateClass = AMNBGameStateBase::StaticClass();
    DefaultPawnClass = nullptr;
}

void AMNBGameModeBase::BeginPlay()
{
    Super::BeginPlay();
    ResetGame();
}

void AMNBGameModeBase::OnPostLogin(AController* NewPlayer)
{
    Super::OnPostLogin(NewPlayer);
    auto* PC = Cast<AMNBPlayerController>(NewPlayer);
    if (!PC) return;
    auto* PS = PC->GetPlayerState<AMNBPlayerState>();
    if (!PS) return;
    AllPlayerControllers.AddUnique(PC);
    PS->InitializePlayer(NextPlayerNumber++);
    PC->NotificationText = FText::FromString(CurrentNotification);
    if (auto* GS = GetGameState<AMNBGameStateBase>())
    {
        GS->MulticastRPCBroadcastLoginMessage(PS->PlayerNameString);
        if (GS->bWaitingForReady) TryStartRound();
    }
}

void AMNBGameModeBase::Logout(AController* Exiting)
{
    auto* PC = Cast<AMNBPlayerController>(Exiting);
    auto* GS = GetGameState<AMNBGameStateBase>();
    const int32 RemovedIndex = AllPlayerControllers.IndexOfByKey(PC);
    const bool bWasCurrent = GS && PC && GS->Turn.Player == PC->GetPlayerState<AMNBPlayerState>();
    AllPlayerControllers.Remove(PC);
    Super::Logout(Exiting);
    if (!GS) return;
    if (AllPlayerControllers.IsEmpty())
    {
        GetWorldTimerManager().ClearTimer(ResetTimer);
        ResetGame();
    }
    else if (GS->bRoundEnding) return;
    else if (GS->bWaitingForReady) TryStartRound();
    else if (AllPlayerControllers.Num() < 2) WaitForReady();
    else if (AreAllGuessesUsed()) FinishRound(TEXT("무승부! Draw... 3초 후 준비 화면으로 돌아갑니다."));
    else if (bWasCurrent) StartNextTurn(FMath::Max(0, RemovedIndex));
}

void AMNBGameModeBase::SubmitGuess(AMNBPlayerController* Sender, const FString& Input, int32 RoundNumber, int32 TurnId)
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    auto* PS = Sender ? Sender->GetPlayerState<AMNBPlayerState>() : nullptr;
    if (!GS || !PS || !AllPlayerControllers.Contains(Sender)) return;
    if (GS->bRoundEnding || GS->bWaitingForReady || RoundNumber != GS->RoundNumber)
    {
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("준비 대기 중이거나 라운드가 종료·변경되었습니다. 게임 시작 후 입력하세요.")));
        return;
    }
    if (!GS->Turn.bActive || TurnId != GS->Turn.Id || GS->Turn.Player != PS || bSubmittedThisTurn)
    {
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("현재 자신의 차례가 아니거나 이미 지난 턴입니다.")));
        return;
    }
    if (GS->GetRemainingTurnSeconds() <= 0.0)
    {
        OnTurnExpired(TurnId);
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("제한 시간이 끝났습니다. 다음 차례를 기다리세요.")));
        return;
    }
    if (!PS->HasGuessesLeft())
    {
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("3회의 기회를 모두 사용했습니다. 다른 플레이어의 결과를 기다리세요.")));
        return;
    }
    FText Error;
    if (!UMNBNumberBaseballLibrary::IsGuessNumberString(Input, Error))
    {
        Sender->ClientRPCShowInputError(Error);
        return;
    }
    const FMNBGuessResult Result = UMNBNumberBaseballLibrary::JudgeResult(SecretNumberString, Input);
    if (!Result.bValid || !PS->TryUseGuess()) return;
    bSubmittedThisTurn = true;
    BroadcastMessage(PS->GetPlayerInfoString() + TEXT(": ") + Input + TEXT(" → ") + Result.ToString());
    CompleteTurn(Sender, Result.Strikes);
}

void AMNBGameModeBase::PrintChatMessageString(AMNBPlayerController* Sender, const FString& Message)
{
    auto* PS = Sender ? Sender->GetPlayerState<AMNBPlayerState>() : nullptr;
    if (!PS || !AllPlayerControllers.Contains(Sender)) return;
    FString Clean = Message.TrimStartAndEnd();
    if (Clean.IsEmpty() || Clean.Len() > 200)
    {
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("채팅은 1~200자로 입력해주세요.")));
        return;
    }
    Clean.ReplaceInline(TEXT("\n"), TEXT(" "));
    Clean.ReplaceInline(TEXT("\r"), TEXT(" "));
    BroadcastMessage(PS->GetPlayerInfoString() + TEXT(" [채팅]: ") + Clean);
}

void AMNBGameModeBase::BroadcastMessage(const FString& Message)
{
    for (AMNBPlayerController* PC : AllPlayerControllers)
        if (IsValid(PC)) PC->ClientRPCPrintChatMessageString(Message);
}

bool AMNBGameModeBase::AreAllGuessesUsed() const
{
    if (AllPlayerControllers.IsEmpty()) return false;
    for (const AMNBPlayerController* PC : AllPlayerControllers)
    {
        const auto* PS = IsValid(PC) ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
        if (!PS || PS->HasGuessesLeft()) return false;
    }
    return true;
}

void AMNBGameModeBase::JudgeGame(AMNBPlayerController* Sender, int32 StrikeCount)
{
    if (StrikeCount == 3)
    {
        if (auto* PS = Sender->GetPlayerState<AMNBPlayerState>())
            FinishRound(PS->PlayerNameString + TEXT(" 승리! Winner! 3초 후 준비 화면으로 돌아갑니다."), PS);
    }
    else if (AreAllGuessesUsed()) FinishRound(TEXT("무승부! Draw... 3초 후 준비 화면으로 돌아갑니다."));
}

void AMNBGameModeBase::FinishRound(const FString& Message, AMNBPlayerState* Winner)
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS || GS->bRoundEnding || GS->bWaitingForReady) return;
    StopTurn();
    GS->bRoundEnding = true;
    if (Winner) Winner->AddWin();
    GS->ForceNetUpdate();
    SetNotification(Message);
    BroadcastMessage(Message);
    UE_LOG(LogTemp, Log, TEXT("MNB_ROUND_END round=%d %s"), GS->RoundNumber, *Message);
    GetWorldTimerManager().SetTimer(ResetTimer, this, &ThisClass::ResetGame, 3.f, false);
}

void AMNBGameModeBase::ResetGame()
{
    if (!HasAuthority()) return;
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS) return;
    StopTurn();
    SecretNumberString = UMNBNumberBaseballLibrary::GenerateSecretNumber();
    ++GS->RoundNumber;
    GS->bRoundEnding = false;
    GS->bWaitingForReady = true;
    ++GS->ReadyRevision;
    bRoundHasStarted = false;
    GS->ForceNetUpdate();
    CurrentNotification = FString::Printf(TEXT("ROUND %d | 모두 준비하면 게임을 시작합니다."), GS->RoundNumber);
    for (AMNBPlayerController* PC : AllPlayerControllers)
    {
        if (auto* PS = PC->GetPlayerState<AMNBPlayerState>())
        {
            PS->ResetGuesses();
            PS->SetReady(false);
        }
        PC->NotificationText = FText::FromString(CurrentNotification);
        PC->ClientRPCShowInputError(FText::GetEmpty());
        PC->ForceNetUpdate();
    }
    BroadcastMessage(CurrentNotification);
    UE_LOG(LogTemp, Log, TEXT("MNB_ROUND_PREPARE round=%d"), GS->RoundNumber);
#if !UE_BUILD_SHIPPING
    UE_LOG(LogTemp, Log, TEXT("MNB_SECRET round=%d secret=%s"), GS->RoundNumber, *SecretNumberString);
#endif
}

void AMNBGameModeBase::StopTurn()
{
    GetWorldTimerManager().ClearTimer(TurnTimer);
    if (auto* GS = GetGameState<AMNBGameStateBase>())
    {
        GS->Turn.bActive = false;
        GS->Turn.Player = nullptr;
        GS->Turn.EndServerTime = 0;
        GS->ForceNetUpdate();
    }
}

void AMNBGameModeBase::StartNextTurn(int32 StartIndex)
{
    StopTurn();
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS || GS->bRoundEnding || GS->bWaitingForReady || AllPlayerControllers.Num() < 2) return;
    const int32 Count = AllPlayerControllers.Num();
    for (int32 Offset = 0; Offset < Count; ++Offset)
    {
        auto* PC = AllPlayerControllers[(StartIndex + Offset) % Count].Get();
        auto* PS = IsValid(PC) ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
        if (!PS || !PS->HasGuessesLeft()) continue;
        bSubmittedThisTurn = false;
        GS->Turn.Player = PS;
        ++GS->Turn.Id;
        GS->Turn.bActive = true;
        const float Duration = FMath::Clamp(TurnDurationSeconds, 1.f, 120.f);
        GS->Turn.DurationSeconds = Duration;
        GS->Turn.EndServerTime = GS->GetServerWorldTimeSeconds() + Duration;
        GS->ForceNetUpdate();
        GetWorldTimerManager().SetTimer(TurnTimer,
            FTimerDelegate::CreateUObject(this, &ThisClass::OnTurnExpired, GS->Turn.Id), Duration, false);
        UE_LOG(LogTemp, Log, TEXT("MNB_TURN_BEGIN round=%d turn=%d player=%s"), GS->RoundNumber, GS->Turn.Id, *PS->PlayerNameString);
        return;
    }
    if (AreAllGuessesUsed()) FinishRound(TEXT("무승부! Draw... 3초 후 준비 화면으로 돌아갑니다."));
}

void AMNBGameModeBase::OnTurnExpired(int32 ExpectedTurnId)
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS || GS->bRoundEnding || !GS->Turn.bActive || GS->Turn.Id != ExpectedTurnId || bSubmittedThisTurn) return;
    const double Remaining = GS->GetRemainingTurnSeconds();
    if (Remaining > 0.0)
    {
        GetWorldTimerManager().SetTimer(TurnTimer,
            FTimerDelegate::CreateUObject(this, &ThisClass::OnTurnExpired, ExpectedTurnId),
            FMath::Max(.001f, static_cast<float>(Remaining)), false);
        return;
    }
    for (AMNBPlayerController* PC : AllPlayerControllers)
    {
        auto* PS = IsValid(PC) ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
        if (PS != GS->Turn.Player) continue;
        if (PS && PS->TryUseGuess())
        {
            BroadcastMessage(PS->GetPlayerInfoString() + TEXT(": 시간 초과! 기회 1회를 사용했습니다."));
            UE_LOG(LogTemp, Log, TEXT("MNB_TIMEOUT turn=%d player=%s submitted=%d"), ExpectedTurnId, *PS->PlayerNameString, bSubmittedThisTurn);
        }
        CompleteTurn(PC, 0);
        return;
    }
    StartNextTurn(0);
}

void AMNBGameModeBase::CompleteTurn(AMNBPlayerController* Player, int32 Strikes)
{
    const int32 NextIndex = AllPlayerControllers.IndexOfByKey(Player) + 1;
    StopTurn();
    JudgeGame(Player, Strikes);
    if (const auto* GS = GetGameState<AMNBGameStateBase>(); GS && !GS->bRoundEnding)
        StartNextTurn(NextIndex);
}

void AMNBGameModeBase::SetNotification(const FString& Message)
{
    CurrentNotification = Message;
    for (AMNBPlayerController* PC : AllPlayerControllers)
    {
        PC->NotificationText = FText::FromString(Message);
        PC->ForceNetUpdate();
    }
}

void AMNBGameModeBase::SetPlayerReady(AMNBPlayerController* Sender, bool bReady, int32 RoundNumber, int32 ReadyRevision)
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    auto* PS = Sender ? Sender->GetPlayerState<AMNBPlayerState>() : nullptr;
    if (!GS || !PS || !AllPlayerControllers.Contains(Sender)) return;
    if (!GS->bWaitingForReady || GS->bRoundEnding || GS->RoundNumber != RoundNumber || GS->ReadyRevision != ReadyRevision)
    {
        Sender->ClientRPCShowInputError(FText::FromString(TEXT("현재 준비 상태를 변경할 수 없습니다.")));
        return;
    }
    PS->SetReady(bReady);
    TryStartRound();
}

void AMNBGameModeBase::TryStartRound()
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS || !GS->bWaitingForReady || GS->bRoundEnding || AllPlayerControllers.Num() < 2) return;
    for (const AMNBPlayerController* PC : AllPlayerControllers)
    {
        const auto* PS = IsValid(PC) ? PC->GetPlayerState<AMNBPlayerState>() : nullptr;
        if (!PS || !PS->IsReady()) return;
    }
    GS->bWaitingForReady = false;
    GS->ForceNetUpdate();
    SetNotification(FString::Printf(TEXT("ROUND %d | 1~9의 서로 다른 숫자 3개를 맞혀보세요!"), GS->RoundNumber));
    UE_LOG(LogTemp, Log, TEXT("MNB_%s round=%d"), bRoundHasStarted ? TEXT("ROUND_RESUME") : TEXT("ROUND_BEGIN"), GS->RoundNumber);
    bRoundHasStarted = true;
    BroadcastMessage(CurrentNotification);
    StartNextTurn(0);
}

void AMNBGameModeBase::WaitForReady()
{
    auto* GS = GetGameState<AMNBGameStateBase>();
    if (!GS || GS->bRoundEnding) return;
    StopTurn();
    GS->bWaitingForReady = true;
    ++GS->ReadyRevision;
    GS->ForceNetUpdate();
    for (AMNBPlayerController* PC : AllPlayerControllers)
        if (auto* PS = PC->GetPlayerState<AMNBPlayerState>()) PS->SetReady(false);
    SetNotification(TEXT("플레이어를 기다립니다. 두 명 이상 모두 준비하면 재개합니다."));
}
