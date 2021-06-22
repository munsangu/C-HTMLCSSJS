#include <stdio.h>


void print2(int i) 
{
	if (i == 0) 
	{
		return;
	}
	else
	{
		printf("문자열 출력\n");
		print2(i - 1);
	}
}

int main_basic6(void) 
{
	int b;
	printf("숫자 입력 : ");
	scanf_s("%d", &b);
	print2(b);
	return 0;
}