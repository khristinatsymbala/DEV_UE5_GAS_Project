// Fill out your copyright notice in the Description page of Project Settings.


#include "FPPlayerState.h"
#include "AbilitySystemComponent.h"

AFPPlayerState::AFPPlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System Component"));
}
