// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/MNBPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBPlayerController() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerController();
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerController_NoRegister();
CH4_1_API UClass* Z_Construct_UClass_UMNBChatInput_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMNBPlayerController Function ClientRPCPrintChatMessageString ************
struct MNBPlayerController_eventClientRPCPrintChatMessageString_Parms
{
	FString Message;
};
static FName NAME_AMNBPlayerController_ClientRPCPrintChatMessageString = FName(TEXT("ClientRPCPrintChatMessageString"));
void AMNBPlayerController::ClientRPCPrintChatMessageString(const FString& Message)
{
	MNBPlayerController_eventClientRPCPrintChatMessageString_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMNBPlayerController_ClientRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventClientRPCPrintChatMessageString_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerController, nullptr, "ClientRPCPrintChatMessageString", Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::PropPointers), sizeof(MNBPlayerController_eventClientRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBPlayerController_eventClientRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerController::execClientRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCPrintChatMessageString_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerController Function ClientRPCPrintChatMessageString **************

// ********** Begin Class AMNBPlayerController Function ClientRPCShowInputError ********************
struct MNBPlayerController_eventClientRPCShowInputError_Parms
{
	FText Message;
};
static FName NAME_AMNBPlayerController_ClientRPCShowInputError = FName(TEXT("ClientRPCShowInputError"));
void AMNBPlayerController::ClientRPCShowInputError(FText const& Message)
{
	MNBPlayerController_eventClientRPCShowInputError_Parms Parms;
	Parms.Message=Message;
	UFunction* Func = FindFunctionChecked(NAME_AMNBPlayerController_ClientRPCShowInputError);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventClientRPCShowInputError_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::NewProp_Message,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerController, nullptr, "ClientRPCShowInputError", Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::PropPointers), sizeof(MNBPlayerController_eventClientRPCShowInputError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBPlayerController_eventClientRPCShowInputError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerController::execClientRPCShowInputError)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRPCShowInputError_Implementation(Z_Param_Message);
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerController Function ClientRPCShowInputError **********************

// ********** Begin Class AMNBPlayerController Function ServerRPCPrintChatMessageString ************
struct MNBPlayerController_eventServerRPCPrintChatMessageString_Parms
{
	FString Input;
};
static FName NAME_AMNBPlayerController_ServerRPCPrintChatMessageString = FName(TEXT("ServerRPCPrintChatMessageString"));
void AMNBPlayerController::ServerRPCPrintChatMessageString(const FString& Input)
{
	MNBPlayerController_eventServerRPCPrintChatMessageString_Parms Parms;
	Parms.Input=Input;
	UFunction* Func = FindFunctionChecked(NAME_AMNBPlayerController_ServerRPCPrintChatMessageString);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCPrintChatMessageString_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerController, nullptr, "ServerRPCPrintChatMessageString", Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::PropPointers), sizeof(MNBPlayerController_eventServerRPCPrintChatMessageString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBPlayerController_eventServerRPCPrintChatMessageString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerController::execServerRPCPrintChatMessageString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCPrintChatMessageString_Implementation(Z_Param_Input);
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerController Function ServerRPCPrintChatMessageString **************

// ********** Begin Class AMNBPlayerController Function ServerRPCSetReady **************************
struct MNBPlayerController_eventServerRPCSetReady_Parms
{
	bool bReady;
	int32 RoundNumber;
	int32 ReadyRevision;
};
static FName NAME_AMNBPlayerController_ServerRPCSetReady = FName(TEXT("ServerRPCSetReady"));
void AMNBPlayerController::ServerRPCSetReady(bool bReady, int32 RoundNumber, int32 ReadyRevision)
{
	MNBPlayerController_eventServerRPCSetReady_Parms Parms;
	Parms.bReady=bReady ? true : false;
	Parms.RoundNumber=RoundNumber;
	Parms.ReadyRevision=ReadyRevision;
	UFunction* Func = FindFunctionChecked(NAME_AMNBPlayerController_ServerRPCSetReady);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bReady_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReady;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReadyRevision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_bReady_SetBit(void* Obj)
{
	((MNBPlayerController_eventServerRPCSetReady_Parms*)Obj)->bReady = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_bReady = { "bReady", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MNBPlayerController_eventServerRPCSetReady_Parms), &Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_bReady_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_RoundNumber = { "RoundNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCSetReady_Parms, RoundNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_ReadyRevision = { "ReadyRevision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCSetReady_Parms, ReadyRevision), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_bReady,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_RoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::NewProp_ReadyRevision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerController, nullptr, "ServerRPCSetReady", Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::PropPointers), sizeof(MNBPlayerController_eventServerRPCSetReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBPlayerController_eventServerRPCSetReady_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerController::execServerRPCSetReady)
{
	P_GET_UBOOL(Z_Param_bReady);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoundNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_ReadyRevision);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCSetReady_Implementation(Z_Param_bReady,Z_Param_RoundNumber,Z_Param_ReadyRevision);
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerController Function ServerRPCSetReady ****************************

// ********** Begin Class AMNBPlayerController Function ServerRPCSubmitGuess ***********************
struct MNBPlayerController_eventServerRPCSubmitGuess_Parms
{
	FString Input;
	int32 RoundNumber;
	int32 TurnId;
};
static FName NAME_AMNBPlayerController_ServerRPCSubmitGuess = FName(TEXT("ServerRPCSubmitGuess"));
void AMNBPlayerController::ServerRPCSubmitGuess(const FString& Input, int32 RoundNumber, int32 TurnId)
{
	MNBPlayerController_eventServerRPCSubmitGuess_Parms Parms;
	Parms.Input=Input;
	Parms.RoundNumber=RoundNumber;
	Parms.TurnId=TurnId;
	UFunction* Func = FindFunctionChecked(NAME_AMNBPlayerController_ServerRPCSubmitGuess);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RoundNumber;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TurnId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCSubmitGuess_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_RoundNumber = { "RoundNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCSubmitGuess_Parms, RoundNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_TurnId = { "TurnId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBPlayerController_eventServerRPCSubmitGuess_Parms, TurnId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_RoundNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::NewProp_TurnId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMNBPlayerController, nullptr, "ServerRPCSubmitGuess", Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::PropPointers), sizeof(MNBPlayerController_eventServerRPCSubmitGuess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(MNBPlayerController_eventServerRPCSubmitGuess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMNBPlayerController::execServerRPCSubmitGuess)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_GET_PROPERTY(FIntProperty,Z_Param_RoundNumber);
	P_GET_PROPERTY(FIntProperty,Z_Param_TurnId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRPCSubmitGuess_Implementation(Z_Param_Input,Z_Param_RoundNumber,Z_Param_TurnId);
	P_NATIVE_END;
}
// ********** End Class AMNBPlayerController Function ServerRPCSubmitGuess *************************

// ********** Begin Class AMNBPlayerController *****************************************************
void AMNBPlayerController::StaticRegisterNativesAMNBPlayerController()
{
	UClass* Class = AMNBPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClientRPCPrintChatMessageString", &AMNBPlayerController::execClientRPCPrintChatMessageString },
		{ "ClientRPCShowInputError", &AMNBPlayerController::execClientRPCShowInputError },
		{ "ServerRPCPrintChatMessageString", &AMNBPlayerController::execServerRPCPrintChatMessageString },
		{ "ServerRPCSetReady", &AMNBPlayerController::execServerRPCSetReady },
		{ "ServerRPCSubmitGuess", &AMNBPlayerController::execServerRPCSubmitGuess },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMNBPlayerController;
UClass* AMNBPlayerController::GetPrivateStaticClass()
{
	using TClass = AMNBPlayerController;
	if (!Z_Registration_Info_UClass_AMNBPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBPlayerController"),
			Z_Registration_Info_UClass_AMNBPlayerController.InnerSingleton,
			StaticRegisterNativesAMNBPlayerController,
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
	return Z_Registration_Info_UClass_AMNBPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_AMNBPlayerController_NoRegister()
{
	return AMNBPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMNBPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/MNBPlayerController.h" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationText_MetaData[] = {
		{ "Category", "MNBPlayerController" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputError_MetaData[] = {
		{ "Category", "MNBPlayerController" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidgetClass_MetaData[] = {
		{ "Category", "MNB|UI" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidgetClass_MetaData[] = {
		{ "Category", "MNB|UI" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatInputWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationTextWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/MNBPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NotificationText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_InputError;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ChatInputWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NotificationTextWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatInputWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NotificationTextWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMNBPlayerController_ClientRPCPrintChatMessageString, "ClientRPCPrintChatMessageString" }, // 2127492341
		{ &Z_Construct_UFunction_AMNBPlayerController_ClientRPCShowInputError, "ClientRPCShowInputError" }, // 1542485437
		{ &Z_Construct_UFunction_AMNBPlayerController_ServerRPCPrintChatMessageString, "ServerRPCPrintChatMessageString" }, // 710996912
		{ &Z_Construct_UFunction_AMNBPlayerController_ServerRPCSetReady, "ServerRPCSetReady" }, // 3980704819
		{ &Z_Construct_UFunction_AMNBPlayerController_ServerRPCSubmitGuess, "ServerRPCSubmitGuess" }, // 1505108527
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMNBPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationText = { "NotificationText", nullptr, (EPropertyFlags)0x0010000000000034, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, NotificationText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationText_MetaData), NewProp_NotificationText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_InputError = { "InputError", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, InputError), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputError_MetaData), NewProp_InputError_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_ChatInputWidgetClass = { "ChatInputWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, ChatInputWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMNBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidgetClass_MetaData), NewProp_ChatInputWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationTextWidgetClass = { "NotificationTextWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, NotificationTextWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidgetClass_MetaData), NewProp_NotificationTextWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_ChatInputWidget = { "ChatInputWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, ChatInputWidget), Z_Construct_UClass_UMNBChatInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatInputWidget_MetaData), NewProp_ChatInputWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationTextWidget = { "NotificationTextWidget", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBPlayerController, NotificationTextWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationTextWidget_MetaData), NewProp_NotificationTextWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMNBPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_InputError,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_ChatInputWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationTextWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_ChatInputWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBPlayerController_Statics::NewProp_NotificationTextWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMNBPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMNBPlayerController_Statics::ClassParams = {
	&AMNBPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMNBPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerController_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AMNBPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMNBPlayerController()
{
	if (!Z_Registration_Info_UClass_AMNBPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMNBPlayerController.OuterSingleton, Z_Construct_UClass_AMNBPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMNBPlayerController.OuterSingleton;
}
#if VALIDATE_CLASS_REPS
void AMNBPlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static FName Name_NotificationText(TEXT("NotificationText"));
	const bool bIsValid = true
		&& Name_NotificationText == ClassReps[(int32)ENetFields_Private::NotificationText].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AMNBPlayerController"));
}
#endif
DEFINE_VTABLE_PTR_HELPER_CTOR(AMNBPlayerController);
AMNBPlayerController::~AMNBPlayerController() {}
// ********** End Class AMNBPlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h__Script_CH4_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMNBPlayerController, AMNBPlayerController::StaticClass, TEXT("AMNBPlayerController"), &Z_Registration_Info_UClass_AMNBPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMNBPlayerController), 1091957232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h__Script_CH4_1_1487361703(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h__Script_CH4_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
