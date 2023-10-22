// Copyright Jeremy and Raebecca Powell

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"

#include "AuraPlayerController.generated.h"


class UInputMappingContext;
class UInputAction;
struct FInputActionValue;
class IEnemyInterface;

UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	AAuraPlayerController();

	virtual void PlayerTick(float DeltaTime) override;

protected:
	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

private:
	void Move(const FInputActionValue& InputActionValue);
	
	UPROPERTY(EditAnywhere, category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;

	UPROPERTY(EditAnywhere, category="Input")
	TObjectPtr<UInputAction> MoveAction;

	void CursorTrace();
	
	IEnemyInterface* LastActor;

	IEnemyInterface* ThisActor;
};
