// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/Widget/WidgetBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBase() {}

// Begin Cross Module References
PALWORLD_BASE_API UClass* Z_Construct_UClass_UWidgetBase();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UWidgetBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UWidgetBase
void UWidgetBase::StaticRegisterNativesUWidgetBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBase);
UClass* Z_Construct_UClass_UWidgetBase_NoRegister()
{
	return UWidgetBase::StaticClass();
}
struct Z_Construct_UClass_UWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Widget/WidgetBase.h" },
		{ "ModuleRelativePath", "Public/Widget/WidgetBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBase_Statics::ClassParams = {
	&UWidgetBase::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWidgetBase()
{
	if (!Z_Registration_Info_UClass_UWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBase.OuterSingleton, Z_Construct_UClass_UWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWidgetBase.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UWidgetBase>()
{
	return UWidgetBase::StaticClass();
}
UWidgetBase::UWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBase);
UWidgetBase::~UWidgetBase() {}
// End Class UWidgetBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Widget_WidgetBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBase, UWidgetBase::StaticClass, TEXT("UWidgetBase"), &Z_Registration_Info_UClass_UWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBase), 1254560972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Widget_WidgetBase_h_3915803635(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Widget_WidgetBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Widget_WidgetBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
