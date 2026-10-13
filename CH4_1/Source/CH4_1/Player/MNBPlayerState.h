#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MNBPlayerState.generated.h"

UCLASS()
class CH4_1_API AMNBPlayerState : public APlayerState
{
    GENERATED_BODY()
public:
    AMNBPlayerState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    UFUNCTION(BlueprintPure) FString GetPlayerInfoString() const;
    UFUNCTION(BlueprintPure) int32 GetCurrentGuessCount() const { return CurrentGuessCount; }
    UFUNCTION(BlueprintPure) int32 GetMaxGuessCount() const { return MaxGuessCount; }
    UFUNCTION(BlueprintPure) bool HasGuessesLeft() const { return CurrentGuessCount < MaxGuessCount; }
    void InitializePlayer(int32 Number);
    bool TryUseGuess();
    void ResetGuesses();
    UFUNCTION(BlueprintPure) int32 GetWinCount() const { return WinCount; }
    UFUNCTION(BlueprintPure) bool IsReady() const { return bReady; }
    void AddWin();
    void SetReady(bool bNewReady);
    UPROPERTY(Replicated, BlueprintReadOnly) FString PlayerNameString;
private:
    UPROPERTY(Replicated) int32 WinCount = 0;
    UPROPERTY(Replicated) bool bReady = false;
    UPROPERTY(Replicated) int32 CurrentGuessCount = 0;
    UPROPERTY(Replicated) int32 MaxGuessCount = 3;
};
