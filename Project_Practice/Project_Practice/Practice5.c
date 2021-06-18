#include <stdio.h>	
#include <time.h>	

int main(void) 
{
	srand(time(NULL));
	printf("\n\n === �� ã�� ===\n\n");
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
		printf("> %d��° �õ�: ",i);

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
		printf("���� ��� \n\n");

		if (isincluded == 1) 
		{
			printf(" >> ����! \n");
		}
		else
		{
			printf(">> ����!\n");
		}

		printf("\n...��� �Ϸ��� �ƹ�Ű�� ��������...");
		getchar();
	}
		printf("\n\n ���� �� ��??\n");
		scanf_s("%d", &answer);
		if (answer == treatment+1) 
		{
			printf("\n ����!!!\n");
		}
		else
		{
			printf("\n ����!!! ������ %d! \n",treatment+1);
		}
		
	
	return 0;
}