#include <stdio.h>

int main_basic10(void)
{
	int score[5][2];
	int total[2] = { 0,0 };
	for (int i = 0; i < 5; i++) 
	{
		printf("%d�� �л��� ����, ���� ���� �Է�: ", i + 1);
		scanf_s("%d %d", &score[i][0], &score[i][1]);
	}
	for (int i = 0; i < 5; i++) 
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	printf("\n\n 5���� ���� ���� �հ�: %d��\n", total[0]);
	printf("\n\n 5���� ���� ���� �հ�: %d��\n", total[1]);
	return 0;
}