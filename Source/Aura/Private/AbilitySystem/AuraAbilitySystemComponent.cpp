// Copyright Hung ne


#include "AbilitySystem/AuraAbilitySystemComponent.h"

void UAuraAbilitySystemComponent::AbilityActorInfoSet()
{
	OnGameplayEffectAppliedDelegateToSelf.AddUObject(this, &UAuraAbilitySystemComponent::EffectApplied);
}

void UAuraAbilitySystemComponent::EffectApplied(UAbilitySystemComponent* AbilitySystemComponent,
                                                const FGameplayEffectSpec& EffectSpec, FActiveGameplayEffectHandle ActiveEffectHandle)
{
	// GEngine->AddOnScreenDebugMessage(1, 8.f, FColor::Blue, FString("Effect Applied!"));
	
	/*
	 *	GetAllAssetTags(): AllAssetTags applied "instant" and "duration" based GEs
	 *	GetAllGrantedTags(): GrantedTags is used for "duration, infinite,...". "Instant" cannot be used.
	 *	
	 *
	 *	FGameplayTagContainer: A Tag Container holds a collection of FGameplayTags, tags are included explicitly 
	 *	by adding them, and implicitly from adding child tags
	 */
	
	FGameplayTagContainer TagContainer;
	EffectSpec.GetAllAssetTags(TagContainer);
	
	EffectAssetTags.Broadcast(TagContainer);
	
}
