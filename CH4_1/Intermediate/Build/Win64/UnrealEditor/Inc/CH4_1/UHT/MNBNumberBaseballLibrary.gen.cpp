// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/MNBNumberBaseballLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBNumberBaseballLibrary() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary();
CH4_1_API UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary_NoRegister();
CH4_1_API UScriptStruct* Z_Construct_UScriptStruct_FMNBGuessResult();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMNBGuessResult ***************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMNBGuessResult;
class UScriptStruct* FMNBGuessResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMNBGuessResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMNBGuessResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMNBGuessResult, (UObject*)Z_Construct_UPackage__Script_CH4_1(), TEXT("MNBGuessResult"));
	}
	return Z_Registration_Info_UScriptStruct_FMNBGuessResult.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMNBGuessResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strikes_MetaData[] = {
		{ "Category", "MNBGuessResult" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Balls_MetaData[] = {
		{ "Category", "MNBGuessResult" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "MNBGuessResult" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Strikes;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Balls;
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMNBGuessResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_Strikes = { "Strikes", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBGuessResult, Strikes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strikes_MetaData), NewProp_Strikes_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_Balls = { "Balls", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBGuessResult, Balls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Balls_MetaData), NewProp_Balls_MetaData) };
void Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FMNBGuessResult*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMNBGuessResult), &Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMNBGuessResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_Strikes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_Balls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewProp_bValid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBGuessResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMNBGuessResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
	nullptr,
	&NewStructOps,
	"MNBGuessResult",
	Z_Construct_UScriptStruct_FMNBGuessResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBGuessResult_Statics::PropPointers),
	sizeof(FMNBGuessResult),
	alignof(FMNBGuessResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBGuessResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMNBGuessResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMNBGuessResult()
{
	if (!Z_Registration_Info_UScriptStruct_FMNBGuessResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMNBGuessResult.InnerSingleton, Z_Construct_UScriptStruct_FMNBGuessResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMNBGuessResult.InnerSingleton;
}
// ********** End ScriptStruct FMNBGuessResult *****************************************************

// ********** Begin Class UMNBNumberBaseballLibrary Function GenerateSecretNumber ******************
struct Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics
{
	struct MNBNumberBaseballLibrary_eventGenerateSecretNumber_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MNB|Rules" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventGenerateSecretNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBNumberBaseballLibrary, nullptr, "GenerateSecretNumber", Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::MNBNumberBaseballLibrary_eventGenerateSecretNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::MNBNumberBaseballLibrary_eventGenerateSecretNumber_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBNumberBaseballLibrary::execGenerateSecretNumber)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UMNBNumberBaseballLibrary::GenerateSecretNumber();
	P_NATIVE_END;
}
// ********** End Class UMNBNumberBaseballLibrary Function GenerateSecretNumber ********************

// ********** Begin Class UMNBNumberBaseballLibrary Function IsGuessNumberString *******************
struct Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics
{
	struct MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms
	{
		FString Input;
		FText Error;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MNB|Rules" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Error;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_Error = { "Error", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms, Error), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms), &Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_Error,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBNumberBaseballLibrary, nullptr, "IsGuessNumberString", Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::MNBNumberBaseballLibrary_eventIsGuessNumberString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBNumberBaseballLibrary::execIsGuessNumberString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Error);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMNBNumberBaseballLibrary::IsGuessNumberString(Z_Param_Input,Z_Param_Out_Error);
	P_NATIVE_END;
}
// ********** End Class UMNBNumberBaseballLibrary Function IsGuessNumberString *********************

// ********** Begin Class UMNBNumberBaseballLibrary Function JudgeResult ***************************
struct Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics
{
	struct MNBNumberBaseballLibrary_eventJudgeResult_Parms
	{
		FString Secret;
		FString Guess;
		FMNBGuessResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "MNB|Rules" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Secret_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Secret;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Guess;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_Secret = { "Secret", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventJudgeResult_Parms, Secret), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Secret_MetaData), NewProp_Secret_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_Guess = { "Guess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventJudgeResult_Parms, Guess), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guess_MetaData), NewProp_Guess_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBNumberBaseballLibrary_eventJudgeResult_Parms, ReturnValue), Z_Construct_UScriptStruct_FMNBGuessResult, METADATA_PARAMS(0, nullptr) }; // 65886134
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_Secret,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_Guess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBNumberBaseballLibrary, nullptr, "JudgeResult", Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::MNBNumberBaseballLibrary_eventJudgeResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::MNBNumberBaseballLibrary_eventJudgeResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBNumberBaseballLibrary::execJudgeResult)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Secret);
	P_GET_PROPERTY(FStrProperty,Z_Param_Guess);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FMNBGuessResult*)Z_Param__Result=UMNBNumberBaseballLibrary::JudgeResult(Z_Param_Secret,Z_Param_Guess);
	P_NATIVE_END;
}
// ********** End Class UMNBNumberBaseballLibrary Function JudgeResult *****************************

// ********** Begin Class UMNBNumberBaseballLibrary ************************************************
void UMNBNumberBaseballLibrary::StaticRegisterNativesUMNBNumberBaseballLibrary()
{
	UClass* Class = UMNBNumberBaseballLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateSecretNumber", &UMNBNumberBaseballLibrary::execGenerateSecretNumber },
		{ "IsGuessNumberString", &UMNBNumberBaseballLibrary::execIsGuessNumberString },
		{ "JudgeResult", &UMNBNumberBaseballLibrary::execJudgeResult },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMNBNumberBaseballLibrary;
UClass* UMNBNumberBaseballLibrary::GetPrivateStaticClass()
{
	using TClass = UMNBNumberBaseballLibrary;
	if (!Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBNumberBaseballLibrary"),
			Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.InnerSingleton,
			StaticRegisterNativesUMNBNumberBaseballLibrary,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary_NoRegister()
{
	return UMNBNumberBaseballLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Library/MNBNumberBaseballLibrary.h" },
		{ "ModuleRelativePath", "Library/MNBNumberBaseballLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMNBNumberBaseballLibrary_GenerateSecretNumber, "GenerateSecretNumber" }, // 3005570962
		{ &Z_Construct_UFunction_UMNBNumberBaseballLibrary_IsGuessNumberString, "IsGuessNumberString" }, // 448358482
		{ &Z_Construct_UFunction_UMNBNumberBaseballLibrary_JudgeResult, "JudgeResult" }, // 2394304683
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMNBNumberBaseballLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::ClassParams = {
	&UMNBNumberBaseballLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary()
{
	if (!Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.OuterSingleton, Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMNBNumberBaseballLibrary.OuterSingleton;
}
UMNBNumberBaseballLibrary::UMNBNumberBaseballLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMNBNumberBaseballLibrary);
UMNBNumberBaseballLibrary::~UMNBNumberBaseballLibrary() {}
// ********** End Class UMNBNumberBaseballLibrary **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMNBGuessResult::StaticStruct, Z_Construct_UScriptStruct_FMNBGuessResult_Statics::NewStructOps, TEXT("MNBGuessResult"), &Z_Registration_Info_UScriptStruct_FMNBGuessResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMNBGuessResult), 65886134U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMNBNumberBaseballLibrary, UMNBNumberBaseballLibrary::StaticClass, TEXT("UMNBNumberBaseballLibrary"), &Z_Registration_Info_UClass_UMNBNumberBaseballLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMNBNumberBaseballLibrary), 1682484520U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_168767503(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h__Script_CH4_1_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
