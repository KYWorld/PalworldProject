// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/AbilitySystem/Ability/PlayerGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGameplayAbility() {}

// Begin Cross Module References
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UPlayerGameplayAbility
void UPlayerGameplayAbility::StaticRegisterNativesUPlayerGameplayAbility()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerGameplayAbility);
UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister()
{
	return UPlayerGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UPlayerGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Ability/PlayerGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/PlayerGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams = {
	&UPlayerGameplayAbility::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton, Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UPlayerGameplayAbility>()
{
	return UPlayerGameplayAbility::StaticClass();
}
UPlayerGameplayAbility::UPlayerGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGameplayAbility);
UPlayerGameplayAbility::~UPlayerGameplayAbility() {}
// End Class UPlayerGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerGameplayAbility, UPlayerGameplayAbility::StaticClass, TEXT("UPlayerGameplayAbility"), &Z_Registration_Info_UClass_UPlayerGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerGameplayAbility), 2368299214U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_4072652957(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
