#include<stdio.h>

int main_practice1(void) 
{
	char name[256];
	int age;
	float weight;
	double height;
	char note[256];

	printf("�̸�?\n");
	scanf_s("%s", &name,sizeof(name));
	printf("����?\n");
	scanf_s("%d", &age);
	printf("������?\n");
	scanf_s("%f", &weight);
	printf("Ű?\n");
	scanf_s("%lf", &height);
	printf("�߸��� ��?\n");
	scanf_s("%s", &note, sizeof(note));

	printf("\n\n ========= ���� ���� ========= \n");
	printf("�̸�       : %s\n", name);
	printf("����       : %d\n", age);
	printf("������     : %.2f\n", weight);
	printf("Ű         : %.2lf\n", height);
	printf("�߸��� ��  : %s\n", note);
	return 0;
}