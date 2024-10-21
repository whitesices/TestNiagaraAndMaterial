// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
//引入技能系统组件头文件
#include "AbilitySystemComponent.h"
#include "BaseAttributeSets.generated.h"



//class UAbilitySystemComponent;


//引入设置获取属性的宏
#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
 	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class TESTNIAGARA_API UBaseAttributeSets : public UAttributeSet
{
	GENERATED_BODY()

public:
	//声明相应的属性变量
	UPROPERTY( EditAnywhere , BlueprintReadOnly , Category = "BaseAttributes" , ReplicatedUsing = OnRep_Health )
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UBaseAttributeSets , Health)

	UFUNCTION()
	virtual void OnRep_Health(const FGameplayAttributeData& OldHealth);

	virtual void GetLifetimeReplicatedProps(TArray< class FLifetimeProperty >& OutLifetimeProps) const override;
};
