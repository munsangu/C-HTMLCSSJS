#include <stdio.h>
#include<stdlib.h>

struct student
{
	int num;
	char name[10];
	double grade;
};

int main_basic18(void)
{
	struct student s;
	printf("학번 : ");
	scanf_s("%d", &s.num);
	printf("이름 : ");
	scanf_s("%s", s.name);
	printf("학점 : ");
	scanf_s("%.lf", &s.grade);
	printf("학번: %d\n", s.num);
	printf("이름: %s\n", s.name);
	printf("학점: %.1f\n", s.grade);
	return 0;
}