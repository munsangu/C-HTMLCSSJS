#include <stdio.h>
#include<time.h>


int level;
int arrayFish[6];
int* cursor;
void initData();
void printFishes();
void decreaseWater(long time);
int checkFishAlive();
int main_practice6(void) 
{
	srand(time(NULL));

	long startTime = 0;
	long totalElapsedTime = 0;
	long prevElaspedTIme = 0;

	int num;
	initData();

	cursor = arrayFish;

	startTime = clock();
	while (1)
	{
		printFishes();
		printf("몇 번에 줌?(1 ~ 6) : ");
		scanf_s("%d", &num);
		if (num < 1 || num>6) 
		{
			printf("\n입력값 오류!(1~6 사이 숫자만 입력)\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초 \n", totalElapsedTime);
		prevElaspedTIme = totalElapsedTime - prevElaspedTIme; 
		printf("최근 경과 시간 : %ld 초 \n", prevElaspedTIme);

		decreaseWater(prevElaspedTIme);
		if (cursor[num - 1] <= 0) 
		{
			printf("%d번 물 필요 없음\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d번 물 보충\n\n",num);
			cursor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) 
		{
			level++;
			printf("level 업! %d -> %d\n", level - 1, level);
		
			if (level == 5) 
			{
				printf("\n\n최고레벨 달성\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0)
		{
			printf("Game Over!\n");
			exit(0);
		}
		else
		{
			printf("계속!\n");
		}
		prevElaspedTIme = totalElapsedTime;
	}
	return 0;
}

void initData() 
{
	level = 1;
	for (int i = 0; i < 6; i++) 
	{
		arrayFish[i] = 100;
	}
}
void printFishes() 
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n",1,2,3,4,5,6);
	for (int i = 0; i < 6; i++) 
	{
		printf("  %3d ",arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long time) 
{
	for (int i = 0; i < 6; i++) 
	{
		arrayFish[i] -= (level * 3 * (int)time);
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
			return 1;
	}
	return 0;
}