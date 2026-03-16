// Copyright Hung ne

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "AuraGameplayAbility.generated.h"

/* 
 * Gameplay Ability (GA): Defines the skills or actions that can be triggered by an Actor, 
 *						  which can be attacks, dodges, spells, etc. Can run asynchronously, supporting multi-stage, 
 *						  animation, sound, and network synchronization. 
 *									
 */


UCLASS()
class AURA_API UAuraGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
};
