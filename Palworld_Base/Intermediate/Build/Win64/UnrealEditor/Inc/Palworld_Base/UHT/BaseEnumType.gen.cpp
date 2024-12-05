// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/BaseLibrary/BaseEnumType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEnumType() {}

// Begin Cross Module References
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EBaseConfirmType();
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EBaseSuccessType();
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EBaseValidType();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Enum EBaseConfirmType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseConfirmType;
static UEnum* EBaseConfirmType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBaseConfirmType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBaseConfirmType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Palworld_Base_EBaseConfirmType, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("EBaseConfirmType"));
	}
	return Z_Registration_Info_UEnum_EBaseConfirmType.OuterSingleton;
}
template<> PALWORLD_BASE_API UEnum* StaticEnum<EBaseConfirmType>()
{
	return EBaseConfirmType_StaticEnum();
}
struct Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseEnumType.h" },
		{ "No.Name", "EBaseConfirmType::No" },
		{ "Yes.Name", "EBaseConfirmType::Yes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBaseConfirmType::Yes", (int64)EBaseConfirmType::Yes },
		{ "EBaseConfirmType::No", (int64)EBaseConfirmType::No },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	"EBaseConfirmType",
	"EBaseConfirmType",
	Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Palworld_Base_EBaseConfirmType()
{
	if (!Z_Registration_Info_UEnum_EBaseConfirmType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseConfirmType.InnerSingleton, Z_Construct_UEnum_Palworld_Base_EBaseConfirmType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBaseConfirmType.InnerSingleton;
}
// End Enum EBaseConfirmType

// Begin Enum EBaseValidType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseValidType;
static UEnum* EBaseValidType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBaseValidType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBaseValidType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Palworld_Base_EBaseValidType, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("EBaseValidType"));
	}
	return Z_Registration_Info_UEnum_EBaseValidType.OuterSingleton;
}
template<> PALWORLD_BASE_API UEnum* StaticEnum<EBaseValidType>()
{
	return EBaseValidType_StaticEnum();
}
struct Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "InValid.Name", "EBaseValidType::InValid" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseEnumType.h" },
		{ "Valid.Name", "EBaseValidType::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBaseValidType::Valid", (int64)EBaseValidType::Valid },
		{ "EBaseValidType::InValid", (int64)EBaseValidType::InValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	"EBaseValidType",
	"EBaseValidType",
	Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Palworld_Base_EBaseValidType()
{
	if (!Z_Registration_Info_UEnum_EBaseValidType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseValidType.InnerSingleton, Z_Construct_UEnum_Palworld_Base_EBaseValidType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBaseValidType.InnerSingleton;
}
// End Enum EBaseValidType

// Begin Enum EBaseSuccessType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseSuccessType;
static UEnum* EBaseSuccessType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBaseSuccessType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBaseSuccessType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Palworld_Base_EBaseSuccessType, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("EBaseSuccessType"));
	}
	return Z_Registration_Info_UEnum_EBaseSuccessType.OuterSingleton;
}
template<> PALWORLD_BASE_API UEnum* StaticEnum<EBaseSuccessType>()
{
	return EBaseSuccessType_StaticEnum();
}
struct Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Failed.Name", "EBaseSuccessType::Failed" },
		{ "ModuleRelativePath", "Public/BaseLibrary/BaseEnumType.h" },
		{ "Success.Name", "EBaseSuccessType::Success" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBaseSuccessType::Success", (int64)EBaseSuccessType::Success },
		{ "EBaseSuccessType::Failed", (int64)EBaseSuccessType::Failed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	"EBaseSuccessType",
	"EBaseSuccessType",
	Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Palworld_Base_EBaseSuccessType()
{
	if (!Z_Registration_Info_UEnum_EBaseSuccessType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseSuccessType.InnerSingleton, Z_Construct_UEnum_Palworld_Base_EBaseSuccessType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBaseSuccessType.InnerSingleton;
}
// End Enum EBaseSuccessType

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseEnumType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBaseConfirmType_StaticEnum, TEXT("EBaseConfirmType"), &Z_Registration_Info_UEnum_EBaseConfirmType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1319535783U) },
		{ EBaseValidType_StaticEnum, TEXT("EBaseValidType"), &Z_Registration_Info_UEnum_EBaseValidType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 642014396U) },
		{ EBaseSuccessType_StaticEnum, TEXT("EBaseSuccessType"), &Z_Registration_Info_UEnum_EBaseSuccessType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 914424248U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseEnumType_h_377202487(TEXT("/Script/Palworld_Base"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseEnumType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_BaseLibrary_BaseEnumType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
