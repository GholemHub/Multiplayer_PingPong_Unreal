// Copyright Epic Games, Inc. All Rights Reserved.


#include "PingPongGameModeBase.h"

#include "Second_PlayerController.h"
#include "SecondPlayerController.h"
#include "GameFramework/PlayerState.h"



APingPongGameModeBase::APingPongGameModeBase()
{
    DefaultPawnClass = ABasePawn::StaticClass();
    SecondPlayerCharacterClass = ASecondPlayerController::StaticClass();
    SecondPlayerControllerClass = ASecond_PlayerController::StaticClass();
}

void APingPongGameModeBase::PostLogin(APlayerController* NewPlayer)
{
    Super::PostLogin(NewPlayer);
    if (NewPlayer->PlayerState->PlayerId == 1)
    {
        // Spawn the second player's pawn
        ASecondPlayerController* SecondPlayerController = GetWorld()->SpawnActor<ASecondPlayerController>(ASecondPlayerController::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);

        if (SecondPlayerController)
        {
            // Spawn the second player's pawn
            ASecondPlayerController* SecondPlayerPawn = GetWorld()->SpawnActor<ASecondPlayerController>(ASecond_PlayerController::StaticClass(), FVector::ZeroVector, FRotator::ZeroRotator);

            if (SecondPlayerPawn)
            {
                // Possess the second player's pawn with the second player's controller
                //SecondPlayerController->Possess(SecondPlayerPawn);
            }
        }
    }

}

void APingPongGameModeBase::StartPlay()
{

    Super::StartPlay();

    // Spawn the second player at the beginning of the game
    SpawnSecondPlayer();
}

void APingPongGameModeBase::SpawnSecondPlayer()
{
    if (SecondPlayerCharacterClass)
    {
        // Spawn the second player character
        FVector SpawnLocation = FVector(0.0f, 0.0f, 0.0f); // Set the spawn location as needed
        FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f); // Set the spawn rotation as needed
        ASecondPlayerController* SecondPlayerCharacter = GetWorld()->SpawnActor<ASecondPlayerController>(SecondPlayerCharacterClass, SpawnLocation, SpawnRotation);

        // Check if the second player controller class is valid
        if (SecondPlayerControllerClass && SecondPlayerCharacter)
        {
            // Spawn the second player controller
            ASecond_PlayerController* SecondPlayerController = GetWorld()->SpawnActor<ASecond_PlayerController>(SecondPlayerControllerClass);

            if (SecondPlayerController)
            {
                // Possess the second player character with the second player controller
                SecondPlayerController->Possess(SecondPlayerCharacter);
            }
        }
    }
}
