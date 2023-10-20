// Copyright Jeremy and Raebecca Powell

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
<<<<<<< HEAD

#include "AuraPlayerController.generated.h"


class UInputMappingContext;

=======
#include "AuraPlayerController.generated.h"

/**
 * 
 */
>>>>>>> 78cff1a834836931f240dd5ebb37f1e760438437
UCLASS()
class AURA_API AAuraPlayerController : public APlayerController
{
	GENERATED_BODY()
	
<<<<<<< HEAD
public:
	AAuraPlayerController();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, category="Input")
	TObjectPtr<UInputMappingContext> AuraContext;
=======
>>>>>>> 78cff1a834836931f240dd5ebb37f1e760438437
};
