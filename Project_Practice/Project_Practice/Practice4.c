#include <stdio.h>	
#include<time.h>

int getNum(int level);
void showQuiz(int level, int num1, int num2);
void success();
void fail();

int main_practice4(void) 
{
	srand(time(NULL));
	int count = 0;
	for (int i = 1; i <= 5; i++) 
	{
		int num1 = getNum(i);
		int num2 = getNum(i);
		showQuiz(i,num1,num2);
		int answer = -1;
		scanf_s("%d", &answer);
		if (answer == -1) 
		{
			printf("���α׷� ����");
			exit(0);
		}
		else if (answer == num1 * num2) 
		{
			success();
			count++;
		}
		else
		{
			fail();			
		}
	}
	printf("\n\n ���� ����: %d\n",count);

	return 0;
}

int getNum(int level) 
{
	return rand() % (7*level)+ 1;
}
void showQuiz(int level, int num1, int num2)
{
	printf("\n\n\n ========== %d��° ��й�ȣ ==========\n",level);
	printf("\n\t%d x %d = ? \n",num1,num2);
	printf("\n\n\n =====================================\n");
	printf("\n��й�ȣ �Է�(����: -1)\n");
}
void success() 
{
	printf("\n >> ����! \n");
}
void fail() 
{
	printf("\n >> ����! \n");
}
