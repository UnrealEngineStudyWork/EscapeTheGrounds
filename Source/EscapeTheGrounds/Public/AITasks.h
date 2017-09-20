// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "AITasks.generated.h"

/**
 * 
 */
UCLASS()
class ESCAPETHEGROUNDS_API UAITasks : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
protected:
	UPROPERTY(EditAnywhere, Category = "BlackBoard")
	struct FBlackboardKeySelector IndexKey;
	
	
};
