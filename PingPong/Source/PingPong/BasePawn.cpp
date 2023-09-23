#include "BasePawn.h"
#include "Components/InputComponent.h"
// Fill out your copyright notice in the Description page of Project Settings.
// 
// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");

	SetRootComponent(SceneComponent);
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!VelocityVector.IsZero()) 
	{
		const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
		SetActorLocation(NewLocation);
	}

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UE_LOG(LogTemp, Warning, TEXT("Begin"));
	PlayerInputComponent->BindAxis("MoveYaw", this, &ABasePawn::MoveYaw);
	

}

void ABasePawn::MoveYaw(float Amount)
{
	UE_LOG(LogTemp, Warning, TEXT("Begin2 %f"), Amount);
	VelocityVector.X = Amount;
}

