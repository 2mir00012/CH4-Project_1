// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/MNBPlayerController.h"

#ifdef CH4_1_MNBPlayerController_generated_h
#error "MNBPlayerController.generated.h already included, missing '#pragma once' in MNBPlayerController.h"
#endif
#define CH4_1_MNBPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMNBPlayerController *****************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientRPCShowInputError_Implementation(FText const& Message); \
	virtual void ClientRPCPrintChatMessageString_Implementation(const FString& Message); \
	virtual void ServerRPCPrintChatMessageString_Implementation(const FString& Input); \
	virtual void ServerRPCSubmitGuess_Implementation(const FString& Input, int32 RoundNumber, int32 TurnId); \
	virtual void ServerRPCSetReady_Implementation(bool bReady, int32 RoundNumber, int32 ReadyRevision); \
	DECLARE_FUNCTION(execClientRPCShowInputError); \
	DECLARE_FUNCTION(execClientRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execServerRPCPrintChatMessageString); \
	DECLARE_FUNCTION(execServerRPCSubmitGuess); \
	DECLARE_FUNCTION(execServerRPCSetReady);


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_CALLBACK_WRAPPERS
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerController_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMNBPlayerController(); \
	friend struct Z_Construct_UClass_AMNBPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AMNBPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_AMNBPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AMNBPlayerController) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		NotificationText=NETFIELD_REP_START, \
		NETFIELD_REP_END=NotificationText	}; \
	DECLARE_VALIDATE_GENERATED_REP_ENUMS(NO_API)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMNBPlayerController(AMNBPlayerController&&) = delete; \
	AMNBPlayerController(const AMNBPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMNBPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMNBPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMNBPlayerController) \
	NO_API virtual ~AMNBPlayerController();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_8_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_CALLBACK_WRAPPERS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMNBPlayerController;

// ********** End Class AMNBPlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Player_MNBPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
