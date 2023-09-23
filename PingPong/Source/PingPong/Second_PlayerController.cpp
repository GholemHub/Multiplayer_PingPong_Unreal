// Fill out your copyright notice in the Description page of Project Settings.


#include "Second_PlayerController.h"

ASecond_PlayerController::ASecond_PlayerController()
{
    PrimaryActorTick.bCanEverTick = true;
    SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");

    SetRootComponent(SceneComponent);
}

void ASecond_PlayerController::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    UE_LOG(LogTemp, Error, TEXT("Tick()"));

    if (!VelocityVector.IsZero())
    {
        const FVector NewLocation = GetPawn()->GetActorLocation() + Velocity * DeltaTime * VelocityVector;
        GetPawn()->SetActorLocation(NewLocation);
        UE_LOG(LogTemp, Error, TEXT("Move"));
    }
}

void ASecond_PlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();
    UE_LOG(LogTemp, Error, TEXT("SetupInputComponent()1"));
    // Bind input axes for the second player
    
    if (!InputComponent)
        return;

        UE_LOG(LogTemp, Error, TEXT("SetupInputComponent()"));
        InputComponent->BindAxis("MoveYaw", this, &ASecond_PlayerController::MoveYaw);
    
}

void ASecond_PlayerController::MoveYaw(float Amount)
{
    UE_LOG(LogTemp, Error, TEXT("MoveYaw(float Amount) %f"), Amount);
    VelocityVector.X = Amount;
}
