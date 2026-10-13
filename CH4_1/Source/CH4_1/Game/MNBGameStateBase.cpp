#include "Game/MNBGameStateBase.h"
#include "Player/MNBPlayerController.h"
#include "Net/UnrealNetwork.h"
#include "EngineUtils.h"

AMNBGameStateBase::AMNBGameStateBase()
{
    ServerWorldTimeSecondsUpdateFrequency = 1.f;
    SetNetUpdateFrequency(10.f);
}

double AMNBGameStateBase::GetRemainingTurnSeconds() const
{
    return Turn.bActive ? FMath::Max(0.0, Turn.EndServerTime - GetServerWorldTimeSeconds()) : 0.0;
}

void AMNBGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AMNBGameStateBase, RoundNumber);
    DOREPLIFETIME(AMNBGameStateBase, Turn);
    DOREPLIFETIME(AMNBGameStateBase, bRoundEnding);
    DOREPLIFETIME(AMNBGameStateBase, bWaitingForReady);
    DOREPLIFETIME(AMNBGameStateBase, ReadyRevision);
}

void AMNBGameStateBase::MulticastRPCBroadcastLoginMessage_Implementation(const FString& Name)
{
    for (TActorIterator<AMNBPlayerController> It(GetWorld()); It; ++It)
    {
        if (It->IsLocalController()) It->PrintChatMessageString(Name + TEXT(" 님이 접속했습니다."));
    }
}
