#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/EditableTextBox.h"
#include "MNBChatInput.generated.h"
class UButton;
class UTextBlock;
class UScrollBox;
class UProgressBar;

UCLASS()
class CH4_1_API UMNBChatInput : public UUserWidget
{
    GENERATED_BODY()
public:
    virtual void NativeConstruct() override;
    virtual void NativeTick(const FGeometry& Geometry, float DeltaSeconds) override;
    void AppendMessage(const FString& Message);
protected:
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UEditableTextBox> GuessInput;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UEditableTextBox> EditableTextBox_ChatInput;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> GuessButton;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UButton> ChatButton;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> TurnStatusText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UButton> ReadyButton;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> ReadyButtonText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UProgressBar> TurnProgress;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> LocalNameText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> LocalWinsText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> LocalDetailsText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> OpponentNameText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> OpponentWinsText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> OpponentDetailsText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> TimerValueText;
    UPROPERTY(meta=(BindWidgetOptional)) TObjectPtr<UTextBlock> RoundText;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> PlayerInfoText;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UTextBlock> InputErrorText;
    UPROPERTY(meta=(BindWidget)) TObjectPtr<UScrollBox> MessageList;
private:
    UFUNCTION() void ToggleReady();
    UFUNCTION() void SendGuess();
    UFUNCTION() void SendChat();
    UFUNCTION() void OnGuessCommitted(const FText& Text, ETextCommit::Type Method);
    UFUNCTION() void OnChatCommitted(const FText& Text, ETextCommit::Type Method);
};
