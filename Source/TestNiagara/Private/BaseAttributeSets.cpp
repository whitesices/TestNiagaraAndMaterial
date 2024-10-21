// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAttributeSets.h"
#include "Net/UnrealNetwork.h"

//作用类似变量的Repnotify.进行网络复制用的
void UBaseAttributeSets::OnRep_Health(const FGameplayAttributeData& OldHealth)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY( UBaseAttributeSets , Health , OldHealth );

}

//获取属性的生民周期
void UBaseAttributeSets::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	//网络方式传递信息
	DOREPLIFETIME_CONDITION_NOTIFY( UBaseAttributeSets , Health , COND_None , REPNOTIFY_Always );
	
}
