#include "Player/MNBPlayerState.h"
#include "Net/UnrealNetwork.h"

AMNBPlayerState::AMNBPlayerState() { bReplicates = true; }

void AMNBPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(AMNBPlayerState, PlayerNameString);
    DOREPLIFETIME(AMNBPlayerState, WinCount);
    DOREPLIFETIME(AMNBPlayerState, bReady);
    DOREPLIFETIME(AMNBPlayerState, CurrentGuessCount);
    DOREPLIFETIME(AMNBPlayerState, MaxGuessCount);
}

FString AMNBPlayerState::GetPlayerInfoString() const
{
    return FString::Printf(TEXT("%s [%d/%d]"), *PlayerNameString, CurrentGuessCount, MaxGuessCount);
}

void AMNBPlayerState::InitializePlayer(int32 Number)
{
    if (!HasAuthority()) return;
    PlayerNameString = FString::Printf(TEXT("Player%d"), Number);
    SetPlayerName(PlayerNameString);
    ResetGuesses();
}

bool AMNBPlayerState::TryUseGuess()
{
    if (!HasAuthority() || !HasGuessesLeft()) return false;
    ++CurrentGuessCount;
    ForceNetUpdate();
    return true;
}

void AMNBPlayerState::ResetGuesses()
{
    if (!HasAuthority()) return;
    CurrentGuessCount = 0;
    ForceNetUpdate();
}

void AMNBPlayerState::AddWin()
{
    if (!HasAuthority()) return;
    ++WinCount;
    ForceNetUpdate();
}

void AMNBPlayerState::SetReady(bool bNewReady)
{
    if (!HasAuthority()) return;
    bReady = bNewReady;
    ForceNetUpdate();
}
