// Copyright Epic Games, Inc. All Rights Reserved.

#include "TechnicalHideoutGameMode.h"
#include "TechnicalHideoutCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATechnicalHideoutGameMode::ATechnicalHideoutGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
