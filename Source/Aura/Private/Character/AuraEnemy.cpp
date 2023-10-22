// Copyright Jeremy and Raebecca Powell


#include "Character/AuraEnemy.h"


void AAuraEnemy::HighlightActor()
{
	bIsTargeted = true;
}

void AAuraEnemy::UnHighlightActor()
{
	bIsTargeted = false;
}