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
		printf("학번 : ");
		scanf_s("%d", &list[i].number);
		printf("이름 : ");
		scanf_s("%s", &list[i].name);
		printf("학점 : ");
		scanf_s("%lf", &list[i].grade);
	}
	for (int i = 0; i < SIZE; i++)
	{
		printf("학번 : %d\n",list[i].number);
		printf("이름 : %s\n", list[i].name);
		printf("학점 : %lf\n", list[i].grade);
		printf("\n");
	}

	return 0;
}