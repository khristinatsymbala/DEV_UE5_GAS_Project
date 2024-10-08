// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "FPPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API AFPPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AFPPlayerState();
	
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override { return AbilitySystemComponent; }

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UAbilitySystemComponent* AbilitySystemComponent;
};
