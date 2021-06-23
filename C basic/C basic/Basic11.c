#include <stdio.h>

void swap(int *x,int *y) 
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main_basic11(void) 
{
	int a, b;
	printf("두 수 입력: ");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	swap(&a,&b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}