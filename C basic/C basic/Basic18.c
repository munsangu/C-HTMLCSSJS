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
	printf("�й� : ");
	scanf_s("%d", &s.num);
	printf("�̸� : ");
	scanf_s("%s", s.name);
	printf("���� : ");
	scanf_s("%.lf", &s.grade);
	printf("�й�: %d\n", s.num);
	printf("�̸�: %s\n", s.name);
	printf("����: %.1f\n", s.grade);
	return 0;
}