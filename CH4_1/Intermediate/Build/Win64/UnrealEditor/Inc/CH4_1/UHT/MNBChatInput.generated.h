// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/MNBChatInput.h"

#ifdef CH4_1_MNBChatInput_generated_h
#error "MNBChatInput.generated.h already included, missing '#pragma once' in MNBChatInput.h"
#endif
#define CH4_1_MNBChatInput_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMNBChatInput ************************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnChatCommitted); \
	DECLARE_FUNCTION(execOnGuessCommitted); \
	DECLARE_FUNCTION(execSendChat); \
	DECLARE_FUNCTION(execSendGuess); \
	DECLARE_FUNCTION(execToggleReady);


CH4_1_API UClass* Z_Construct_UClass_UMNBChatInput_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMNBChatInput(); \
	friend struct Z_Construct_UClass_UMNBChatInput_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_UMNBChatInput_NoRegister(); \
public: \
	DECLARE_CLASS2(UMNBChatInput, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_UMNBChatInput_NoRegister) \
	DECLARE_SERIALIZER(UMNBChatInput)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMNBChatInput(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMNBChatInput(UMNBChatInput&&) = delete; \
	UMNBChatInput(const UMNBChatInput&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMNBChatInput); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMNBChatInput); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMNBChatInput) \
	NO_API virtual ~UMNBChatInput();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_11_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMNBChatInput;

// ********** End Class UMNBChatInput **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_UI_MNBChatInput_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
