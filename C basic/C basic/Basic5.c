#include <stdio.h>


int print(int a) 
{
	for (int i = 0; i < a; i++) 
	{
		for (int j = 0; j <= i; j++) 
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}


int main_basic5(void) 
{
	int a;
	printf("숫자 입력 : ");
	scanf_s("%d", &a);
	print(a);

	return 0;
}