// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MNBPlayerState.h"

#ifdef CH4_1_MNBPlayerState_generated_h
#error "MNBPlayerState.generated.h already included, missing '#pragma once' in MNBPlayerState.h"
#endif
#define CH4_1_MNBPlayerState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMNBPlayerState **********************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execGetWinCount); \
	DECLARE_FUNCTION(execHasGuessesLeft); \
	DECLARE_FUNCTION(execGetMaxGuessCount); \
	DECLARE_FUNCTION(execGetCurrentGuessCount); \
	DECLARE_FUNCTION(execGetPlayerInfoString);


CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerState_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMNBPlayerState(); \
	friend struct Z_Construct_UClass_AMNBPlayerState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerState_NoRegister(); \
public: \
	DECLARE_CLASS2(AMNBPlayerState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_AMNBPlayerState_NoRegister) \
	DECLARE_SERIALIZER(AMNBPlayerState) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PlayerNameString=NETFIELD_REP_START, \
		WinCount, \
		bReady, \
		CurrentGuessCount, \
		MaxGuessCount, \
		NETFIELD_REP_END=MaxGuessCount	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMNBPlayerState(AMNBPlayerState&&) = delete; \
	AMNBPlayerState(const AMNBPlayerState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMNBPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMNBPlayerState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMNBPlayerState) \
	NO_API virtual ~AMNBPlayerState();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_6_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMNBPlayerState;

// ********** End Class AMNBPlayerState ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerState_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
