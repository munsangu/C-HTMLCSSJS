#include<stdio.h>

int smallest(int num) 
{
	int count = 0;
	while (num >= 50000) 
	{
		num -= 50000;
		count++;
	}
	while (num >= 10000)
	{
		num -= 10000;
		count++;
	}
	while (num >= 5000)
	{
		num -= 5000;
		count++;
	}
	while (num >= 1000)
	{
		num -= 1000;
		count++;
	}
	while (num >= 500)
	{
		num -= 500;
		count++;
	}
	while (num >= 100)
	{
		num -= 100;
		count++;
	}
	while (num >= 50)
	{
		num -= 50;
		count++;
	}
	while (num >= 10)
	{
		num -= 10;
		count++;
	}
	return count;
}

int main_basic3(void) 
{
	int num;
	printf("�ݾ� �Է�: ");
	scanf_s("%d", &num);
	printf("�ּҷ� �� �� �ִ� ȭ���� ������ %d��\n", smallest(num));
	return 0;
}