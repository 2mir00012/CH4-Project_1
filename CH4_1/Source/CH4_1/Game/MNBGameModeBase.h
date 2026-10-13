#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MNBGameModeBase.generated.h"
class AMNBPlayerController;
class AMNBPlayerState;

UCLASS()
class CH4_1_API AMNBGameModeBase : public AGameModeBase
{
    GENERATED_BODY()
public:
    AMNBGameModeBase();
    virtual void BeginPlay() override;
    virtual void OnPostLogin(AController* NewPlayer) override;
    virtual void Logout(AController* Exiting) override;
    void SubmitGuess(AMNBPlayerController* Sender, const FString& Input, int32 RoundNumber, int32 TurnId);
    void PrintChatMessageString(AMNBPlayerController* Sender, const FString& Message);
    void JudgeGame(AMNBPlayerController* Sender, int32 StrikeCount);
    void ResetGame();
    void SetPlayerReady(AMNBPlayerController* Sender, bool bReady, int32 RoundNumber, int32 ReadyRevision);
    UPROPERTY(EditDefaultsOnly, Category="MNB|Turn", meta=(ClampMin="1.0", ClampMax="120.0"))
    float TurnDurationSeconds = 20.f;
private:
    void StartNextTurn(int32 StartIndex);
    void StopTurn();
    void OnTurnExpired(int32 ExpectedTurnId);
    void CompleteTurn(AMNBPlayerController* Player, int32 Strikes);
    FTimerHandle TurnTimer;
    bool bSubmittedThisTurn = false;
    void BroadcastMessage(const FString& Message);
    void FinishRound(const FString& Message, AMNBPlayerState* Winner = nullptr);
    void TryStartRound();
    void WaitForReady();
    void SetNotification(const FString& Message);
    bool bRoundHasStarted = false;
    bool AreAllGuessesUsed() const;
    FString SecretNumberString;
    FString CurrentNotification;
    UPROPERTY() TArray<TObjectPtr<AMNBPlayerController>> AllPlayerControllers;
    int32 NextPlayerNumber = 1;
    FTimerHandle ResetTimer;
};
