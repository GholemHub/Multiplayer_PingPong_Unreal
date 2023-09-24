#include "SecondPlayerPawn.h"
// Fill out your copyright notice in the Description page of Project Settings.


ASecondPlayerController::ASecondPlayerController()
{
    PrimaryActorTick.bCanEverTick = true;
    SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");

    SetRootComponent(SceneComponent);
    
}

void ASecondPlayerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    // Bind input axes for the second player
    UE_LOG(LogTemp, Warning, TEXT("Second"));
    PlayerInputComponent->BindAxis("MoveYaw", this, &ASecondPlayerController::MoveYaw);

}



void ASecondPlayerController::Tick(float DeltaTime)
{
    UE_LOG(LogTemp, Warning, TEXT("Second"));
    if (!VelocityVector.IsZero())
    {
        const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
        SetActorLocation(NewLocation);
    }

}

void ASecondPlayerController::BeginPlay()
{
    Super::BeginPlay();
    
        SetReplicates(true);
        SetReplicateMovement(true);
    
}

void ASecondPlayerController::MoveYaw(float Amount)
{
    UE_LOG(LogTemp, Warning, TEXT("Begin2 %f"), Amount);
    VelocityVector.X = Amount;
}
