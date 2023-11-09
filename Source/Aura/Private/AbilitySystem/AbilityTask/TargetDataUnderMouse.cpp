// Copyright Jeremy and Raebecca Powell


#include "AbilitySystem/AbilityTask/TargetDataUnderMouse.h"

UTargetDataUnderMouse* UTargetDataUnderMouse::CreateTargetDataUnderMouse(UGameplayAbility* OwningAbility)
{
	UTargetDataUnderMouse* MyObj = NewAbilityTask<UTargetDataUnderMouse>(OwningAbility);

	return MyObj;
}

void UTargetDataUnderMouse::Activate()
{
	APlayerController* PC = Ability->GetCurrentActorInfo()->PlayerController.Get();

	FHitResult Hit;
	PC->GetHitResultUnderCursor(ECC_Visibility, false, Hit);

	ValidData.Broadcast(Hit.Location);
}
