// Fill out your copyright notice in the Description page of Project Settings.


#include "ScoreUserWidget.h"
#include "PingPong/BasePlayerState.h"

void UScoreUserWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();
}

int32 UScoreUserWidget::GetScoreFirstUI() const
{
	const auto Controller = GetOwningPlayerPawn();
	if (!Controller)
		return 0;

	const auto PlayerState = Cast<ABasePlayerState>(Controller->GetPlayerState());



    return PlayerState ? PlayerState->GetFirstScore() : 0;
}

int32 UScoreUserWidget::GetScoreSecondUI() const
{
	const auto Controller = GetOwningPlayerPawn();
	if (!Controller)
		return 0;

	const auto PlayerState = Cast<ABasePlayerState>(Controller->GetPlayerState());



    return PlayerState ? PlayerState->GetSecondScore() : 0;
}