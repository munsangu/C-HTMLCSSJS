#include<stdio.h>

int main_loop(void)
{
	//Hello world 10번 출력
	/*printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");
	printf("Hello World\n");*/

	/*int a = 10;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);
	a++;
	printf("a는 %d\n", a);*/

	/*int b = 20;
	printf("b는 %d\n", ++b);
	printf("b는 %d\n", b++);
	printf("b는 %d\n", b);*/

	/*int i = 1;
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);
	printf("Hello World %d\n", i++);*/

	// 반복문 for, while dowhile

	//for(선언, 조건, 증감){}
	/*for (int i = 1; i <= 10; i++) 
	{
		printf("Hello World %d\n", i);
	}*/

	// while(조건) {}
	//int i = 1;
	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}

	//do {} while(조건);
	/*int i = 1;
	do 
	{
		printf("Hello World %d\n", i++);
	} 	
	while (i<=10);*/

	// 2중 반복문
	/*for (int i = 1; i <= 3; i++) 
	{
		printf("첫 번째 반복문 : %d\n", i);

		for (int j = 1; j <= 5; j++) 
		{
			printf("     두 번째 반복문 : %d\n", j);
		}
	}*/

	//구구단
	/*for (int i = 2; i <= 9; i++)
	{
		printf("    %d단 계산\n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("%d X %d = %d\n", i,j,i*j);
		}
		printf("=========================\n");
	}*/

	//*탑
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/
	/*for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 4; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++) 
		{
			printf("*");
		}
		printf("\n");
	}*/

	//피라미드 쌓기 - 프로젝트
	/*int floor;
	printf("몇 층? ");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor-1; j++) 
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) 
		{
			printf("*");
		}
		printf("\n");
	}*/
	//21.05.15 나도코딩 1:13:47 부터




	return 0;
}