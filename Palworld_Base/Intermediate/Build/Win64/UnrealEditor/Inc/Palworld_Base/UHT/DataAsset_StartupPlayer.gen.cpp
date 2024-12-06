// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/DataAsset/StartupData/DataAsset_StartupPlayer.h"
#include "Palworld_Base/Public/BaseLibrary/BaseStructType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataAsset_StartupPlayer() {}

// Begin Cross Module References
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_StartupBase();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_StartupPlayer();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UDataAsset_StartupPlayer_NoRegister();
PALWORLD_BASE_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerAbilitySet();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UDataAsset_StartupPlayer
void UDataAsset_StartupPlayer::StaticRegisterNativesUDataAsset_StartupPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataAsset_StartupPlayer);
UClass* Z_Construct_UClass_UDataAsset_StartupPlayer_NoRegister()
{
	return UDataAsset_StartupPlayer::StaticClass();
}
struct Z_Construct_UClass_UDataAsset_StartupPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DataAsset/StartupData/DataAsset_StartupPlayer.h" },
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartupAbilitySets_MetaData[] = {
		{ "Category", "StartupData" },
		{ "ModuleRelativePath", "Public/DataAsset/StartupData/DataAsset_StartupPlayer.h" },
		{ "TitleProPerty", "InputTag" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerStartupAbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerStartupAbilitySets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataAsset_StartupPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::NewProp_PlayerStartupAbilitySets_Inner = { "PlayerStartupAbilitySets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerAbilitySet, METADATA_PARAMS(0, nullptr) }; // 3794354411
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::NewProp_PlayerStartupAbilitySets = { "PlayerStartupAbilitySets", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDataAsset_StartupPlayer, PlayerStartupAbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerStartupAbilitySets_MetaData), NewProp_PlayerStartupAbilitySets_MetaData) }; // 3794354411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::NewProp_PlayerStartupAbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::NewProp_PlayerStartupAbilitySets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset_StartupBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::ClassParams = {
	&UDataAsset_StartupPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDataAsset_StartupPlayer()
{
	if (!Z_Registration_Info_UClass_UDataAsset_StartupPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataAsset_StartupPlayer.OuterSingleton, Z_Construct_UClass_UDataAsset_StartupPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDataAsset_StartupPlayer.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UDataAsset_StartupPlayer>()
{
	return UDataAsset_StartupPlayer::StaticClass();
}
UDataAsset_StartupPlayer::UDataAsset_StartupPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDataAsset_StartupPlayer);
UDataAsset_StartupPlayer::~UDataAsset_StartupPlayer() {}
// End Class UDataAsset_StartupPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDataAsset_StartupPlayer, UDataAsset_StartupPlayer::StaticClass, TEXT("UDataAsset_StartupPlayer"), &Z_Registration_Info_UClass_UDataAsset_StartupPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataAsset_StartupPlayer), 2577279250U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupPlayer_h_2525638537(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_TaeHyun_Documents_PalworldProject_Palworld_Base_Source_Palworld_Base_Public_DataAsset_StartupData_DataAsset_StartupPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
