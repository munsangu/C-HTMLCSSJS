#include <stdio.h>
int hour;
int minute;
int minuteAdd;

void counter() 
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
}
int main_basic2(void)
{
	printf("시 입력: ");
	scanf_s("%d", &hour);
	printf("분 입력: ");
	scanf_s("%d", &minute);
	printf("더할 분 입력: ");
	scanf_s("%d", &minuteAdd);
	counter();
	printf("더 해진 시간 -> %d시 %d분\n",hour,minute);
	return 0;
}