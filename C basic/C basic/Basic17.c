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
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("학번: %d\n", s.num);
	printf("이름: %s\n", s.name);
	printf("학점: %.1f\n", s.grade);
	return 0;
}