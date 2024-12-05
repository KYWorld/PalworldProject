// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/Component/Equipment/PawnEquipmentComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnEquipmentComponent() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
PALWORLD_BASE_API UClass* Z_Construct_UClass_AEquipmentBase_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnEquipmentComponent();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnEquipmentComponent_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnExtensionComponent();
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EToggleDamageType();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Enum EToggleDamageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToggleDamageType;
static UEnum* EToggleDamageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EToggleDamageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EToggleDamageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Palworld_Base_EToggleDamageType, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("EToggleDamageType"));
	}
	return Z_Registration_Info_UEnum_EToggleDamageType.OuterSingleton;
}
template<> PALWORLD_BASE_API UEnum* StaticEnum<EToggleDamageType>()
{
	return EToggleDamageType_StaticEnum();
}
struct Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CurrentEquippedEquipment.Name", "EToggleDamageType::CurrentEquippedEquipment" },
		{ "LeftHand.Name", "EToggleDamageType::LeftHand" },
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
		{ "RightHand.Name", "EToggleDamageType::RightHand" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EToggleDamageType::CurrentEquippedEquipment", (int64)EToggleDamageType::CurrentEquippedEquipment },
		{ "EToggleDamageType::LeftHand", (int64)EToggleDamageType::LeftHand },
		{ "EToggleDamageType::RightHand", (int64)EToggleDamageType::RightHand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	"EToggleDamageType",
	"EToggleDamageType",
	Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Palworld_Base_EToggleDamageType()
{
	if (!Z_Registration_Info_UEnum_EToggleDamageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToggleDamageType.InnerSingleton, Z_Construct_UEnum_Palworld_Base_EToggleDamageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EToggleDamageType.InnerSingleton;
}
// End Enum EToggleDamageType

// Begin Class UPawnEquipmentComponent Function GetCharacterCarriedEquipmentByTag
struct Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics
{
	struct PawnEquipmentComponent_eventGetCharacterCarriedEquipmentByTag_Parms
	{
		FGameplayTag EquipmentTag;
		AEquipmentBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xde\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xde\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::NewProp_EquipmentTag = { "EquipmentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventGetCharacterCarriedEquipmentByTag_Parms, EquipmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventGetCharacterCarriedEquipmentByTag_Parms, ReturnValue), Z_Construct_UClass_AEquipmentBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::NewProp_EquipmentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnEquipmentComponent, nullptr, "GetCharacterCarriedEquipmentByTag", nullptr, nullptr, Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PawnEquipmentComponent_eventGetCharacterCarriedEquipmentByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::PawnEquipmentComponent_eventGetCharacterCarriedEquipmentByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnEquipmentComponent::execGetCharacterCarriedEquipmentByTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EquipmentTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEquipmentBase**)Z_Param__Result=P_THIS->GetCharacterCarriedEquipmentByTag(Z_Param_EquipmentTag);
	P_NATIVE_END;
}
// End Class UPawnEquipmentComponent Function GetCharacterCarriedEquipmentByTag

// Begin Class UPawnEquipmentComponent Function GetCharacterCurrentEquippedEquipment
struct Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics
{
	struct PawnEquipmentComponent_eventGetCharacterCurrentEquippedEquipment_Parms
	{
		AEquipmentBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventGetCharacterCurrentEquippedEquipment_Parms, ReturnValue), Z_Construct_UClass_AEquipmentBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnEquipmentComponent, nullptr, "GetCharacterCurrentEquippedEquipment", nullptr, nullptr, Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PawnEquipmentComponent_eventGetCharacterCurrentEquippedEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::PawnEquipmentComponent_eventGetCharacterCurrentEquippedEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnEquipmentComponent::execGetCharacterCurrentEquippedEquipment)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AEquipmentBase**)Z_Param__Result=P_THIS->GetCharacterCurrentEquippedEquipment();
	P_NATIVE_END;
}
// End Class UPawnEquipmentComponent Function GetCharacterCurrentEquippedEquipment

// Begin Class UPawnEquipmentComponent Function RegisterSpawnedEquipment
struct Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics
{
	struct PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms
	{
		FGameplayTag EquipmentTag;
		AEquipmentBase* Equipment;
		bool bRegisterAsEquippedEquipment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_bRegisterAsEquippedEquipment", "false" },
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_EquipmentTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Equipment;
	static void NewProp_bRegisterAsEquippedEquipment_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterAsEquippedEquipment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_EquipmentTag = { "EquipmentTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms, EquipmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_Equipment = { "Equipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms, Equipment), Z_Construct_UClass_AEquipmentBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_bRegisterAsEquippedEquipment_SetBit(void* Obj)
{
	((PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms*)Obj)->bRegisterAsEquippedEquipment = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_bRegisterAsEquippedEquipment = { "bRegisterAsEquippedEquipment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms), &Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_bRegisterAsEquippedEquipment_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_EquipmentTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_Equipment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::NewProp_bRegisterAsEquippedEquipment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnEquipmentComponent, nullptr, "RegisterSpawnedEquipment", nullptr, nullptr, Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::PawnEquipmentComponent_eventRegisterSpawnedEquipment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnEquipmentComponent::execRegisterSpawnedEquipment)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_EquipmentTag);
	P_GET_OBJECT(AEquipmentBase,Z_Param_Equipment);
	P_GET_UBOOL(Z_Param_bRegisterAsEquippedEquipment);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterSpawnedEquipment(Z_Param_EquipmentTag,Z_Param_Equipment,Z_Param_bRegisterAsEquippedEquipment);
	P_NATIVE_END;
}
// End Class UPawnEquipmentComponent Function RegisterSpawnedEquipment

// Begin Class UPawnEquipmentComponent Function ToggleEquipmentCollsion
struct Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics
{
	struct PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms
	{
		bool bUse;
		EToggleDamageType ToggleDamageType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Equipment" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_ToggleDamageType", "CurrentEquippedEquipment" },
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ToggleDamageType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ToggleDamageType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_bUse_SetBit(void* Obj)
{
	((PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms*)Obj)->bUse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms), &Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_ToggleDamageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_ToggleDamageType = { "ToggleDamageType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms, ToggleDamageType), Z_Construct_UEnum_Palworld_Base_EToggleDamageType, METADATA_PARAMS(0, nullptr) }; // 2707391814
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_bUse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_ToggleDamageType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::NewProp_ToggleDamageType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnEquipmentComponent, nullptr, "ToggleEquipmentCollsion", nullptr, nullptr, Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::PawnEquipmentComponent_eventToggleEquipmentCollsion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnEquipmentComponent::execToggleEquipmentCollsion)
{
	P_GET_UBOOL(Z_Param_bUse);
	P_GET_ENUM(EToggleDamageType,Z_Param_ToggleDamageType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleEquipmentCollsion(Z_Param_bUse,EToggleDamageType(Z_Param_ToggleDamageType));
	P_NATIVE_END;
}
// End Class UPawnEquipmentComponent Function ToggleEquipmentCollsion

// Begin Class UPawnEquipmentComponent
void UPawnEquipmentComponent::StaticRegisterNativesUPawnEquipmentComponent()
{
	UClass* Class = UPawnEquipmentComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCharacterCarriedEquipmentByTag", &UPawnEquipmentComponent::execGetCharacterCarriedEquipmentByTag },
		{ "GetCharacterCurrentEquippedEquipment", &UPawnEquipmentComponent::execGetCharacterCurrentEquippedEquipment },
		{ "RegisterSpawnedEquipment", &UPawnEquipmentComponent::execRegisterSpawnedEquipment },
		{ "ToggleEquipmentCollsion", &UPawnEquipmentComponent::execToggleEquipmentCollsion },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnEquipmentComponent);
UClass* Z_Construct_UClass_UPawnEquipmentComponent_NoRegister()
{
	return UPawnEquipmentComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnEquipmentComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Component/Equipment/PawnEquipmentComponent.h" },
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEquippedEquipmentTag_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/Equipment/PawnEquipmentComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc2\xb1\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentEquippedEquipmentTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCarriedEquipmentByTag, "GetCharacterCarriedEquipmentByTag" }, // 2522948375
		{ &Z_Construct_UFunction_UPawnEquipmentComponent_GetCharacterCurrentEquippedEquipment, "GetCharacterCurrentEquippedEquipment" }, // 3044550217
		{ &Z_Construct_UFunction_UPawnEquipmentComponent_RegisterSpawnedEquipment, "RegisterSpawnedEquipment" }, // 2684178479
		{ &Z_Construct_UFunction_UPawnEquipmentComponent_ToggleEquipmentCollsion, "ToggleEquipmentCollsion" }, // 2744661840
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnEquipmentComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPawnEquipmentComponent_Statics::NewProp_CurrentEquippedEquipmentTag = { "CurrentEquippedEquipmentTag", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnEquipmentComponent, CurrentEquippedEquipmentTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentEquippedEquipmentTag_MetaData), NewProp_CurrentEquippedEquipmentTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnEquipmentComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnEquipmentComponent_Statics::NewProp_CurrentEquippedEquipmentTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnEquipmentComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnEquipmentComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnExtensionComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnEquipmentComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnEquipmentComponent_Statics::ClassParams = {
	&UPawnEquipmentComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPawnEquipmentComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnEquipmentComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnEquipmentComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnEquipmentComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnEquipmentComponent()
{
	if (!Z_Registration_Info_UClass_UPawnEquipmentComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnEquipmentComponent.OuterSingleton, Z_Construct_UClass_UPawnEquipmentComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnEquipmentComponent.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UPawnEquipmentComponent>()
{
	return UPawnEquipmentComponent::StaticClass();
}
UPawnEquipmentComponent::UPawnEquipmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnEquipmentComponent);
UPawnEquipmentComponent::~UPawnEquipmentComponent() {}
// End Class UPawnEquipmentComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EToggleDamageType_StaticEnum, TEXT("EToggleDamageType"), &Z_Registration_Info_UEnum_EToggleDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2707391814U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnEquipmentComponent, UPawnEquipmentComponent::StaticClass, TEXT("UPawnEquipmentComponent"), &Z_Registration_Info_UClass_UPawnEquipmentComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnEquipmentComponent), 1488520703U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_1110860990(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_Component_Equipment_PawnEquipmentComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
