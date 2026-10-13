#include "Library/MNBNumberBaseballLibrary.h"

FString FMNBGuessResult::ToString() const
{
    if (!bValid) return TEXT("INVALID");
    return Strikes == 0 && Balls == 0 ? TEXT("OUT") : FString::Printf(TEXT("%dS%dB"), Strikes, Balls);
}

FString UMNBNumberBaseballLibrary::GenerateSecretNumber()
{
    TArray<int32> Numbers{1,2,3,4,5,6,7,8,9};
    FString Secret;
    for (int32 Index = 0; Index < 3; ++Index)
    {
        const int32 Pick = FMath::RandRange(0, Numbers.Num() - 1);
        Secret += FString::FromInt(Numbers[Pick]);
        Numbers.RemoveAt(Pick);
    }
    return Secret;
}

bool UMNBNumberBaseballLibrary::IsGuessNumberString(const FString& Input, FText& Error)
{
    Error = FText::GetEmpty();
    if (Input.Len() != 3)
    {
        Error = FText::FromString(TEXT("3자리 숫자를 입력해주세요. 다시 입력하세요."));
        return false;
    }
    TSet<TCHAR> UniqueDigits;
    for (const TCHAR Digit : Input)
    {
        if (Digit < TEXT('1') || Digit > TEXT('9'))
        {
            Error = FText::FromString(TEXT("1~9 숫자만 사용할 수 있습니다. 다시 입력하세요."));
            return false;
        }
        if (UniqueDigits.Contains(Digit))
        {
            Error = FText::FromString(TEXT("중복되지 않은 숫자를 입력해주세요. 다시 입력하세요."));
            return false;
        }
        UniqueDigits.Add(Digit);
    }
    return true;
}

FMNBGuessResult UMNBNumberBaseballLibrary::JudgeResult(const FString& Secret, const FString& Guess)
{
    FMNBGuessResult Result;
    FText Error;
    if (!IsGuessNumberString(Secret, Error) || !IsGuessNumberString(Guess, Error)) return Result;
    Result.bValid = true;
    for (int32 Index = 0; Index < 3; ++Index)
    {
        if (Secret[Index] == Guess[Index]) ++Result.Strikes;
        else if (Secret.Contains(FString::Chr(Guess[Index]))) ++Result.Balls;
    }
    return Result;
}
