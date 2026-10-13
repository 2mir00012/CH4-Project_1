// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MNBGameStateBase.h"

#ifdef CH4_1_MNBGameStateBase_generated_h
#error "MNBGameStateBase.generated.h already included, missing '#pragma once' in MNBGameStateBase.h"
#endif
#define CH4_1_MNBGameStateBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FMNBTurnState *****************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_11_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMNBTurnState_Statics; \
	CH4_1_API static class UScriptStruct* StaticStruct();


struct FMNBTurnState;
// ********** End ScriptStruct FMNBTurnState *******************************************************

// ********** Begin Class AMNBGameStateBase ********************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastRPCBroadcastLoginMessage_Implementation(const FString& Name); \
	DECLARE_FUNCTION(execMulticastRPCBroadcastLoginMessage); \
	DECLARE_FUNCTION(execGetRemainingTurnSeconds);


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_CALLBACK_WRAPPERS
CH4_1_API UClass* Z_Construct_UClass_AMNBGameStateBase_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMNBGameStateBase(); \
	friend struct Z_Construct_UClass_AMNBGameStateBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_AMNBGameStateBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMNBGameStateBase, AGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_AMNBGameStateBase_NoRegister) \
	DECLARE_SERIALIZER(AMNBGameStateBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Turn=NETFIELD_REP_START, \
		RoundNumber, \
		bRoundEnding, \
		bWaitingForReady, \
		ReadyRevision, \
		NETFIELD_REP_END=ReadyRevision	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMNBGameStateBase(AMNBGameStateBase&&) = delete; \
	AMNBGameStateBase(const AMNBGameStateBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMNBGameStateBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMNBGameStateBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMNBGameStateBase) \
	NO_API virtual ~AMNBGameStateBase();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_19_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_CALLBACK_WRAPPERS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMNBGameStateBase;

// ********** End Class AMNBGameStateBase **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameStateBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
