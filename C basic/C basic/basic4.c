#include <stdio.h>

int getDays(int mon, int day)
{
	int sum = 0;
	for (int i = 1; i < mon; i++) 
	{
		if (i == 2) 
		{
			sum += 28; //���� ����(����)
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

int main_basic4(void) 
{
	int month, day;
	printf("�� �� �Է�: ");
	scanf_s("%d %d", &month, &day);
	printf("1�� 1�Ϻ��� �ش� ��¥������ ���̴� %d��\n",getDays(month,day));
	return 0;
}