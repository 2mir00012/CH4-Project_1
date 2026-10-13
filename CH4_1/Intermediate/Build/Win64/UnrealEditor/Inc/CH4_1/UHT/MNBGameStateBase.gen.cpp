// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/MNBGameStateBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBGameStateBase() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_AMNBGameStateBase();
CH4_1_API UClass* Z_Construct_UClass_AMNBGameStateBase_NoRegister();
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerState_NoRegister();
CH4_1_API UScriptStruct* Z_Construct_UScriptStruct_FMNBTurnState();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FMNBTurnState *****************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FMNBTurnState;
class UScriptStruct* FMNBTurnState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FMNBTurnState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FMNBTurnState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMNBTurnState, (UObject*)Z_Construct_UPackage__Script_CH4_1(), TEXT("MNBTurnState"));
	}
	return Z_Registration_Info_UScriptStruct_FMNBTurnState.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FMNBTurnState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "MNBTurnState" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[] = {
		{ "Category", "MNBTurnState" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndServerTime_MetaData[] = {
		{ "Category", "MNBTurnState" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationSeconds_MetaData[] = {
		{ "Category", "MNBTurnState" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bActive_MetaData[] = {
		{ "Category", "MNBTurnState" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_EndServerTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationSeconds;
	static void NewProp_bActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMNBTurnState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBTurnState, Player), Z_Construct_UClass_AMNBPlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBTurnState, Id), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Id_MetaData), NewProp_Id_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_EndServerTime = { "EndServerTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBTurnState, EndServerTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndServerTime_MetaData), NewProp_EndServerTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_DurationSeconds = { "DurationSeconds", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMNBTurnState, DurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationSeconds_MetaData), NewProp_DurationSeconds_MetaData) };
void Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_bActive_SetBit(void* Obj)
{
	((FMNBTurnState*)Obj)->bActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMNBTurnState), &Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bActive_MetaData), NewProp_bActive_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMNBTurnState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_Id,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_EndServerTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_DurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewProp_bActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBTurnState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMNBTurnState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
	nullptr,
	&NewStructOps,
	"MNBTurnState",
	Z_Construct_UScriptStruct_FMNBTurnState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBTurnState_Statics::PropPointers),
	sizeof(FMNBTurnState),
	alignof(FMNBTurnState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMNBTurnState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMNBTurnState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMNBTurnState()
{
	if (!Z_Registration_Info_UScriptStruct_FMNBTurnState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FMNBTurnState.InnerSingleton, Z_Construct_UScriptStruct_FMNBTurnState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FMNBTurnState.InnerSingleton;
}
// ********** End ScriptStruct FMNBTurnState *******************************************************

// ********** Begin Class AMNBGameStateBase Function GetRemainingTurnSeconds ***********************
struct Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics
{
	struct MNBGameStateBase_eventGetRemainingTurnSeconds_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBGameStateBase_eventGetRemainingTurnSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBGameStateBase, nullptr, "GetRemainingTurnSeconds", Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::MNBGameStateBase_eventGetRemainingTurnSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::MNBGameStateBase_eventGetRemainingTurnSeconds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBGameStateBase::execGetRemainingTurnSeconds)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetRemainingTurnSeconds();
	P_NATIVE_END;
}
// ********** End Class AMNBGameStateBase Function GetRemainingTurnSeconds *************************

// ********** Begin Class AMNBGameStateBase Function MulticastRPCBroadcastLoginMessage *************
struct MNBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms
{
	FString Name;
};
static FName NAME_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage = FName(TEXT("MulticastRPCBroadcastLoginMessage"));
void AMNBGameStateBase::MulticastRPCBroadcastLoginMessage(const FString& Name)
{
	MNBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms Parms;
	Parms.Name=Name;
	UFunction* Func = FindFunctionChecked(NAME_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::NewProp_Name,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBGameStateBase, nullptr, "MulticastRPCBroadcastLoginMessage", Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::PropPointers), sizeof(MNBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBGameStateBase_eventMulticastRPCBroadcastLoginMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBGameStateBase::execMulticastRPCBroadcastLoginMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Name);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MulticastRPCBroadcastLoginMessage_Implementation(Z_Param_Name);
	P_NATIVE_END;
}
// ********** End Class AMNBGameStateBase Function MulticastRPCBroadcastLoginMessage ***************

// ********** Begin Class AMNBGameStateBase ********************************************************
void AMNBGameStateBase::StaticRegisterNativesAMNBGameStateBase()
{
	UClass* Class = AMNBGameStateBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRemainingTurnSeconds", &AMNBGameStateBase::execGetRemainingTurnSeconds },
		{ "MulticastRPCBroadcastLoginMessage", &AMNBGameStateBase::execMulticastRPCBroadcastLoginMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMNBGameStateBase;
UClass* AMNBGameStateBase::GetPrivateStaticClass()
{
	using TClass = AMNBGameStateBase;
	if (!Z_Registration_Info_UClass_AMNBGameStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBGameStateBase"),
			Z_Registration_Info_UClass_AMNBGameStateBase.InnerSingleton,
			StaticRegisterNativesAMNBGameStateBase,
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
	return Z_Registration_Info_UClass_AMNBGameStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMNBGameStateBase_NoRegister()
{
	return AMNBGameStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMNBGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/MNBGameStateBase.h" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Turn_MetaData[] = {
		{ "Category", "MNBGameStateBase" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundNumber_MetaData[] = {
		{ "Category", "MNBGameStateBase" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundEnding_MetaData[] = {
		{ "Category", "MNBGameStateBase" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWaitingForReady_MetaData[] = {
		{ "Category", "MNBGameStateBase" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyRevision_MetaData[] = {
		{ "Category", "MNBGameStateBase" },
		{ "ModuleRelativePath", "Game/MNBGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Turn;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNumber;
	static void NewProp_bRoundEnding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundEnding;
	static void NewProp_bWaitingForReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitingForReady;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMNBGameStateBase_GetRemainingTurnSeconds, "GetRemainingTurnSeconds" }, // 964372866
		{ &Z_Construct_UFunction_AMNBGameStateBase_MulticastRPCBroadcastLoginMessage, "MulticastRPCBroadcastLoginMessage" }, // 2868620484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMNBGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_Turn = { "Turn", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBGameStateBase, Turn), Z_Construct_UScriptStruct_FMNBTurnState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Turn_MetaData), NewProp_Turn_MetaData) }; // 725177522
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_RoundNumber = { "RoundNumber", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBGameStateBase, RoundNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundNumber_MetaData), NewProp_RoundNumber_MetaData) };
void Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bRoundEnding_SetBit(void* Obj)
{
	((AMNBGameStateBase*)Obj)->bRoundEnding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bRoundEnding = { "bRoundEnding", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMNBGameStateBase), &Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bRoundEnding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundEnding_MetaData), NewProp_bRoundEnding_MetaData) };
void Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bWaitingForReady_SetBit(void* Obj)
{
	((AMNBGameStateBase*)Obj)->bWaitingForReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bWaitingForReady = { "bWaitingForReady", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMNBGameStateBase), &Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bWaitingForReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWaitingForReady_MetaData), NewProp_bWaitingForReady_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_ReadyRevision = { "ReadyRevision", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBGameStateBase, ReadyRevision), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyRevision_MetaData), NewProp_ReadyRevision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMNBGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_Turn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_RoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bRoundEnding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_bWaitingForReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameStateBase_Statics::NewProp_ReadyRevision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMNBGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMNBGameStateBase_Statics::ClassParams = {
	&AMNBGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMNBGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameStateBase_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMNBGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMNBGameStateBase()
{
	if (!Z_Registration_Info_UClass_AMNBGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMNBGameStateBase.OuterSingleton, Z_Construct_UClass_AMNBGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMNBGameStateBase.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AMNBGameStateBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_Turn(TEXT("Turn"));
	static FName Name_RoundNumber(TEXT("RoundNumber"));
	static FName Name_bRoundEnding(TEXT("bRoundEnding"));
	static FName Name_bWaitingForReady(TEXT("bWaitingForReady"));
	static FName Name_ReadyRevision(TEXT("ReadyRevision"));
	const bool bIsValid = true
		&& Name_Turn == ClassReps[(int32)ENetFields_Private::Turn].Property->GetFName()
		&& Name_RoundNumber == ClassReps[(int32)ENetFields_Private::RoundNumber].Property->GetFName()
		&& Name_bRoundEnding == ClassReps[(int32)ENetFields_Private::bRoundEnding].Property->GetFName()
		&& Name_bWaitingForReady == ClassReps[(int32)ENetFields_Private::bWaitingForReady].Property->GetFName()
		&& Name_ReadyRevision == ClassReps[(int32)ENetFields_Private::ReadyRevision].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMNBGameStateBase"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AMNBGameStateBase);
AMNBGameStateBase::~AMNBGameStateBase() {}
// ********** End Class AMNBGameStateBase **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMNBTurnState::StaticStruct, Z_Construct_UScriptStruct_FMNBTurnState_Statics::NewStructOps, TEXT("MNBTurnState"), &Z_Registration_Info_UScriptStruct_FMNBTurnState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMNBTurnState), 725177522U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMNBGameStateBase, AMNBGameStateBase::StaticClass, TEXT("AMNBGameStateBase"), &Z_Registration_Info_UClass_AMNBGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMNBGameStateBase), 96733619U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_2208058181(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h__Script_CH4_1_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
