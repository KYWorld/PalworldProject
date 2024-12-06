// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/Item/Equipment/EquipmentBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEquipmentBase() {}

// Begin Cross Module References
PALWORLD_BASE_API UClass* Z_Construct_UClass_AEquipmentBase();
PALWORLD_BASE_API UClass* Z_Construct_UClass_AEquipmentBase_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_AItemBase();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class AEquipmentBase
void AEquipmentBase::StaticRegisterNativesAEquipmentBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEquipmentBase);
UClass* Z_Construct_UClass_AEquipmentBase_NoRegister()
{
	return AEquipmentBase::StaticClass();
}
struct Z_Construct_UClass_AEquipmentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Item/Equipment/EquipmentBase.h" },
		{ "ModuleRelativePath", "Public/Item/Equipment/EquipmentBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEquipmentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEquipmentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItemBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEquipmentBase_Statics::ClassParams = {
	&AEquipmentBase::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEquipmentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEquipmentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEquipmentBase()
{
	if (!Z_Registration_Info_UClass_AEquipmentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEquipmentBase.OuterSingleton, Z_Construct_UClass_AEquipmentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEquipmentBase.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<AEquipmentBase>()
{
	return AEquipmentBase::StaticClass();
}
AEquipmentBase::AEquipmentBase() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEquipmentBase);
AEquipmentBase::~AEquipmentBase() {}
// End Class AEquipmentBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Item_Equipment_EquipmentBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEquipmentBase, AEquipmentBase::StaticClass, TEXT("AEquipmentBase"), &Z_Registration_Info_UClass_AEquipmentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEquipmentBase), 4279166929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Item_Equipment_EquipmentBase_h_2792921338(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Item_Equipment_EquipmentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_Item_Equipment_EquipmentBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
