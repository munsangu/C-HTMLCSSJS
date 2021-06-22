#include <stdio.h>

int main_basic10(void)
{
	int score[5][2];
	int total[2] = { 0,0 };
	for (int i = 0; i < 5; i++) 
	{
		printf("%d번 학생의 수학, 영어 점수 입력: ", i + 1);
		scanf_s("%d %d", &score[i][0], &score[i][1]);
	}
	for (int i = 0; i < 5; i++) 
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	printf("\n\n 5명의 수학 점수 합계: %d점\n", total[0]);
	printf("\n\n 5명의 영어 점수 합계: %d점\n", total[1]);
	return 0;
}