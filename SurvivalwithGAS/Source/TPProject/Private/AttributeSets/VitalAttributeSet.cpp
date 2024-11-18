// Fill out your copyright notice in the Description page of Project Settings.


#include "AttributeSets/VitalAttributeSet.h"

void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if(Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue,0.f,MaxHealth.GetCurrentValue());
	}
	if(Attribute == GetStaminaAttribute())
	{
		NewValue = FMath::Clamp(NewValue,0.f,MaxStamina.GetCurrentValue());
	}
}

void UVitalAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if(Attribute == GetHealthAttribute())
	{
		if(NewValue <= 0.f)
		{
			//можемо відправити меседж що ми померли
			//накладати теги
			GetOwningAbilitySystemComponent()->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Dead")));
		}else if(NewValue <= 25.f)
		{
			// GetOwningAbilitySystemComponent()->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Deadly")));
		}
	}

	if(Attribute == GetHungerAttribute())
	{
		if(NewValue <= 0.f)
		{
			//GetOwningAbilitySystemComponent()->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Hunger.Deadly")));
			//GetOwningAbilitySystemComponent()->AddGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Hunger.Deadly")));
			//включити ефект з'їдання здоров'я через ефект в анріалі
		}
	}
}
