// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BasePawn.h"
#include "SecondPlayerPawn.h"
#include "PingPongGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class PINGPONG_API APingPongGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	APingPongGameModeBase();

	void PostLogin(APlayerController* NewPlayer) override;
	virtual void StartPlay() override;
	void SpawnSecondPlayer();
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
		TSubclassOf<ASecondPlayerController> SecondPlayerCharacterClass;

	// Reference to the second player controller class
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
		TSubclassOf<APlayerController> SecondPlayerControllerClass;
};
