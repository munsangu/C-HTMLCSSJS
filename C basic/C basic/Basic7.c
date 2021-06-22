#include <stdio.h>

int nCr(int n, int r) 
{
	if (r == 0 || r == n) 
	{
		return 1;
	}
	else
	{
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}

int main_basic7(void) 
{
	int n, r;
	printf("조합 숫자 입력 : ");
	scanf_s("%d", &n);
	scanf_s("%d",&r);
	printf("%d",nCr(n, r));
	return 0;
}