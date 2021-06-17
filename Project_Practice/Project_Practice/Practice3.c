#include <stdio.h>
#include <time.h>

int main(void) 
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	/*printf("랜덤숫자 : %d",num);*/
	printf("랜덤 숫자 생성 완료!");
	int count = 5;
	int num2;

	printf("\n\n ========== 숫자 맞추기 ========== \n");
	while (count > 0)
	{
		printf("남은 기회 %d번\n",count--);
		printf("숫자 입력(1~100):  ");
		scanf_s("%d", &num2);
		if (num2 == num)
				{
					printf("정답!\n");
					break;
				}
		else if (num2 > num)
				{
					printf("DOWN!\n");
				}
		else
				{
					printf("UP!\n");
				}
		if (count == 0) 
		{
			printf("숫자 맞추기 실패!\n");
			printf("정답은 %d", num);
		}

	}
	return 0;
}