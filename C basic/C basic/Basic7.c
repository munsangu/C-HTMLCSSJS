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
	printf("���� ���� �Է� : ");
	scanf_s("%d", &n);
	scanf_s("%d",&r);
	printf("%d",nCr(n, r));
	return 0;
}