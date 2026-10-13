// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Game/MNBGameModeBase.h"

#ifdef CH4_1_MNBGameModeBase_generated_h
#error "MNBGameModeBase.generated.h already included, missing '#pragma once' in MNBGameModeBase.h"
#endif
#define CH4_1_MNBGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMNBGameModeBase *********************************************************
CH4_1_API UClass* Z_Construct_UClass_AMNBGameModeBase_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMNBGameModeBase(); \
	friend struct Z_Construct_UClass_AMNBGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_AMNBGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AMNBGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_AMNBGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AMNBGameModeBase)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_11_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMNBGameModeBase(AMNBGameModeBase&&) = delete; \
	AMNBGameModeBase(const AMNBGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMNBGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMNBGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMNBGameModeBase) \
	NO_API virtual ~AMNBGameModeBase();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_8_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_11_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMNBGameModeBase;

// ********** End Class AMNBGameModeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
