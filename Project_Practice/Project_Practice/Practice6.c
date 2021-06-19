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
		printf("�� ���� ��?(1 ~ 6) : ");
		scanf_s("%d", &num);
		if (num < 1 || num>6) 
		{
			printf("\n�Է°� ����!(1~6 ���� ���ڸ� �Է�)\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld �� \n", totalElapsedTime);
		prevElaspedTIme = totalElapsedTime - prevElaspedTIme; 
		printf("�ֱ� ��� �ð� : %ld �� \n", prevElaspedTIme);

		decreaseWater(prevElaspedTIme);
		if (cursor[num - 1] <= 0) 
		{
			printf("%d�� �� �ʿ� ����\n", num);
		}
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d�� �� ����\n\n",num);
			cursor[num - 1] += 1;
		}

		if (totalElapsedTime / 20 > level - 1) 
		{
			level++;
			printf("level ��! %d -> %d\n", level - 1, level);
		
			if (level == 5) 
			{
				printf("\n\n�ְ��� �޼�\n");
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
			printf("���!\n");
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
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n",1,2,3,4,5,6);
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