// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/Component/PawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnExtensionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnExtensionComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnExtensionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UPawnExtensionComponent
void UPawnExtensionComponent::StaticRegisterNativesUPawnExtensionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnExtensionComponent);
UClass* Z_Construct_UClass_UPawnExtensionComponent_NoRegister()
{
	return UPawnExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/PawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Public/Component/PawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPawnExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnExtensionComponent_Statics::ClassParams = {
	&UPawnExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnExtensionComponent()
{
	if (!Z_Registration_Info_UClass_UPawnExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_UPawnExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnExtensionComponent.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UPawnExtensionComponent>()
{
	return UPawnExtensionComponent::StaticClass();
}
UPawnExtensionComponent::UPawnExtensionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnExtensionComponent);
UPawnExtensionComponent::~UPawnExtensionComponent() {}
// End Class UPawnExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_Component_PawnExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnExtensionComponent, UPawnExtensionComponent::StaticClass, TEXT("UPawnExtensionComponent"), &Z_Registration_Info_UClass_UPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnExtensionComponent), 1342541281U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_Component_PawnExtensionComponent_h_1540765834(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_Component_PawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_Component_PawnExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
