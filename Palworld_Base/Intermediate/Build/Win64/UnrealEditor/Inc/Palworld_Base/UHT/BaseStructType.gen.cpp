// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/BaseLibrary/BaseStructType.h"
#include "GameplayAbilities/Public/ScalableFloat.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStructType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister();
PALWORLD_BASE_API UScriptStruct* Z_Construct_UScriptStruct_FHeroWeaponData();
PALWORLD_BASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilitySet();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin ScriptStruct FPlayerAbilitySet
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerAbilitySet;
class UScriptStruct* FPlayerAbilitySet::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerAbilitySet.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerAbilitySet.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerAbilitySet, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("PlayerAbilitySet"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerAbilitySet.OuterSingleton;
}
template<> PALWORLD_BASE_API UScriptStruct* StaticStruct<FPlayerAbilitySet>()
{
	return FPlayerAbilitySet::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "PlayerAbilitySet" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityToGrant_MetaData[] = {
		{ "Category", "PlayerAbilitySet" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc9\xb7\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AbilityToGrant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerAbilitySet>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerAbilitySet, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::NewProp_AbilityToGrant = { "AbilityToGrant", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerAbilitySet, AbilityToGrant), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerGameplayAbility_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityToGrant_MetaData), NewProp_AbilityToGrant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::NewProp_AbilityToGrant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	&NewStructOps,
	"PlayerAbilitySet",
	Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::PropPointers),
	sizeof(FPlayerAbilitySet),
	alignof(FPlayerAbilitySet),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilitySet()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerAbilitySet.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerAbilitySet.InnerSingleton, Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerAbilitySet.InnerSingleton;
}
// End ScriptStruct FPlayerAbilitySet

// Begin ScriptStruct FHeroWeaponData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HeroWeaponData;
class UScriptStruct* FHeroWeaponData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HeroWeaponData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HeroWeaponData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHeroWeaponData, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("HeroWeaponData"));
	}
	return Z_Registration_Info_UScriptStruct_HeroWeaponData.OuterSingleton;
}
template<> PALWORLD_BASE_API UScriptStruct* StaticStruct<FHeroWeaponData>()
{
	return FHeroWeaponData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FHeroWeaponData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponInputMappingContext_MetaData[] = {
		{ "Category", "HeroWeaponData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)\n//TSubclassOf<UPlayerLinkedAnimLayer> WeaponAnimLayerToLink;\n" },
#endif
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)\nTSubclassOf<UPlayerLinkedAnimLayer> WeaponAnimLayerToLink;" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponAbilities_MetaData[] = {
		{ "Category", "HeroWeaponData" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBaseDamage_MetaData[] = {
		{ "Category", "HeroWeaponData" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseStructType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponInputMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponAbilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeaponAbilities;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeaponBaseDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHeroWeaponData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponInputMappingContext = { "WeaponInputMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroWeaponData, WeaponInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponInputMappingContext_MetaData), NewProp_WeaponInputMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAbilities_Inner = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3794354411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAbilities = { "WeaponAbilities", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroWeaponData, WeaponAbilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponAbilities_MetaData), NewProp_WeaponAbilities_MetaData) }; // 3794354411
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponBaseDamage = { "WeaponBaseDamage", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FHeroWeaponData, WeaponBaseDamage), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBaseDamage_MetaData), NewProp_WeaponBaseDamage_MetaData) }; // 703790095
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAbilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponAbilities,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewProp_WeaponBaseDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHeroWeaponData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	&NewStructOps,
	"HeroWeaponData",
	Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::PropPointers),
	sizeof(FHeroWeaponData),
	alignof(FHeroWeaponData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHeroWeaponData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FHeroWeaponData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FHeroWeaponData()
{
	if (!Z_Registration_Info_UScriptStruct_HeroWeaponData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HeroWeaponData.InnerSingleton, Z_Construct_UScriptStruct_FHeroWeaponData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_HeroWeaponData.InnerSingleton;
}
// End ScriptStruct FHeroWeaponData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseStructType_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerAbilitySet::StaticStruct, Z_Construct_UScriptStruct_FPlayerAbilitySet_Statics::NewStructOps, TEXT("PlayerAbilitySet"), &Z_Registration_Info_UScriptStruct_PlayerAbilitySet, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerAbilitySet), 3794354411U) },
		{ FHeroWeaponData::StaticStruct, Z_Construct_UScriptStruct_FHeroWeaponData_Statics::NewStructOps, TEXT("HeroWeaponData"), &Z_Registration_Info_UScriptStruct_HeroWeaponData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHeroWeaponData), 2212482167U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseStructType_h_2970623550(TEXT("/Script/Palworld_Base"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseStructType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseStructType_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
