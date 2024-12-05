// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/DataAsset/StartupData/DataAsset_StartupBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartupBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_StartupBase();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_StartupBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UDataAsset_StartupBase
void UDataAsset_StartupBase::StaticRegisterNativesUDataAsset_StartupBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartupBase);
UClass* Z_Construct_UClass_UDataAsset_StartupBase_NoRegister()
{
	return UDataAsset_StartupBase::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartupBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAsset/StartupData/DataAsset_StartupBase.h" },
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivateOnGivenAbilities_MetaData[] = {
		{ "Category", "StartupData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xc2\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xb0\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xc2\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReactiveAbilities_MetaData[] = {
		{ "Category", "StartupData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc6\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xc2\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc6\xaf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xc2\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartupGameplayEffects_MetaData[] = {
		{ "Category", "StartupData" },
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActivateOnGivenAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActivateOnGivenAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReactiveAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReactiveAbilities;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartupGameplayEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StartupGameplayEffects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartupBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ActivateOnGivenAbilities_Inner = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ActivateOnGivenAbilities = { "ActivateOnGivenAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupBase, ActivateOnGivenAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivateOnGivenAbilities_MetaData), NewProp_ActivateOnGivenAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ReactiveAbilities_Inner = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UBaseGameplayAbility_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ReactiveAbilities = { "ReactiveAbilities", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupBase, ReactiveAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReactiveAbilities_MetaData), NewProp_ReactiveAbilities_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_StartupGameplayEffects_Inner = { "StartupGameplayEffects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_StartupGameplayEffects = { "StartupGameplayEffects", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupBase, StartupGameplayEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartupGameplayEffects_MetaData), NewProp_StartupGameplayEffects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartupBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ActivateOnGivenAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ActivateOnGivenAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ReactiveAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_ReactiveAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_StartupGameplayEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupBase_Statics::NewProp_StartupGameplayEffects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_StartupBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartupBase_Statics::ClassParams = {
	&UDataAsset_StartupBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_StartupBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartupBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartupBase()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartupBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartupBase.OuterSingleton, Z_Construct_UClass_UDataAsset_StartupBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartupBase.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UDataAsset_StartupBase>()
{
	return UDataAsset_StartupBase::StaticClass();
}
UDataAsset_StartupBase::UDataAsset_StartupBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartupBase);
UDataAsset_StartupBase::~UDataAsset_StartupBase() {}
// End Class UDataAsset_StartupBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartupBase, UDataAsset_StartupBase::StaticClass, TEXT("UDataAsset_StartupBase"), &Z_Registration_Info_UClass_UDataAsset_StartupBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartupBase), 115887925U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupBase_h_2757306219(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
