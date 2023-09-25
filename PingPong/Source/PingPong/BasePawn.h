#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "BasePawn.generated.h"

class UBoxComponent;

UCLASS()
class PINGPONG_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	ABasePawn();

	UPROPERTY(VisibleAnywhere)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		float Velocity = 300.f;

	UPROPERTY(EditAnywhere)
		UBoxComponent* BoxCollisionComponent;

protected:
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	virtual void NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit) override;

	void MoveYaw(float Amount);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_MoveYaw(float Amount);

	bool Server_MoveYaw_Validate(float Amount);
	void Server_MoveYaw_Implementation(float Amount);

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(Replicated)
		FVector VelocityVector = FVector::ZeroVector;
};
