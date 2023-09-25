#include "BasePawn.h"
#include "Net/UnrealNetwork.h"
#include "Components/InputComponent.h"

ABasePawn::ABasePawn()
{
	PrimaryActorTick.bCanEverTick = true;
	SceneComponent = CreateDefaultSubobject<USceneComponent>("SceneComponent");

	SetRootComponent(BoxCollisionComponent);

	SetRootComponent(SceneComponent);
}

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

	if (Other && Other != this)
	{
		VelocityVector = FVector::ZeroVector;
	}
}

void ABasePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!VelocityVector.IsZero())
	{
		const FVector NewLocation = GetActorLocation() + Velocity * DeltaTime * VelocityVector;
		if (NewLocation.Y < 400 && NewLocation.Y > -400) {
			SetActorLocation(NewLocation);
		}
	}
}

void ABasePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveYaw", this, &ABasePawn::MoveYaw);
}

bool ABasePawn::Server_MoveYaw_Validate(float Amount)
{
	return true;
}

void ABasePawn::Server_MoveYaw_Implementation(float Amount)
{
	VelocityVector.Y = Amount;
}

void ABasePawn::MoveYaw(float Amount)
{
	VelocityVector.Y = Amount;
	Server_MoveYaw(Amount);
}
