#include <stdio.h>
#define SIZE 5

struct student 
{
	int number;
	char name[20];
	double grade;
};
int main_basic22(void) 
{
	struct student list[SIZE];

	for (int i = 0; i < SIZE; i++) 
	{
		printf("�й� : ");
		scanf_s("%d", &list[i].number);
		printf("�̸� : ");
		scanf_s("%s", &list[i].name);
		printf("���� : ");
		scanf_s("%lf", &list[i].grade);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("�й� : %d\n",list[i].number);
		printf("�̸� : %s\n", list[i].name);
		printf("���� : %lf\n", list[i].grade);
		printf("\n");
	}

	return 0;
}