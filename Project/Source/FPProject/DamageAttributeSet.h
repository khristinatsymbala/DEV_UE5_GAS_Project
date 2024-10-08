// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPAttributeSet.h"
#include "DamageAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API UDamageAttributeSet : public UFPAttributeSet
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage)
};
