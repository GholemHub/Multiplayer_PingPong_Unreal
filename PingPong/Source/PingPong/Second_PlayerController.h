#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Second_PlayerController.generated.h"

/**
 *
 */
UCLASS()
class PINGPONG_API ASecond_PlayerController : public APlayerController
{
    GENERATED_BODY()

public:
    ASecond_PlayerController();

protected:
    virtual void Tick(float DeltaTime) override;
    virtual void BeginPlay() override;

    UPROPERTY(VisibleAnywhere)
        USceneComponent* SceneComponent;

    UPROPERTY(EditAnywhere)
        float Velocity = 300.f;

    virtual void SetupInputComponent() override;

    /*UFUNCTION(Server, Reliable, WithValidation)
        void ServerMoveYaw(float Amount);

    bool ServerMoveYaw_Validate(float Amount);*/

    FVector VelocityVector = FVector::ZeroVector;

public:
    void MoveYaw(float Amount);
};