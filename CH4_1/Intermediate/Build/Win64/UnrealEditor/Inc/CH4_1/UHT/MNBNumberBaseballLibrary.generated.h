// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Library/MNBNumberBaseballLibrary.h"

#ifdef CH4_1_MNBNumberBaseballLibrary_generated_h
#error "MNBNumberBaseballLibrary.generated.h already included, missing '#pragma once' in MNBNumberBaseballLibrary.h"
#endif
#define CH4_1_MNBNumberBaseballLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FMNBGuessResult;

// ********** Begin ScriptStruct FMNBGuessResult ***************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_9_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMNBGuessResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FMNBGuessResult;
// ********** End ScriptStruct FMNBGuessResult *****************************************************

// ********** Begin Class UMNBNumberBaseballLibrary ************************************************
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJudgeResult); \
	DECLARE_FUNCTION(execIsGuessNumberString); \
	DECLARE_FUNCTION(execGenerateSecretNumber);


CH4_1_API UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary_NoRegister();

#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMNBNumberBaseballLibrary(); \
	friend struct Z_Construct_UClass_UMNBNumberBaseballLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CH4_1_API UClass* Z_Construct_UClass_UMNBNumberBaseballLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UMNBNumberBaseballLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CH4_1"), Z_Construct_UClass_UMNBNumberBaseballLibrary_NoRegister) \
	DECLARE_SERIALIZER(UMNBNumberBaseballLibrary)


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMNBNumberBaseballLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMNBNumberBaseballLibrary(UMNBNumberBaseballLibrary&&) = delete; \
	UMNBNumberBaseballLibrary(const UMNBNumberBaseballLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMNBNumberBaseballLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMNBNumberBaseballLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMNBNumberBaseballLibrary) \
	NO_API virtual ~UMNBNumberBaseballLibrary();


#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_17_PROLOG
#define FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_INCLASS_NO_PURE_DECLS \
	FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMNBNumberBaseballLibrary;

// ********** End Class UMNBNumberBaseballLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Library_MNBNumberBaseballLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
