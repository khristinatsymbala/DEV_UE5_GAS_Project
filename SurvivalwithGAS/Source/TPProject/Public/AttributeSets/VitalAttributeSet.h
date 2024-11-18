// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// #include "TPAttributeSet.h"
#include "TPProject/TPAttributeSet.h"
#include "VitalAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TPPROJECT_API UVitalAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;
	
public:
	
	UPROPERTY(BlueprintReadOnly,Category="Vital Attribute")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Health)

	UPROPERTY(BlueprintReadOnly,Category="Vital Attribute")
	FGameplayAttributeData MaxHealth;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxHealth)
	
	UPROPERTY(BlueprintReadOnly,Category="Vital Attribute")
	FGameplayAttributeData Stamina;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Stamina)

	UPROPERTY(BlueprintReadOnly,Category="Vital Attribute")
	FGameplayAttributeData MaxStamina;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, MaxStamina)

	UPROPERTY(BlueprintReadOnly,Category="Vital Attribute")
	FGameplayAttributeData Hunger;
	ATTRIBUTE_ACCESSORS(UVitalAttributeSet, Hunger)
	
	
};
