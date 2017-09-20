// Fill out your copyright notice in the Description page of Project Settings.

#include "AITasks.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UAITasks::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BlackBoard = OwnerComp.GetBlackboardComponent();

	int32 Index = BlackBoard->GetValueAsInt(IndexKey.SelectedKeyName);

	UE_LOG(LogTemp, Warning, TEXT("Next black Board index: %i"), Index)

	return EBTNodeResult::Succeeded;
}


