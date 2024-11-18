// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// #include "TPAttributeSet.h"
#include "TPProject/TPAttributeSet.h"
#include "DamageAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TPPROJECT_API UDamageAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly,Category="Damage Attribute")
	FGameplayAttributeData Damage;
	ATTRIBUTE_ACCESSORS(UDamageAttributeSet, Damage)
};
