// Copyright Epic Games, Inc. All Rights Reserved.

#include "codeing2GameMode.h"
#include "codeing2Character.h"
#include "UObject/ConstructorHelpers.h"

Acodeing2GameMode::Acodeing2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
