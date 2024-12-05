// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/DataAsset/Input/DataAsset_InputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_InputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_InputConfig();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister();
PALWORLD_BASE_API UScriptStruct* Z_Construct_UScriptStruct_FBaseInputActionConfig();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin ScriptStruct FBaseInputActionConfig
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BaseInputActionConfig;
class UScriptStruct* FBaseInputActionConfig::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BaseInputActionConfig.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BaseInputActionConfig.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseInputActionConfig, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("BaseInputActionConfig"));
	}
	return Z_Registration_Info_UScriptStruct_BaseInputActionConfig.OuterSingleton;
}
template<> PALWORLD_BASE_API UScriptStruct* StaticStruct<FBaseInputActionConfig>()
{
	return FBaseInputActionConfig::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "BaseInputActionConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "BaseInputActionConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseInputActionConfig>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseInputActionConfig, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBaseInputActionConfig, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::NewProp_InputAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	&NewStructOps,
	"BaseInputActionConfig",
	Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::PropPointers),
	sizeof(FBaseInputActionConfig),
	alignof(FBaseInputActionConfig),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBaseInputActionConfig()
{
	if (!Z_Registration_Info_UScriptStruct_BaseInputActionConfig.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BaseInputActionConfig.InnerSingleton, Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BaseInputActionConfig.InnerSingleton;
}
// End ScriptStruct FBaseInputActionConfig

// Begin Class UDataAsset_InputConfig
void UDataAsset_InputConfig::StaticRegisterNativesUDataAsset_InputConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_InputConfig);
UClass* Z_Construct_UClass_UDataAsset_InputConfig_NoRegister()
{
	return UDataAsset_InputConfig::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_InputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAsset/Input/DataAsset_InputConfig.h" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "DataAsset_InputConfig" },
		{ "ModuleRelativePath", "Public/DataAsset/Input/DataAsset_InputConfig.h" },
		{ "TitleProperty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_InputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 1443367790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 1443367790
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBaseInputActionConfig, METADATA_PARAMS(0, nullptr) }; // 1443367790
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_InputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 1443367790
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_InputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams = {
	&UDataAsset_InputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_InputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_InputConfig()
{
	if (!Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton, Z_Construct_UClass_UDataAsset_InputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_InputConfig.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UDataAsset_InputConfig>()
{
	return UDataAsset_InputConfig::StaticClass();
}
UDataAsset_InputConfig::UDataAsset_InputConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_InputConfig);
UDataAsset_InputConfig::~UDataAsset_InputConfig() {}
// End Class UDataAsset_InputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBaseInputActionConfig::StaticStruct, Z_Construct_UScriptStruct_FBaseInputActionConfig_Statics::NewStructOps, TEXT("BaseInputActionConfig"), &Z_Registration_Info_UScriptStruct_BaseInputActionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBaseInputActionConfig), 1443367790U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_InputConfig, UDataAsset_InputConfig::StaticClass, TEXT("UDataAsset_InputConfig"), &Z_Registration_Info_UClass_UDataAsset_InputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_InputConfig), 1981253670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_3009206387(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_Input_DataAsset_InputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
