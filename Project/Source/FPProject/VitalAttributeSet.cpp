// Fill out your copyright notice in the Description page of Project Settings.


#include "VitalAttributeSet.h"
//обмежувач нових значень атрибута
void UVitalAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	if(Attribute == GetHealthAttribute())
	{
		NewValue = FMath::Clamp(NewValue,0.f,MaxHealth.GetCurrentValue());
	}
}
//місце для відправки меседжів
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
		}
	}

	if(Attribute == GetHungerAttribute())
	{
		if(NewValue <= 0.f)
		{
			// як тут правильно викликати тут додавання тегу на цьому моменті?
			// чи тут взагалі інша логіка?
			//GetOwningAbilitySystemComponent()->AddLooseGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Hunger.Deadly")));
			//GetOwningAbilitySystemComponent()->AddGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Hunger.Deadly")));
		}else if(NewValue < 25.f)
		{
			//GetOwningAbilitySystemComponent()->AddGameplayTag(FGameplayTag::RequestGameplayTag(FName("Status.Hunger.Low")));
		}
	}
}
