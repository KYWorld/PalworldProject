// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Palworld_Base/Public/AbilitySystem/Ability/PlayerGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerGameplayAbility() {}

// Begin Cross Module References
PALWORLD_BASE_API UClass* Z_Construct_UClass_ABasePlayerController_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility();
PALWORLD_BASE_API UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister();
UPackage* Z_Construct_UPackage__Script_Palworld_Base();
// End Cross Module References

// Begin Class UPlayerGameplayAbility Function GetPlayerCharacterFromActorInfo
struct Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics
{
	struct PlayerGameplayAbility_eventGetPlayerCharacterFromActorInfo_Parms
	{
		APlayerCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/PlayerGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGameplayAbility_eventGetPlayerCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_APlayerCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerGameplayAbility, nullptr, "GetPlayerCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PlayerGameplayAbility_eventGetPlayerCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::PlayerGameplayAbility_eventGetPlayerCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerGameplayAbility::execGetPlayerCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerCharacter**)Z_Param__Result=P_THIS->GetPlayerCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UPlayerGameplayAbility Function GetPlayerCharacterFromActorInfo

// Begin Class UPlayerGameplayAbility Function GetPlayerControllerFromActorInfo
struct Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics
{
	struct PlayerGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms
	{
		ABasePlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/PlayerGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_ABasePlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerGameplayAbility, nullptr, "GetPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PlayerGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::PlayerGameplayAbility_eventGetPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPlayerGameplayAbility::execGetPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ABasePlayerController**)Z_Param__Result=P_THIS->GetPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UPlayerGameplayAbility Function GetPlayerControllerFromActorInfo

// Begin Class UPlayerGameplayAbility
void UPlayerGameplayAbility::StaticRegisterNativesUPlayerGameplayAbility()
{
	UClass* Class = UPlayerGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPlayerCharacterFromActorInfo", &UPlayerGameplayAbility::execGetPlayerCharacterFromActorInfo },
		{ "GetPlayerControllerFromActorInfo", &UPlayerGameplayAbility::execGetPlayerControllerFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerGameplayAbility);
UClass* Z_Construct_UClass_UPlayerGameplayAbility_NoRegister()
{
	return UPlayerGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UPlayerGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/Ability/PlayerGameplayAbility.h" },
		{ "ModuleRelativePath", "Public/AbilitySystem/Ability/PlayerGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerCharacterFromActorInfo, "GetPlayerCharacterFromActorInfo" }, // 378202501
		{ &Z_Construct_UFunction_UPlayerGameplayAbility_GetPlayerControllerFromActorInfo, "GetPlayerControllerFromActorInfo" }, // 1325689897
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPlayerGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBaseGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_Palworld_Base,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams = {
	&UPlayerGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UPlayerGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPlayerGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton, Z_Construct_UClass_UPlayerGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPlayerGameplayAbility.OuterSingleton;
}
template<> PALWORLD_BASE_API UClass* StaticClass<UPlayerGameplayAbility>()
{
	return UPlayerGameplayAbility::StaticClass();
}
UPlayerGameplayAbility::UPlayerGameplayAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerGameplayAbility);
UPlayerGameplayAbility::~UPlayerGameplayAbility() {}
// End Class UPlayerGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerGameplayAbility, UPlayerGameplayAbility::StaticClass, TEXT("UPlayerGameplayAbility"), &Z_Registration_Info_UClass_UPlayerGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerGameplayAbility), 3130201791U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_394807713(TEXT("/Script/Palworld_Base"),
	Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_KGA_Desktop_Test_Palworld_Base_Source_Palworld_Base_Public_AbilitySystem_Ability_PlayerGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
