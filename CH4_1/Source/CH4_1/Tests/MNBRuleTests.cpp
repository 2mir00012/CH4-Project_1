#if WITH_DEV_AUTOMATION_TESTS
#include "Misc/AutomationTest.h"
#include "Library/MNBNumberBaseballLibrary.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMNBRuleTest, "MNB.Required.Rules", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
bool FMNBRuleTest::RunTest(const FString& Parameters)
{
    FText Error;
    for (const FString& Input : TArray<FString>{TEXT(""),TEXT("12"),TEXT("1234"),TEXT("abc"),TEXT("1a3"),TEXT("012"),TEXT("112"),TEXT("111"),TEXT(" 123"),TEXT("123 "),TEXT("１２３"),TEXT("-12"),TEXT("a123")})
    {
        TestFalse(TEXT("Invalid: ") + Input, UMNBNumberBaseballLibrary::IsGuessNumberString(Input, Error));
        TestFalse(TEXT("Invalid input has guidance"), Error.IsEmpty());
    }
    int32 ValidCount = 0;
    for (int32 A = 1; A <= 9; ++A)
        for (int32 B = 1; B <= 9; ++B)
            for (int32 C = 1; C <= 9; ++C)
            {
                const FString Guess = FString::Printf(TEXT("%d%d%d"), A, B, C);
                const bool bExpected = A != B && A != C && B != C;
                TestEqual(TEXT("Exhaustive validation ") + Guess, UMNBNumberBaseballLibrary::IsGuessNumberString(Guess, Error), bExpected);
                if (bExpected)
                {
                    ++ValidCount;
                    int32 S = 0, BCount = 0;
                    const FString Secret = TEXT("386");
                    for (int32 I = 0; I < 3; ++I)
                        for (int32 J = 0; J < 3; ++J)
                            if (Guess[I] == Secret[J]) { if (I == J) ++S; else ++BCount; }
                    const auto Result = UMNBNumberBaseballLibrary::JudgeResult(Secret, Guess);
                    TestEqual(TEXT("Strikes ") + Guess, Result.Strikes, S);
                    TestEqual(TEXT("Balls ") + Guess, Result.Balls, BCount);
                }
            }
    TestEqual(TEXT("504 legal guesses"), ValidCount, 504);
    TestEqual(TEXT("OUT"), UMNBNumberBaseballLibrary::JudgeResult(TEXT("386"), TEXT("127")).ToString(), FString(TEXT("OUT")));
    TestEqual(TEXT("Ball"), UMNBNumberBaseballLibrary::JudgeResult(TEXT("386"), TEXT("123")).ToString(), FString(TEXT("0S1B")));
    TestEqual(TEXT("Win"), UMNBNumberBaseballLibrary::JudgeResult(TEXT("386"), TEXT("386")).ToString(), FString(TEXT("3S0B")));
    TestFalse(TEXT("Invalid judge input is safe"), UMNBNumberBaseballLibrary::JudgeResult(TEXT("386"), TEXT("1")).bValid);
    for (int32 N = 0; N < 1000; ++N)
        TestTrue(TEXT("Generated legal secret"), UMNBNumberBaseballLibrary::IsGuessNumberString(UMNBNumberBaseballLibrary::GenerateSecretNumber(), Error));
    return !HasAnyErrors();
}
#endif
