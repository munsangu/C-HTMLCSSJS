#include <stdio.h>
#include<stdlib.h>

struct student 
{
	int num;
	char name[10];
	double grade;
};

int main_basic17(void)
{
	struct student s;
	s.num = 20140001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.5;
	printf("�й�: %d\n", s.num);
	printf("�̸�: %s\n", s.name);
	printf("����: %.1f\n", s.grade);
	return 0;
}