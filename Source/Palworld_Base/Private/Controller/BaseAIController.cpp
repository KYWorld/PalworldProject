// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/BaseAIController.h"
#include "Navigation/CrowdFollowingComponent.h"

#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "Perception/AIPerceptionTypes.h"

#include "BehaviorTree/BlackboardComponent.h"

#include "BaseLibrary/BaseDebugHelper.h"

ABaseAIController::ABaseAIController(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>("PathFollowingComponent"))
{
	//SetDefaultSubobjectClass�� CrowdFollowingComponent ���
	if (UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
	{
		//Debug::Print(TEXT("CrowdFollowingComponent vaild"), FColor::Green);
	}

	//AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISenseConfig_Sight"));

	////������
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;

	////�Ʊ�����
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false;

	////�߸�����
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false;

	////�þ� ����, ����� �Ҵ� �þ߹��� ����
	//AISenseConfig_Sight->SightRadius = 5000.f;
	//AISenseConfig_Sight->LoseSightRadius = 0.f;

	////�ֺ� �þ߰�
	//AISenseConfig_Sight->PeripheralVisionAngleDegrees = 120.f;

	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

	//���� ����
	//AIPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);
	//AIPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());

	SetTeamId(FGenericTeamId(0));
}

ETeamAttitude::Type ABaseAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* PawnCheck = Cast<const APawn>(&Other);
	const IGenericTeamAgentInterface* OtherTeamAgent = Cast<IGenericTeamAgentInterface>(PawnCheck->GetController());
	
	Debug::Print(PawnCheck->GetName());

	//EQS Test Pawn�� �����ϰ� Heroĳ���͸� üũ�ϱ����� ����
	if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() != GetGenericTeamId())
	{
		// �����̵� �ٸ��� ������ ����

		UE_LOG(LogTemp, Warning, TEXT("Hostile"));
		return ETeamAttitude::Hostile;
	}

	// �����̵� ���ٸ� �Ʊ�����
	UE_LOG(LogTemp, Warning, TEXT("Friendly"));
	return ETeamAttitude::Friendly;		
}

void ABaseAIController::BeginPlay()
{
	Super::BeginPlay();

	if (UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
	{
		CrowdFollowingComponent->SetCrowdSimulationState(bDetourCrowdAvoidence ? ECrowdSimulationState::Enabled : ECrowdSimulationState::Disabled);

		switch (bDetourCrowdAvoidenceQuality)
		{
		case 1:
			CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Low);
			break;
		case 2:
			CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Medium);
			break;
		case 3:
			CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::Good);
			break;
		case 4:
			CrowdFollowingComponent->SetCrowdAvoidanceQuality(ECrowdAvoidanceQuality::High);
			break;
		default:
			break;
		}

		//ȸ�Ǳ׷� ����
		CrowdFollowingComponent->SetAvoidanceGroup(1);
		//ȸ�Ǳ׷� �����Ǹ� ȸ���ض�
		CrowdFollowingComponent->SetGroupsToAvoid(1);
		CrowdFollowingComponent->SetCrowdCollisionQueryRange(CollsionQueryRange);
	}
}

void ABaseAIController::SetTeamId(const FGenericTeamId& NewTeamID)
{
	//�� ���̵� �ο�
	SetGenericTeamId(NewTeamID);
}

FGenericTeamId ABaseAIController::GetTeamId()
{
	return GetGenericTeamId();
}
