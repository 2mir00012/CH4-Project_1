// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Game/MNBGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMNBGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
CH4_1_API UClass* Z_Construct_UClass_AMNBGameModeBase();
CH4_1_API UClass* Z_Construct_UClass_AMNBGameModeBase_NoRegister();
CH4_1_API UClass* Z_Construct_UClass_AMNBPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CH4_1();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMNBGameModeBase *********************************************************
void AMNBGameModeBase::StaticRegisterNativesAMNBGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMNBGameModeBase;
UClass* AMNBGameModeBase::GetPrivateStaticClass()
{
	using TClass = AMNBGameModeBase;
	if (!Z_Registration_Info_UClass_AMNBGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MNBGameModeBase"),
			Z_Registration_Info_UClass_AMNBGameModeBase.InnerSingleton,
			StaticRegisterNativesAMNBGameModeBase,
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
	return Z_Registration_Info_UClass_AMNBGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMNBGameModeBase_NoRegister()
{
	return AMNBGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMNBGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Game/MNBGameModeBase.h" },
		{ "ModuleRelativePath", "Game/MNBGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnDurationSeconds_MetaData[] = {
		{ "Category", "MNB|Turn" },
		{ "ClampMax", "120.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Game/MNBGameModeBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllPlayerControllers_MetaData[] = {
		{ "ModuleRelativePath", "Game/MNBGameModeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnDurationSeconds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllPlayerControllers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllPlayerControllers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMNBGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_TurnDurationSeconds = { "TurnDurationSeconds", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBGameModeBase, TurnDurationSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnDurationSeconds_MetaData), NewProp_TurnDurationSeconds_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_AllPlayerControllers_Inner = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AMNBPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_AllPlayerControllers = { "AllPlayerControllers", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMNBGameModeBase, AllPlayerControllers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllPlayerControllers_MetaData), NewProp_AllPlayerControllers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMNBGameModeBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_TurnDurationSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_AllPlayerControllers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMNBGameModeBase_Statics::NewProp_AllPlayerControllers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameModeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMNBGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CH4_1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMNBGameModeBase_Statics::ClassParams = {
	&AMNBGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMNBGameModeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameModeBase_Statics::PropPointers),
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMNBGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMNBGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMNBGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMNBGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMNBGameModeBase.OuterSingleton, Z_Construct_UClass_AMNBGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMNBGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMNBGameModeBase);
AMNBGameModeBase::~AMNBGameModeBase() {}
// ********** End Class AMNBGameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h__Script_CH4_1_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMNBGameModeBase, AMNBGameModeBase::StaticClass, TEXT("AMNBGameModeBase"), &Z_Registration_Info_UClass_AMNBGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMNBGameModeBase), 521537740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h__Script_CH4_1_3310906263(TEXT("/Script/CH4_1"),
	Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h__Script_CH4_1_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MIR_CH4_Project_CH4_1_CH4_1_Source_CH4_1_Game_MNBGameModeBase_h__Script_CH4_1_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
