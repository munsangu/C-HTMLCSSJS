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
	printf("�� �Է�: ");
	scanf_s("%d", &hour);
	printf("�� �Է�: ");
	scanf_s("%d", &minute);
	printf("���� �� �Է�: ");
	scanf_s("%d", &minuteAdd);
	counter();
	printf("�� ���� �ð� -> %d�� %d��\n",hour,minute);
	return 0;
}