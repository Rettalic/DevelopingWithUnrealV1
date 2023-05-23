// Copyright Epic Games, Inc. All Rights Reserved.

#include "DevUnrealV1GameMode.h"
#include "DevUnrealV1Character.h"
#include "UObject/ConstructorHelpers.h"

ADevUnrealV1GameMode::ADevUnrealV1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
