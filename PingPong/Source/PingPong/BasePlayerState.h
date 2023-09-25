// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class PINGPONG_API ABasePlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "PlayerScore")
	void AddFirstScore() { ++FirstScore; }
	UFUNCTION(BlueprintCallable, Category = "PlayerScore")
	int32 GetFirstScore() const { return FirstScore; }
	UFUNCTION(BlueprintCallable, Category = "PlayerScore")
	void AddSecondScore() { ++SecondScore; }
	UFUNCTION(BlueprintCallable, Category = "PlayerScore")
	int32 GetSecondScore() const { return SecondScore; }
	
private:

	int32 FirstScore = 0;
	int32 SecondScore = 0;
};
