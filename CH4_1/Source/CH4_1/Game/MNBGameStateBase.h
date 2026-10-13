#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "MNBGameStateBase.generated.h"

class AMNBPlayerState;

USTRUCT(BlueprintType)
struct FMNBTurnState
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly) TObjectPtr<AMNBPlayerState> Player = nullptr;
    UPROPERTY(BlueprintReadOnly) int32 Id = 0;
    UPROPERTY(BlueprintReadOnly) double EndServerTime = 0;
    UPROPERTY(BlueprintReadOnly) float DurationSeconds = 20.f;
    UPROPERTY(BlueprintReadOnly) bool bActive = false;
};

UCLASS()
class CH4_1_API AMNBGameStateBase : public AGameStateBase
{
    GENERATED_BODY()
public:
    AMNBGameStateBase();
    UFUNCTION(BlueprintPure) double GetRemainingTurnSeconds() const;
    UPROPERTY(Replicated, BlueprintReadOnly) FMNBTurnState Turn;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    UPROPERTY(Replicated, BlueprintReadOnly) int32 RoundNumber = 0;
    UPROPERTY(Replicated, BlueprintReadOnly) bool bRoundEnding = false;
    UPROPERTY(Replicated, BlueprintReadOnly) bool bWaitingForReady = true;
    UPROPERTY(Replicated, BlueprintReadOnly) int32 ReadyRevision = 0;
    UFUNCTION(NetMulticast, Reliable)
    void MulticastRPCBroadcastLoginMessage(const FString& Name);
};
