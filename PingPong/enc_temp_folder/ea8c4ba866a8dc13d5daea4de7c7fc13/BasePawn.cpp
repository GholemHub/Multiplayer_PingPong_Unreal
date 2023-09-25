#include "BasePawn.h"
#include "Net/UnrealNetwork.h"
#include "Components/InputComponent.h"
// Fill out your copyright notice in the Description page of Project Settings.
// 
// Sets default values
ABasePawn::ABasePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");

	SetRootComponent(BoxCollisionComponent);

	SetRootComponent(SceneComponent);
}

// Called when the game starts or when spawned
void ABasePawn::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())
	{
		SetReplicates(true);
		SetReplicateMovement(true);
	}
}

void ABasePawn::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ABasePawn, VelocityVector);
}

void ABasePawn::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Check if the Other actor or component is something you want to interact with
	if (Other && Other != this)
	{
		// Stop the Pawn's movement when it collides
		VelocityVector = FVector::ZeroVector;
	}
}


// Called every frame
void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!VelocityVector.IsZero()) 
	{
		const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
		if (NewLocation.Y < 550 && NewLocation.Y > -300) {
			SetActorLocation(NewLocation);
		}
		
	}

}

// Called to bind functionality to input
void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UE_LOG(LogTemp, Warning, TEXT("Begin"));
	PlayerInputComponent->BindAxis("MoveYaw", this, &ABasePawn::MoveYaw);
}

bool ABasePawn::Server_MoveYaw_Validate(float Amount)
{
	return true;
}

void ABasePawn::Server_MoveYaw_Implementation(float Amount)
{
		VelocityVector.Y = Amount;
		//UE_LOG(LogTemp, Warning, TEXT("Server_MoveYaw_Implementation::%f"), Amount)
}

void ABasePawn::MoveYaw(float Amount)
{
	VelocityVector.Y = Amount; // Update on the owning client
	Server_MoveYaw(Amount);
	
}

