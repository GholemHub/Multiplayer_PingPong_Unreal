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

    if (HasAuthority())
    {
        if (!VelocityVector.IsZero())
        {
            const FVector NewLocation = GetPawn()->GetActorLocation() + Velocity * DeltaTime * VelocityVector;
            GetPawn()->SetActorLocation(NewLocation);
        }
    }
}

void ASecond_PlayerController::BeginPlay()
{
    Super::BeginPlay();
   
        SetReplicates(true);
        SetReplicateMovement(true);
 
}

void ASecond_PlayerController::SetupInputComponent()
{
    Super::SetupInputComponent();

    if (!InputComponent)
        return;

    InputComponent->BindAxis("MoveYaw", this, &ASecond_PlayerController::MoveYaw);
}

void ASecond_PlayerController::MoveYaw(float Amount)
{
    
        VelocityVector.X = Amount;
      //ServerMoveYaw(Amount);
}

//void ASecond_PlayerController::ServerMoveYaw_Implementation(float Amount)
//{
//        MoveYaw(Amount);
//}
//
//bool ASecond_PlayerController::ServerMoveYaw_Validate(float Amount)
//{
//    return true;
//}
