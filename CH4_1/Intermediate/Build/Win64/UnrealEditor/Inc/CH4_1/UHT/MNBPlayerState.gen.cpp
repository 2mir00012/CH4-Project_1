// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MNBPlayerState.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBPlayerState() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerState();
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMNBPlayerState Function GetCurrentGuessCount ****************************
struct Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics
{
	struct MNBPlayerState_eventGetCurrentGuessCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerState_eventGetCurrentGuessCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "GetCurrentGuessCount", Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::MNBPlayerState_eventGetCurrentGuessCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::MNBPlayerState_eventGetCurrentGuessCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execGetCurrentGuessCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentGuessCount();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function GetCurrentGuessCount ******************************

// ********** Begin Class AMNBPlayerState Function GetMaxGuessCount ********************************
struct Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics
{
	struct MNBPlayerState_eventGetMaxGuessCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerState_eventGetMaxGuessCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "GetMaxGuessCount", Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::MNBPlayerState_eventGetMaxGuessCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::MNBPlayerState_eventGetMaxGuessCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execGetMaxGuessCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxGuessCount();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function GetMaxGuessCount **********************************

// ********** Begin Class AMNBPlayerState Function GetPlayerInfoString *****************************
struct Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics
{
	struct MNBPlayerState_eventGetPlayerInfoString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerState_eventGetPlayerInfoString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "GetPlayerInfoString", Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::MNBPlayerState_eventGetPlayerInfoString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::MNBPlayerState_eventGetPlayerInfoString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execGetPlayerInfoString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetPlayerInfoString();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function GetPlayerInfoString *******************************

// ********** Begin Class AMNBPlayerState Function GetWinCount *************************************
struct Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics
{
	struct MNBPlayerState_eventGetWinCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerState_eventGetWinCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "GetWinCount", Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::MNBPlayerState_eventGetWinCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::MNBPlayerState_eventGetWinCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_GetWinCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_GetWinCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execGetWinCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetWinCount();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function GetWinCount ***************************************

// ********** Begin Class AMNBPlayerState Function HasGuessesLeft **********************************
struct Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics
{
	struct MNBPlayerState_eventHasGuessesLeft_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MNBPlayerState_eventHasGuessesLeft_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MNBPlayerState_eventHasGuessesLeft_Parms), &Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "HasGuessesLeft", Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::MNBPlayerState_eventHasGuessesLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::MNBPlayerState_eventHasGuessesLeft_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execHasGuessesLeft)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasGuessesLeft();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function HasGuessesLeft ************************************

// ********** Begin Class AMNBPlayerState Function IsReady *****************************************
struct Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics
{
	struct MNBPlayerState_eventIsReady_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MNBPlayerState_eventIsReady_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MNBPlayerState_eventIsReady_Parms), &Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerState, nullptr, "IsReady", Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::MNBPlayerState_eventIsReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::MNBPlayerState_eventIsReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerState_IsReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerState_IsReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerState::execIsReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReady();
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerState Function IsReady *******************************************

// ********** Begin Class AMNBPlayerState **********************************************************
void AMNBPlayerState::StaticRegisterNativesAMNBPlayerState()
{
	UClass* Class = AMNBPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentGuessCount", &AMNBPlayerState::execGetCurrentGuessCount },
		{ "GetMaxGuessCount", &AMNBPlayerState::execGetMaxGuessCount },
		{ "GetPlayerInfoString", &AMNBPlayerState::execGetPlayerInfoString },
		{ "GetWinCount", &AMNBPlayerState::execGetWinCount },
		{ "HasGuessesLeft", &AMNBPlayerState::execHasGuessesLeft },
		{ "IsReady", &AMNBPlayerState::execIsReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMNBPlayerState;
UClass* AMNBPlayerState::GetPrivateStaticClass()
{
	using TClass = AMNBPlayerState;
	if (!Z_Registration_Info_UClass_AMNBPlayerState.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBPlayerState"),
			Z_Registration_Info_UClass_AMNBPlayerState.InnerSingleton,
			StaticRegisterNativesAMNBPlayerState,
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
	return Z_Registration_Info_UClass_AMNBPlayerState.InnerSingleton;
}
UClass* Z_Construct_UClass_AMNBPlayerState_NoRegister()
{
	return AMNBPlayerState::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMNBPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Player/MNBPlayerState.h" },
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerNameString_MetaData[] = {
		{ "Category", "MNBPlayerState" },
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WinCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReady_MetaData[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxGuessCount_MetaData[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerNameString;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WinCount;
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentGuessCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxGuessCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMNBPlayerState_GetCurrentGuessCount, "GetCurrentGuessCount" }, // 3074359159
		{ &Z_Construct_UFunction_AMNBPlayerState_GetMaxGuessCount, "GetMaxGuessCount" }, // 3237871225
		{ &Z_Construct_UFunction_AMNBPlayerState_GetPlayerInfoString, "GetPlayerInfoString" }, // 1306908341
		{ &Z_Construct_UFunction_AMNBPlayerState_GetWinCount, "GetWinCount" }, // 153831473
		{ &Z_Construct_UFunction_AMNBPlayerState_HasGuessesLeft, "HasGuessesLeft" }, // 1973554865
		{ &Z_Construct_UFunction_AMNBPlayerState_IsReady, "IsReady" }, // 1472125765
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMNBPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_PlayerNameString = { "PlayerNameString", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerState, PlayerNameString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerNameString_MetaData), NewProp_PlayerNameString_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_WinCount = { "WinCount", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerState, WinCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WinCount_MetaData), NewProp_WinCount_MetaData) };
void Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((AMNBPlayerState*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMNBPlayerState), &Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReady_MetaData), NewProp_bReady_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_CurrentGuessCount = { "CurrentGuessCount", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerState, CurrentGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentGuessCount_MetaData), NewProp_CurrentGuessCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_MaxGuessCount = { "MaxGuessCount", nullptr, (EPropertyFlags)0x0040000000000020, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerState, MaxGuessCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxGuessCount_MetaData), NewProp_MaxGuessCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMNBPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_PlayerNameString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_WinCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_bReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_CurrentGuessCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerState_Statics::NewProp_MaxGuessCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMNBPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMNBPlayerState_Statics::ClassParams = {
	&AMNBPlayerState::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMNBPlayerState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerState_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AMNBPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMNBPlayerState()
{
	if (!Z_Registration_Info_UClass_AMNBPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMNBPlayerState.OuterSingleton, Z_Construct_UClass_AMNBPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMNBPlayerState.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AMNBPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_PlayerNameString(TEXT("PlayerNameString"));
	static FName Name_WinCount(TEXT("WinCount"));
	static FName Name_bReady(TEXT("bReady"));
	static FName Name_CurrentGuessCount(TEXT("CurrentGuessCount"));
	static FName Name_MaxGuessCount(TEXT("MaxGuessCount"));
	const bool bIsValid = true
		&& Name_PlayerNameString == ClassReps[(int32)ENetFields_Private::PlayerNameString].Property->GetFName()
		&& Name_WinCount == ClassReps[(int32)ENetFields_Private::WinCount].Property->GetFName()
		&& Name_bReady == ClassReps[(int32)ENetFields_Private::bReady].Property->GetFName()
		&& Name_CurrentGuessCount == ClassReps[(int32)ENetFields_Private::CurrentGuessCount].Property->GetFName()
		&& Name_MaxGuessCount == ClassReps[(int32)ENetFields_Private::MaxGuessCount].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMNBPlayerState"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AMNBPlayerState);
AMNBPlayerState::~AMNBPlayerState() {}
// ********** End Class AMNBPlayerState ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h__Script_CH4_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMNBPlayerState, AMNBPlayerState::StaticClass, TEXT("AMNBPlayerState"), &Z_Registration_Info_UClass_AMNBPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMNBPlayerState), 2499359218U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h__Script_CH4_1_2845807303(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h__Script_CH4_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
