// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
// #include "TPAttributeSet.h"
#include "TPProject/TPAttributeSet.h"
#include "ResourceAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class TPPROJECT_API UResourceAttributeSet : public UTPAttributeSet
{
	GENERATED_BODY()
public:
	//Craft Resources
	
	UPROPERTY(BlueprintReadOnly,Category="C-Resources Attribute")
	FGameplayAttributeData Wood;
	ATTRIBUTE_ACCESSORS(UResourceAttributeSet, Wood)

	UPROPERTY(BlueprintReadOnly,Category="C-Resources Attribute")
	FGameplayAttributeData Rock;
	ATTRIBUTE_ACCESSORS(UResourceAttributeSet, Rock)
	
	//Eatables  Resources
	UPROPERTY(BlueprintReadOnly,Category="E-Resources Attribute")
	FGameplayAttributeData Apple;
	ATTRIBUTE_ACCESSORS(UResourceAttributeSet, Apple)

	UPROPERTY(BlueprintReadOnly,Category="E-Resources Attribute")
	FGameplayAttributeData Pumpkin;
	ATTRIBUTE_ACCESSORS(UResourceAttributeSet, Pumpkin)
};
