// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace BaseGamePlayTag
{
	//Input Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Run);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Jump);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Roll);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Attack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Crouch);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_WeaponSwap_Up);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_WeaponSwap_Down);

    // Input Build Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Build);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_PlaceBuild);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ContinuousBuild);

	// Input Craft Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Craft);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_PlaceCraft);

	//Inventory Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Interact);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Inventory);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_PalInteract);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_RotateMesh);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_OppositeRotateMesh);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Destroy);




	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_MeleeAttack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ReadyToThrow);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ThrowAction);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Aim);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ShootingArrow);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Gliding);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_ShootingHandgun);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Aim_Shooting);


	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Run);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Jump);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Roll);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Attack);


	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Equip_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Unquip_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ReadyToThrow_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ThrowAction_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_MeleeAttack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_Aim);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Ability_ShootingHandgun);

	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_PalSphere);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Bow);


	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equipment_Throw);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_CoolTime_Gliding);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_CoolTime_ShootingBow);




	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Shared_Event_HitReact);






	//Pal Tags
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Pal_Ability_Attack);
	PALWORLD_BASE_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Pal_Ability_Skill);
}
