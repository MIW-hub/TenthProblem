// Copyright Epic Games, Inc. All Rights Reserved.

#include "TenthProblemGameMode.h"
#include "TenthProblemCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATenthProblemGameMode::ATenthProblemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
