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
			printf("프로그램 종료");
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
	printf("\n\n 정답 갯수: %d\n",count);

	return 0;
}

int getNum(int level) 
{
	return rand() % (7*level)+ 1;
}
void showQuiz(int level, int num1, int num2)
{
	printf("\n\n\n ========== %d번째 비밀번호 ==========\n",level);
	printf("\n\t%d x %d = ? \n",num1,num2);
	printf("\n\n\n =====================================\n");
	printf("\n비밀번호 입력(종료: -1)\n");
}
void success() 
{
	printf("\n >> 정답! \n");
}
void fail() 
{
	printf("\n >> 오답! \n");
}
