// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/BaseLibrary/BaseFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseFunctionLibrary();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UBaseFunctionLibrary
void UBaseFunctionLibrary::StaticRegisterNativesUBaseFunctionLibrary()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseFunctionLibrary);
UClass* Z_Construct_UClass_UBaseFunctionLibrary_NoRegister()
{
	return UBaseFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UBaseFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseLibrary/BaseFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBaseFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseFunctionLibrary_Statics::ClassParams = {
	&UBaseFunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBaseFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseFunctionLibrary.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UBaseFunctionLibrary>()
{
	return UBaseFunctionLibrary::StaticClass();
}
UBaseFunctionLibrary::UBaseFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseFunctionLibrary);
UBaseFunctionLibrary::~UBaseFunctionLibrary() {}
// End Class UBaseFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseFunctionLibrary, UBaseFunctionLibrary::StaticClass, TEXT("UBaseFunctionLibrary"), &Z_Registration_Info_UClass_UBaseFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseFunctionLibrary), 2685957748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_2682687517(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
