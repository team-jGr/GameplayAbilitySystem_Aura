// Copyright Jeremy and Raebecca Powell


#include "AbilitySystem/AuraAbilitySystemGlobals.h"

#include "AuraAbilityTypes.h"

FGameplayEffectContext* UAuraAbilitySystemGlobals::AllocGameplayEffectContext() const
{
	return new FAuraGameplayEffectContext();
}
