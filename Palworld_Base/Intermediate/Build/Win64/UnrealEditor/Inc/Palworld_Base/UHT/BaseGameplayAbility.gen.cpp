// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/AbilitySystem/Ability/BaseGameplayAbility.h"
#include "GameplayAbilities/Public/ActiveGameplayEffectHandle.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameplayAbility() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FActiveGameplayEffectHandle();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayEffectSpecHandle();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPawnEquipmentComponent_NoRegister();
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy();
PALWORLD_BASE_API UEnum* Z_Construct_UEnum_Palworld_Base_EBaseSuccessType();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Enum EBaseAbilityActivationPolcy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy;
static UEnum* EBaseAbilityActivationPolcy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy, (UObject*)Z_Construct_UPackage__Script_Palworld_Base(), TEXT("EBaseAbilityActivationPolcy"));
	}
	return Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.OuterSingleton;
}
template<> PALWORLD_BASE_API UEnum* StaticEnum<EBaseAbilityActivationPolcy>()
{
	return EBaseAbilityActivationPolcy_StaticEnum();
}
struct Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
		{ "OnGiven.Name", "EBaseAbilityActivationPolcy::OnGiven" },
		{ "OnTriggered.Name", "EBaseAbilityActivationPolcy::OnTriggered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBaseAbilityActivationPolcy::OnTriggered", (int64)EBaseAbilityActivationPolcy::OnTriggered },
		{ "EBaseAbilityActivationPolcy::OnGiven", (int64)EBaseAbilityActivationPolcy::OnGiven },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Palworld_Base,
	nullptr,
	"EBaseAbilityActivationPolcy",
	"EBaseAbilityActivationPolcy",
	Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy()
{
	if (!Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.InnerSingleton, Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy.InnerSingleton;
}
// End Enum EBaseAbilityActivationPolcy

// Begin Class UBaseGameplayAbility Function BP_ApplyEffectSpecHandleToTarget
struct Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics
{
	struct BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms
	{
		AActor* TargetActor;
		FGameplayEffectSpecHandle SpecHandle;
		EBaseSuccessType OutSuccessType;
		FActiveGameplayEffectHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "Display", "Apply Gameplay Effect Handle To Target Actor" },
		{ "ExpandEnumAsExecs", "OutSuccessType" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutSuccessType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_OutSuccessType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle = { "SpecHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, SpecHandle), Z_Construct_UScriptStruct_FGameplayEffectSpecHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecHandle_MetaData), NewProp_SpecHandle_MetaData) }; // 3383902265
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType = { "OutSuccessType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, OutSuccessType), Z_Construct_UEnum_Palworld_Base_EBaseSuccessType, METADATA_PARAMS(0, nullptr) }; // 914424248
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FActiveGameplayEffectHandle, METADATA_PARAMS(0, nullptr) }; // 290910411
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_SpecHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_OutSuccessType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "BP_ApplyEffectSpecHandleToTarget", nullptr, nullptr, Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::BaseGameplayAbility_eventBP_ApplyEffectSpecHandleToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execBP_ApplyEffectSpecHandleToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_STRUCT_REF(FGameplayEffectSpecHandle,Z_Param_Out_SpecHandle);
	P_GET_ENUM_REF(EBaseSuccessType,Z_Param_Out_OutSuccessType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActiveGameplayEffectHandle*)Z_Param__Result=P_THIS->BP_ApplyEffectSpecHandleToTarget(Z_Param_TargetActor,Z_Param_Out_SpecHandle,(EBaseSuccessType&)(Z_Param_Out_OutSuccessType));
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function BP_ApplyEffectSpecHandleToTarget

// Begin Class UBaseGameplayAbility Function GetBaseAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics
{
	struct BaseGameplayAbility_eventGetBaseAbilitySystemComponentFromActorInfo_Parms
	{
		UBaseAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventGetBaseAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UBaseAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "GetBaseAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::BaseGameplayAbility_eventGetBaseAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::BaseGameplayAbility_eventGetBaseAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execGetBaseAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UBaseAbilitySystemComponent**)Z_Param__Result=P_THIS->GetBaseAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function GetBaseAbilitySystemComponentFromActorInfo

// Begin Class UBaseGameplayAbility Function GetPawnEquipmentComponentFromActorInfo
struct Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics
{
	struct BaseGameplayAbility_eventGetPawnEquipmentComponentFromActorInfo_Parms
	{
		UPawnEquipmentComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BaseGameplayAbility_eventGetPawnEquipmentComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UPawnEquipmentComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseGameplayAbility, nullptr, "GetPawnEquipmentComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::BaseGameplayAbility_eventGetPawnEquipmentComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::BaseGameplayAbility_eventGetPawnEquipmentComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBaseGameplayAbility::execGetPawnEquipmentComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPawnEquipmentComponent**)Z_Param__Result=P_THIS->GetPawnEquipmentComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UBaseGameplayAbility Function GetPawnEquipmentComponentFromActorInfo

// Begin Class UBaseGameplayAbility
void UBaseGameplayAbility::StaticRegisterNativesUBaseGameplayAbility()
{
	UClass* Class = UBaseGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BP_ApplyEffectSpecHandleToTarget", &UBaseGameplayAbility::execBP_ApplyEffectSpecHandleToTarget },
		{ "GetBaseAbilitySystemComponentFromActorInfo", &UBaseGameplayAbility::execGetBaseAbilitySystemComponentFromActorInfo },
		{ "GetPawnEquipmentComponentFromActorInfo", &UBaseGameplayAbility::execGetPawnEquipmentComponentFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseGameplayAbility);
UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister()
{
	return UBaseGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UBaseGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Ability/BaseGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityActivationPolicy_MetaData[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/BaseGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_AbilityActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AbilityActivationPolicy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseGameplayAbility_BP_ApplyEffectSpecHandleToTarget, "BP_ApplyEffectSpecHandleToTarget" }, // 2246153607
		{ &Z_Construct_UFunction_UBaseGameplayAbility_GetBaseAbilitySystemComponentFromActorInfo, "GetBaseAbilitySystemComponentFromActorInfo" }, // 2685230017
		{ &Z_Construct_UFunction_UBaseGameplayAbility_GetPawnEquipmentComponentFromActorInfo, "GetPawnEquipmentComponentFromActorInfo" }, // 2073947094
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBaseGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBaseGameplayAbility_Statics::NewProp_AbilityActivationPolicy = { "AbilityActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseGameplayAbility, AbilityActivationPolicy), Z_Construct_UEnum_Palworld_Base_EBaseAbilityActivationPolcy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityActivationPolicy_MetaData), NewProp_AbilityActivationPolicy_MetaData) }; // 972100872
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameplayAbility_Statics::NewProp_AbilityActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseGameplayAbility_Statics::NewProp_AbilityActivationPolicy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams = {
	&UBaseGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBaseGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBaseGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton, Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBaseGameplayAbility.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UBaseGameplayAbility>()
{
	return UBaseGameplayAbility::StaticClass();
}
UBaseGameplayAbility::UBaseGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameplayAbility);
UBaseGameplayAbility::~UBaseGameplayAbility() {}
// End Class UBaseGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBaseAbilityActivationPolcy_StaticEnum, TEXT("EBaseAbilityActivationPolcy"), &Z_Registration_Info_UEnum_EBaseAbilityActivationPolcy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 972100872U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBaseGameplayAbility, UBaseGameplayAbility::StaticClass, TEXT("UBaseGameplayAbility"), &Z_Registration_Info_UClass_UBaseGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseGameplayAbility), 3166690022U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_2345535785(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_BaseGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
