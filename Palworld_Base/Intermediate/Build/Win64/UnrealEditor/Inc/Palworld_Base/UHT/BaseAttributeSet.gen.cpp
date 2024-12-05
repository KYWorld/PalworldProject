// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/AbilitySystem/BaseAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseAttributeSet();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UBaseAttributeSet
void UBaseAttributeSet::StaticRegisterNativesUBaseAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseAttributeSet);
UClass* Z_Construct_UClass_UBaseAttributeSet_NoRegister()
{
	return UBaseAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UBaseAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/BaseAttributeSet.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/BaseAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams = {
	&UBaseAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseAttributeSet()
{
	if (!Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton, Z_Construct_UClass_UBaseAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseAttributeSet.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UBaseAttributeSet>()
{
	return UBaseAttributeSet::StaticClass();
}
UBaseAttributeSet::UBaseAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseAttributeSet);
UBaseAttributeSet::~UBaseAttributeSet() {}
// End Class UBaseAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseAttributeSet, UBaseAttributeSet::StaticClass, TEXT("UBaseAttributeSet"), &Z_Registration_Info_UClass_UBaseAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseAttributeSet), 551475513U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_4098104307(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_BaseAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
