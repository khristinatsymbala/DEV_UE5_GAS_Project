// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FPAttributeSet.h"
#include "TestAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class FPPROJECT_API UTestAttributeSet : public UFPAttributeSet
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	FGameplayAttributeData TestAttribute;
	ATTRIBUTE_ACCESSORS(UTestAttributeSet, TestAttribute)
};
