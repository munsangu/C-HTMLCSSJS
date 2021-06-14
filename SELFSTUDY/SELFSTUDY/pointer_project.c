#include<stdio.h>
#include<time.h>

// 물고기 6마리
// 이들은 어항에 살고있는데, 사막
// 사막이 너무 덥고 건조해서 물이 아주 빨리 증발
// 물이 다 증발하기 전에 부지런히 어항에 물을 주어 물고기 살리기
// 물고기는 시간이 지날수록 점점 커짐
int level;
int arrayFish[6];
int * cursor;

void initDate();
void printfFishes();
void decreaseWater();

int main(void) 
{
	long startTime = 0; // 게임 시작 시간
	long totalElapsedTime = 0; // 총 경과시간
	long prevElapsedTime = 0; // 직전 경과시간(최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initDate();

	cursor = arrayFish; // cursor[0],,cursor[1],,

	startTime = clock(); // 현재 시간을 1000분의 1초 단위로 반환
	while (1)
	{
		printfFishes();
		printf("몇 번 어항에 물을 줌?");
		scanf_s("%d", &num);

		// 입력값 체크
		if (num < 1 || num >6)
		{
			printf("\n입력값이 잘못됨\n");
			continue;
		}
		// 총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간: %ld 초\n", totalElapsedTime);
		// 직전에 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("최근 경과 시간: %ld 초\n", prevElapsedTime);	
	
		// 어항의 물 증발
		decreaseWater(prevElapsedTime);
		
		// 사용자가 입력한 어항에 물을 줌
		// 1. 어항의 물이 0이면? 물을 주지 않음 
		if (cursor[num - 1] <= 0) 
		{
			printf("%d번 물고기는 이미 죽음... 물 필요 없음\n",num);
		}
		// 2. 어항의 물이 0이 아니면? 물을 줌 100을 넘지 않게
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d번 어항에 물을 줌\n\n",num);
			cursor[num - 1]+=1;
		}
		// 레벨업을 할 건지 확인(레벨업은 20초마다)
		if (totalElapsedTime / 20 > level - 1) 
		{
			level++;
			printf(" *** 축 레벨 업! 기존 %d 레벨에서 %d레벨로 업그레이드 ***\n\n",level-1,level);

			if (level == 5) 
			{
				printf("\n\n축하, 최고 레벨 달성, 게임종료\n\n");
				exit(0);
			}
		}
	

			// 모든 물고기가 죽었는지 확인
		if (checkFishAlive() == 0)
		{
			// 모든 물고기 사망
			printf("모든 물고기 사망\n");
			exit(0);
		}
		else
		{
			// 최소 한마리 이상 생존
			printf("물고기 생존\n");
		}
		prevElapsedTime = totalElapsedTime;

		// 10초 -> 15초(5초 : prevElapsedTime -> 15초) -> 25초 (10초...>?)

	}


	return 0;
}

void initDate()
{
		level = 1; //게임레벨(1~5)
		for (int i = 0; i < 6; i++)
		{
			arrayFish[i] = 100; // 어항의 물 높이(0~100)
		}
}
void printfFishes() 
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) 
	{
		printf(" %4d ",arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime) 
{
	for (int i = 0; i < 6; i++) 
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);//3 : 난이도 조절을 위한 값
		if (arrayFish[i] < 0) 
		{
			arrayFish[i] = 0;
		}
	}
}
int checkFishAlive() 
{
	for (int i = 0; i < 6; i++) 
	{
		if (arrayFish[i] > 0) 
		{
			return 1;
		}
	}
	return 0;
}
