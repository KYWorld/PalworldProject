// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseLibrary/BaseGameplayTag.h"


namespace BaseGamePlayTag
{
	//Input Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Run, "InputTag.Run");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Jump, "InputTag.Jump");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Roll, "InputTag.Roll");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Attack, "InputTag.Attack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Crouch, "InputTag.Crouch");

    // Input Build Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Build, "InputTag.Build");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PlaceBuild, "InputTag.PlaceBuild");

	// Input Craft Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Craft, "InputTag.Craft");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PlaceCraft, "InputTag.PlaceCraft");

	//Inventory Tags
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Interact, "InputTag.Interact");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Inventory, "InputTag.Inventory");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_RotateMesh, "InputTag.RotateMesh");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_OppositeRotateMesh, "InputTag.OppositeRotateMesh");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Destroy, "InputTag.Destroy");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_PalInteract, "InputTag.PalInteract");
	
	

	UE_DEFINE_GAMEPLAY_TAG(InputTag_Equip, "InputTag.Equip");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Unequip, "InputTag.Unequip");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_MeleeAttack, "InputTag.MeleeAttack");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ReadyToThrow, "InputTag.ReadyToThrow");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ThrowAction, "InputTag.ThrowAction");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Aim, "InputTag.Aim");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_ShootingArrow, "InputTag.ShootingArrow");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Gliding, "InputTag.Gliding");

	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Run, "Player.Ability.Run");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Jump, "Player.Ability.Jump");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Roll, "Player.Ability.Roll");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack, "Player.Ability.Attack");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unquip_Axe, "Player.Ability.Unquip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_PalSphere, "Player.Ability.Equip.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unquip_PalSphere, "Player.Ability.Unquip.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ReadyToThrow_PalSphere, "Player.Ability.ReadyToThrow.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_ThrowAction_PalSphere, "Player.Ability.ThrowAction.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Aim, "Player.Ability.Aim");


	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_MeleeAttack, "Player.Ability.MeleeAttack");


	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_PalSphere, "Player.Weapon.PalSphere");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Bow, "Player.Weapon.Bow");


	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equipment_Equip, "Player.Event.Equipment.Equip");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equipment_Unquip, "Player.Event.Equipment.Unquip");

	UE_DEFINE_GAMEPLAY_TAG(Player_Event_Equipment_Throw, "Player.Event.Equipment.Throw");






	//Pal Tags
	UE_DEFINE_GAMEPLAY_TAG(Pal_Ability_Attack, "Pal.Ability.Attack");
	UE_DEFINE_GAMEPLAY_TAG(Pal_Ability_Skill, "Pal.Ability.Skill");
}
