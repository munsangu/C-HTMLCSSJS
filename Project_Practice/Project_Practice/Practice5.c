#include <stdio.h>	
#include <time.h>	

int main_practice5(void) 
{
	srand(time(NULL));
	printf("\n\n === 약 찾기 ===\n\n");
	int answer;
	int treatment = rand() % 4;

	int countShowBottle = 0;
	int prevShowBottle = 0;

	for (int i = 1; i <= 3; i++) 
	{
		int bottle[4] = { 0,0,0,0 };
		do 
		{
			countShowBottle = rand() % 2 + 2;
		} 		while (countShowBottle == prevShowBottle);
		
		int isincluded = 0;
		printf("> %d번째 시도: ",i);

		for (int j = 0; j < countShowBottle; j++) 
		{
			int randBottle = rand() % 4;
			if (bottle[randBottle] == 0) 
			{
				bottle[randBottle] = 1;
				if (randBottle == treatment) 
				{
					isincluded = 1;
				}
			}
			else
			{
				j--;
			}
		}

		for (int k = 0; k < 4; k++) 
		{
			if (bottle[k] == 1) 
			{
				printf("%d", k + 1);
			}
		}
		printf("물약 사용 \n\n");

		if (isincluded == 1) 
		{
			printf(" >> 성공! \n");
		}
		else
		{
			printf(">> 실패!\n");
		}

		printf("\n...계속 하려면 아무키나 누르세요...");
		getchar();
	}
		printf("\n\n 약은 몇 번??\n");
		scanf_s("%d", &answer);
		if (answer == treatment+1) 
		{
			printf("\n 정답!!!\n");
		}
		else
		{
			printf("\n 실패!!! 정답은 %d! \n",treatment+1);
		}
		
	
	return 0;
}