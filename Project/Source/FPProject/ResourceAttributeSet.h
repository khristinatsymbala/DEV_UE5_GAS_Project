// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPAttributeSet.h"
#include "ResourceAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API UResourceAttributeSet : public UFPAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Wood;
	ATTRIBUTE_ACCESSORS(UResourceAttributeSet, Wood)
};
