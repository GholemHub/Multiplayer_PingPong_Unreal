// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "BasePawn.generated.h"

UCLASS()
class PINGPONG_API ABasePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABasePawn();

	UPROPERTY(VisibleAnywhere)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		float Velocity = 300.f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const override;

	void MoveYaw(float Amount);

	UFUNCTION(Server, Reliable, WithValidation)
		void Server_MoveYaw(float Amount);

	bool Server_MoveYaw_Validate(float Amount);
	void Server_MoveYaw_Implementation(float Amount);
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	

private:
	UPROPERTY(Replicated)
	FVector VelocityVector = FVector::ZeroVector;

	
};
