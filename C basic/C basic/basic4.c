#include <stdio.h>

int getDays(int mon, int day)
{
	int sum = 0;
	for (int i = 1; i < mon; i++) 
	{
		if (i == 2) 
		{
			sum += 28; //윤달 없음(가정)
		}
		else if (i % 2 == 0) 
		{
			sum += 30;
		}
		else 
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void) 
{
	int month, day;
	printf("월 일 입력: ");
	scanf_s("%d %d", &month, &day);
	printf("1월 1일부터 해당 날짜까지의 차이는 %d일\n",getDays(month,day));
	return 0;
}