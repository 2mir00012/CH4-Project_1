#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MNBNumberBaseballLibrary.generated.h"

USTRUCT(BlueprintType)
struct CH4_1_API FMNBGuessResult
{
    GENERATED_BODY()
    UPROPERTY(BlueprintReadOnly) int32 Strikes = 0;
    UPROPERTY(BlueprintReadOnly) int32 Balls = 0;
    UPROPERTY(BlueprintReadOnly) bool bValid = false;
    FString ToString() const;
};


UCLASS()
class CH4_1_API UMNBNumberBaseballLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category="MNB|Rules")
    static FString GenerateSecretNumber();
    UFUNCTION(BlueprintPure, Category="MNB|Rules")
    static bool IsGuessNumberString(const FString& Input, FText& Error);
    UFUNCTION(BlueprintPure, Category="MNB|Rules")
    static FMNBGuessResult JudgeResult(const FString& Secret, const FString& Guess);
};
