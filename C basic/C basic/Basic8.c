#include <stdio.h>
#include <limits.h>
int main_basic8(void)
{
	int max, min, index;
	int array[5] = {0,0,0,0,0};
	max = 0;
	index = 0;
	printf("다섯 개의 숫자 입력: ");
	for (int i = 0; i < 5; i++) 
	{
		scanf_s("%d", &array[i]);
		if (max < array[i]) 
		{
			max = array[i];
			index = i;
		}
	}
	min = INT_MAX;
	printf("MAX = %d , 위치는 %d번째\n", max,index+1);
	for (int i = 0; i < 5; i++)
	{
		if (min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	printf("MIN = %d , 위치는 %d번째\n", min, index + 1);

	return 0;
}