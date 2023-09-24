// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Controller.h"
#include "SecondPlayerPawn.generated.h"

/**
 * 
 */
UCLASS()
class PINGPONG_API ASecondPlayerController : public APawn
{
	GENERATED_BODY()
public:
	ASecondPlayerController();
	
	UPROPERTY(VisibleAnywhere)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		float Velocity = 300.f;


	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	virtual void Tick(float DeltaTime) override;
	virtual void BeginPlay() override;

private:
	FVector VelocityVector = FVector::ZeroVector;
	void MoveYaw(float Amount);

	
};
