// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "UE4GitTestProjectGameMode.h"
#include "UE4GitTestProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE4GitTestProjectGameMode::AUE4GitTestProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
