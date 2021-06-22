#include <stdio.h>

int main_basic9(void) 
{
	int mul[10][10];
	for (int i = 2; i < 10; i++) 
	{
		printf("\n======[%d´Ü]=====\n\n", i);
		for (int j = 1; j < 10; j++) 
		{
			mul[i][j] = i * j;
			printf("%d x %d = %d\n", i, j, mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}