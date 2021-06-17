#include<stdio.h>

int main_practice1(void) 
{
	char name[256];
	int age;
	float weight;
	double height;
	char note[256];

	printf("이름?\n");
	scanf_s("%s", &name,sizeof(name));
	printf("나이?\n");
	scanf_s("%d", &age);
	printf("몸무게?\n");
	scanf_s("%f", &weight);
	printf("키?\n");
	scanf_s("%lf", &height);
	printf("잘못한 것?\n");
	scanf_s("%s", &note, sizeof(note));

	printf("\n\n ========= 조서 내용 ========= \n");
	printf("이름       : %s\n", name);
	printf("나이       : %d\n", age);
	printf("몸무게     : %.2f\n", weight);
	printf("키         : %.2lf\n", height);
	printf("잘못한 것  : %s\n", note);
	return 0;
}