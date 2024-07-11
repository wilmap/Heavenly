// Copyright Epic Games, Inc. All Rights Reserved.

#include "HeavenlyGameMode.h"
#include "HeavenlyCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHeavenlyGameMode::AHeavenlyGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
