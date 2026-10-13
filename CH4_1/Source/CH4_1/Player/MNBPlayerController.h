#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "MNBPlayerController.generated.h"
class UMNBChatInput;
class UUserWidget;

UCLASS()
class CH4_1_API AMNBPlayerController : public APlayerController
{
    GENERATED_BODY()
public:
    AMNBPlayerController();
    virtual void BeginPlay() override;
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    void SubmitGuess(const FString& Input);
    void SetReady(bool bReady);
    UFUNCTION(Server, Reliable) void ServerRPCSetReady(bool bReady, int32 RoundNumber, int32 ReadyRevision);
    void SetChatMessageString(const FString& Input);
    void PrintChatMessageString(const FString& Message);
    const TArray<FString>& GetChatMessages() const { return ChatMessages; }
    UFUNCTION(Server, Reliable) void ServerRPCSubmitGuess(const FString& Input, int32 RoundNumber, int32 TurnId);
    UFUNCTION(Server, Reliable) void ServerRPCPrintChatMessageString(const FString& Input);
    UFUNCTION(Client, Reliable) void ClientRPCPrintChatMessageString(const FString& Message);
    UFUNCTION(Client, Reliable) void ClientRPCShowInputError(const FText& Message);
    UPROPERTY(Replicated, BlueprintReadOnly) FText NotificationText;
    UPROPERTY(BlueprintReadOnly) FText InputError;
    UPROPERTY(EditDefaultsOnly, Category="MNB|UI") TSubclassOf<UMNBChatInput> ChatInputWidgetClass;
    UPROPERTY(EditDefaultsOnly, Category="MNB|UI") TSubclassOf<UUserWidget> NotificationTextWidgetClass;
private:
    UPROPERTY() TObjectPtr<UMNBChatInput> ChatInputWidget;
    UPROPERTY() TObjectPtr<UUserWidget> NotificationTextWidget;
    TArray<FString> ChatMessages;
};
