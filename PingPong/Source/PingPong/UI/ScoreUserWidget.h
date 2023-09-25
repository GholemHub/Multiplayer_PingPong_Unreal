// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScoreUserWidget.generated.h"

class UTextBlock;

/**
 * 
 */
UCLASS()
class PINGPONG_API UScoreUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(meta = (BindWidget))
		UTextBlock* LevelNameTextBlock;
	virtual void NativeOnInitialized() override;

	UFUNCTION(BlueprintCallable, Category = "UI")
		int32 GetScoreFirstUI() const;
	UFUNCTION(BlueprintCallable, Category = "UI")
		int32 GetScoreSecondUI() const;
};
