// Fill out your copyright notice in the Description page of Project Settings.

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

		ASecond_PlayerController();
protected:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(VisibleAnywhere)
		USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere)
		float Velocity = 300.f;

	virtual void SetupInputComponent() override;
	//virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	FVector VelocityVector = FVector::ZeroVector;
	void MoveYaw(float Amount);

};
