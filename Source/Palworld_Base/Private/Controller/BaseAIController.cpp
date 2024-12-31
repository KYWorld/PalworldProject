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
	//SetDefaultSubobjectClass로 CrowdFollowingComponent 사용
	if (UCrowdFollowingComponent* CrowdFollowingComponent = Cast<UCrowdFollowingComponent>(GetPathFollowingComponent()))
	{
		//Debug::Print(TEXT("CrowdFollowingComponent vaild"), FColor::Green);
	}

	//AISenseConfig_Sight = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("AISenseConfig_Sight"));

	////적감지
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectEnemies = true;

	////아군감지
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectFriendlies = false;

	////중립감지
	//AISenseConfig_Sight->DetectionByAffiliation.bDetectNeutrals = false;

	////시야 설정, 대상을 잃는 시야범위 설정
	//AISenseConfig_Sight->SightRadius = 5000.f;
	//AISenseConfig_Sight->LoseSightRadius = 0.f;

	////주변 시야각
	//AISenseConfig_Sight->PeripheralVisionAngleDegrees = 120.f;

	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerceptionComponent"));

	//센서 설정
	//AIPerceptionComponent->ConfigureSense(*AISenseConfig_Sight);
	//AIPerceptionComponent->SetDominantSense(UAISenseConfig_Sight::StaticClass());

	SetGenericTeamId(FGenericTeamId(255));
}

ETeamAttitude::Type ABaseAIController::GetTeamAttitudeTowards(const AActor& Other) const
{
	const APawn* PawnCheck = Cast<const APawn>(&Other);
	const IGenericTeamAgentInterface* OtherTeamAgent = Cast<IGenericTeamAgentInterface>(PawnCheck->GetController());
	
	if (GetGenericTeamId() == FGenericTeamId(255))
	{
		return ETeamAttitude::Neutral;
	}

	if (OtherTeamAgent)
	{
		FGenericTeamId OtherTeamId = OtherTeamAgent->GetGenericTeamId();


		Debug::Print(TEXT("My"), GetGenericTeamId());
		Debug::Print(TEXT("Other"), OtherTeamId);

		if (OtherTeamId == GetGenericTeamId())
		{
			return ETeamAttitude::Friendly; // 같은 팀이면 우호적
		}
		else if (OtherTeamId == FGenericTeamId(255)) // ID = 255이면 중립
		{
			return ETeamAttitude::Neutral;
		}
		else
		{
			return ETeamAttitude::Hostile; // 나머지는 적대적
		}
	}
	return ETeamAttitude::Neutral; // 기본값은 중립

	////EQS Test Pawn을 제외하고 Hero캐릭터만 체크하기위한 조건
	//if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() != GetGenericTeamId())
	//{
	//	// 팀아이디가 다르면 적으로 변경
	//	return ETeamAttitude::Hostile;
	//}

	//// 팀아이디가 같다면 아군으로
	//if (OtherTeamAgent && OtherTeamAgent->GetGenericTeamId() == GetGenericTeamId())
	//{
	//	return ETeamAttitude::Friendly;
	//}	

	//return ETeamAttitude::Neutral;
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

		//회피그룹 설정
		CrowdFollowingComponent->SetAvoidanceGroup(1);
		//회피그룹 설정되면 회피해라
		CrowdFollowingComponent->SetGroupsToAvoid(1);
		CrowdFollowingComponent->SetCrowdCollisionQueryRange(CollsionQueryRange);
	}
}

void ABaseAIController::SetTeamId(const FGenericTeamId& NewTeamID)
{
	//팀 아이디 부여
	SetGenericTeamId(NewTeamID);
}

FGenericTeamId ABaseAIController::GetTeamId()
{
	return GetGenericTeamId();
}
