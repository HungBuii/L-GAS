// Copyright Hung ne

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AuraAbilitySystemComponent.generated.h"


/* 
* Ability System Component (ASC):	is the bridge between Actors and the Gameplay Ability System. 
 *									Any Actor that intends to interact with the Gameplay Ability System 
 *									needs its own Ability System Component, or access to an Ability System Component 
 *									on a PlayerState or Pawn.
 * 
 *									Attaches to Actor to manage and execute Gameplay Abilities, 
 *									and handles replication for multiplayer.
 */

DECLARE_MULTICAST_DELEGATE_OneParam(FEffectAssetTags, const FGameplayTagContainer& /*AssetTag*/);

UCLASS()
class AURA_API UAuraAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	void AbilityActorInfoSet();
	
	FEffectAssetTags EffectAssetTags;
	
	void AddCharacterAbilities(const TArray<TSubclassOf<UGameplayAbility>>& StartupAbilities);
	
	void AbilityInputTagHeld(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);
	
protected:
	void EffectApplied(UAbilitySystemComponent* AbilitySystemComponent, const FGameplayEffectSpec& EffectSpec, 
		FActiveGameplayEffectHandle ActiveEffectHandle);
	
};
