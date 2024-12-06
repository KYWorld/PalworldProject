// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/Component/Input/BaseInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseInputComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseInputComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseInputComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UBaseInputComponent
void UBaseInputComponent::StaticRegisterNativesUBaseInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseInputComponent);
UClass* Z_Construct_UClass_UBaseInputComponent_NoRegister()
{
	return UBaseInputComponent::StaticClass();
}
struct Z_Construct_UClass_UBaseInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Component/Input/BaseInputComponent.h" },
		{ "ModuleRelativePath", "Public/Component/Input/BaseInputComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseInputComponent_Statics::ClassParams = {
	&UBaseInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseInputComponent()
{
	if (!Z_Registration_Info_UClass_UBaseInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseInputComponent.OuterSingleton, Z_Construct_UClass_UBaseInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseInputComponent.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UBaseInputComponent>()
{
	return UBaseInputComponent::StaticClass();
}
UBaseInputComponent::UBaseInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseInputComponent);
UBaseInputComponent::~UBaseInputComponent() {}
// End Class UBaseInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Component_Input_BaseInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseInputComponent, UBaseInputComponent::StaticClass, TEXT("UBaseInputComponent"), &Z_Registration_Info_UClass_UBaseInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseInputComponent), 2434667813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Component_Input_BaseInputComponent_h_1647408757(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Component_Input_BaseInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Component_Input_BaseInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
