// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/MNBChatInput.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBChatInput() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_UMNBChatInput();
CH4_1_API UClass* Z_Construct_UClass_UMNBChatInput_NoRegister();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMNBChatInput Function OnChatCommitted ***********************************
struct Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics
{
	struct MNBChatInput_eventOnChatCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> Method;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBChatInput_eventOnChatCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBChatInput_eventOnChatCommitted_Parms, Method), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::NewProp_Method,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBChatInput, nullptr, "OnChatCommitted", Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::MNBChatInput_eventOnChatCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::MNBChatInput_eventOnChatCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMNBChatInput_OnChatCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBChatInput_OnChatCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBChatInput::execOnChatCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_Method);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnChatCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_Method));
	P_NATIVE_END;
}
// ********** End Class UMNBChatInput Function OnChatCommitted *************************************

// ********** Begin Class UMNBChatInput Function OnGuessCommitted **********************************
struct Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics
{
	struct MNBChatInput_eventOnGuessCommitted_Parms
	{
		FText Text;
		TEnumAsByte<ETextCommit::Type> Method;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Method;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBChatInput_eventOnGuessCommitted_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Text_MetaData), NewProp_Text_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MNBChatInput_eventOnGuessCommitted_Parms, Method), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 1817921380
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::NewProp_Method,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBChatInput, nullptr, "OnGuessCommitted", Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::MNBChatInput_eventOnGuessCommitted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::MNBChatInput_eventOnGuessCommitted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBChatInput::execOnGuessCommitted)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
	P_GET_PROPERTY(FByteProperty,Z_Param_Method);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGuessCommitted(Z_Param_Out_Text,ETextCommit::Type(Z_Param_Method));
	P_NATIVE_END;
}
// ********** End Class UMNBChatInput Function OnGuessCommitted ************************************

// ********** Begin Class UMNBChatInput Function SendChat ******************************************
struct Z_Construct_UFunction_UMNBChatInput_SendChat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBChatInput_SendChat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBChatInput, nullptr, "SendChat", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_SendChat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBChatInput_SendChat_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMNBChatInput_SendChat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBChatInput_SendChat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBChatInput::execSendChat)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendChat();
	P_NATIVE_END;
}
// ********** End Class UMNBChatInput Function SendChat ********************************************

// ********** Begin Class UMNBChatInput Function SendGuess *****************************************
struct Z_Construct_UFunction_UMNBChatInput_SendGuess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBChatInput_SendGuess_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBChatInput, nullptr, "SendGuess", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_SendGuess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBChatInput_SendGuess_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMNBChatInput_SendGuess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBChatInput_SendGuess_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBChatInput::execSendGuess)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendGuess();
	P_NATIVE_END;
}
// ********** End Class UMNBChatInput Function SendGuess *******************************************

// ********** Begin Class UMNBChatInput Function ToggleReady ***************************************
struct Z_Construct_UFunction_UMNBChatInput_ToggleReady_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMNBChatInput_ToggleReady_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMNBChatInput, nullptr, "ToggleReady", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMNBChatInput_ToggleReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMNBChatInput_ToggleReady_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMNBChatInput_ToggleReady()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMNBChatInput_ToggleReady_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMNBChatInput::execToggleReady)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleReady();
	P_NATIVE_END;
}
// ********** End Class UMNBChatInput Function ToggleReady *****************************************

// ********** Begin Class UMNBChatInput ************************************************************
void UMNBChatInput::StaticRegisterNativesUMNBChatInput()
{
	UClass* Class = UMNBChatInput::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnChatCommitted", &UMNBChatInput::execOnChatCommitted },
		{ "OnGuessCommitted", &UMNBChatInput::execOnGuessCommitted },
		{ "SendChat", &UMNBChatInput::execSendChat },
		{ "SendGuess", &UMNBChatInput::execSendGuess },
		{ "ToggleReady", &UMNBChatInput::execToggleReady },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMNBChatInput;
UClass* UMNBChatInput::GetPrivateStaticClass()
{
	using TClass = UMNBChatInput;
	if (!Z_Registration_Info_UClass_UMNBChatInput.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBChatInput"),
			Z_Registration_Info_UClass_UMNBChatInput.InnerSingleton,
			StaticRegisterNativesUMNBChatInput,
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
	return Z_Registration_Info_UClass_UMNBChatInput.InnerSingleton;
}
UClass* Z_Construct_UClass_UMNBChatInput_NoRegister()
{
	return UMNBChatInput::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMNBChatInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/MNBChatInput.h" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditableTextBox_ChatInput_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GuessButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChatButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnStatusText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyButton_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReadyButtonText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnProgress_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalNameText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalWinsText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalDetailsText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentNameText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentWinsText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpponentDetailsText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerValueText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RoundText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInfoText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputErrorText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MessageList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/MNBChatInput.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuessInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditableTextBox_ChatInput;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GuessButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChatButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnStatusText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReadyButtonText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TurnProgress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalWinsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalDetailsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentNameText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentWinsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OpponentDetailsText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TimerValueText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RoundText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInfoText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputErrorText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MessageList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMNBChatInput_OnChatCommitted, "OnChatCommitted" }, // 860947543
		{ &Z_Construct_UFunction_UMNBChatInput_OnGuessCommitted, "OnGuessCommitted" }, // 2707242199
		{ &Z_Construct_UFunction_UMNBChatInput_SendChat, "SendChat" }, // 3608134373
		{ &Z_Construct_UFunction_UMNBChatInput_SendGuess, "SendGuess" }, // 3198435109
		{ &Z_Construct_UFunction_UMNBChatInput_ToggleReady, "ToggleReady" }, // 1537327113
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMNBChatInput>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_GuessInput = { "GuessInput", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, GuessInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessInput_MetaData), NewProp_GuessInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_EditableTextBox_ChatInput = { "EditableTextBox_ChatInput", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, EditableTextBox_ChatInput), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditableTextBox_ChatInput_MetaData), NewProp_EditableTextBox_ChatInput_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_GuessButton = { "GuessButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, GuessButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GuessButton_MetaData), NewProp_GuessButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ChatButton = { "ChatButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, ChatButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChatButton_MetaData), NewProp_ChatButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TurnStatusText = { "TurnStatusText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, TurnStatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnStatusText_MetaData), NewProp_TurnStatusText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ReadyButton = { "ReadyButton", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, ReadyButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyButton_MetaData), NewProp_ReadyButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ReadyButtonText = { "ReadyButtonText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, ReadyButtonText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReadyButtonText_MetaData), NewProp_ReadyButtonText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TurnProgress = { "TurnProgress", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, TurnProgress), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnProgress_MetaData), NewProp_TurnProgress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalNameText = { "LocalNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, LocalNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalNameText_MetaData), NewProp_LocalNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalWinsText = { "LocalWinsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, LocalWinsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalWinsText_MetaData), NewProp_LocalWinsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalDetailsText = { "LocalDetailsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, LocalDetailsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalDetailsText_MetaData), NewProp_LocalDetailsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentNameText = { "OpponentNameText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, OpponentNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentNameText_MetaData), NewProp_OpponentNameText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentWinsText = { "OpponentWinsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, OpponentWinsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentWinsText_MetaData), NewProp_OpponentWinsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentDetailsText = { "OpponentDetailsText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, OpponentDetailsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpponentDetailsText_MetaData), NewProp_OpponentDetailsText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TimerValueText = { "TimerValueText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, TimerValueText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerValueText_MetaData), NewProp_TimerValueText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_RoundText = { "RoundText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, RoundText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RoundText_MetaData), NewProp_RoundText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_PlayerInfoText = { "PlayerInfoText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, PlayerInfoText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInfoText_MetaData), NewProp_PlayerInfoText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_InputErrorText = { "InputErrorText", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, InputErrorText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputErrorText_MetaData), NewProp_InputErrorText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMNBChatInput_Statics::NewProp_MessageList = { "MessageList", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMNBChatInput, MessageList), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MessageList_MetaData), NewProp_MessageList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMNBChatInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_GuessInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_EditableTextBox_ChatInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_GuessButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ChatButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TurnStatusText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ReadyButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_ReadyButtonText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TurnProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalWinsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_LocalDetailsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentNameText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentWinsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_OpponentDetailsText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_TimerValueText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_RoundText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_PlayerInfoText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_InputErrorText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMNBChatInput_Statics::NewProp_MessageList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMNBChatInput_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMNBChatInput_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMNBChatInput_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMNBChatInput_Statics::ClassParams = {
	&UMNBChatInput::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMNBChatInput_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMNBChatInput_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMNBChatInput_Statics::Class_MetaDataParams), Z_Construct_UClass_UMNBChatInput_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMNBChatInput()
{
	if (!Z_Registration_Info_UClass_UMNBChatInput.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMNBChatInput.OuterSingleton, Z_Construct_UClass_UMNBChatInput_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMNBChatInput.OuterSingleton;
}
UMNBChatInput::UMNBChatInput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMNBChatInput);
UMNBChatInput::~UMNBChatInput() {}
// ********** End Class UMNBChatInput **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h__Script_CH4_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMNBChatInput, UMNBChatInput::StaticClass, TEXT("UMNBChatInput"), &Z_Registration_Info_UClass_UMNBChatInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMNBChatInput), 3222689291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h__Script_CH4_1_3101463471(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h__Script_CH4_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
