#include <stdio.h>
#include <limits.h>
#include<math.h>
#define MONTHS 12
#define SECOND_PER_MINUTE 60;
#define N 10

int main_basic(void) 
{
	/*printf("Hello World!\n");*/

	/*printf("======== 변수형 ========\n");
	int x = 50;
	printf("x의 값          : %d\n",x);
	printf("x의  메모리 크기: %d Byte\n", sizeof(x));
	float y = 123456789.123456789;
	printf("y의 값          : %.2f\n", y);
	printf("y의  메모리 크기: %d Byte\n", sizeof(y));
	double z = 123456789.123456789;
	printf("z의 값          : %.2f\n", z);
	printf("z의  메모리 크기: %d Byte\n", sizeof(z));*/

	/*printf("======== Overflow ========\n");
	int num = INT_MAX;
	printf("int형의 최댓값 num은 %d\n", num);
	printf("num + 1은 %d\n", num+1);*/

	/*int a = 10; 
	int b = 20;
	printf("a = %d\n",a);
	printf("b = %d\n", b);
	printf("a + b = %d\n",a+b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);*/

	//double monthsalary = 1000.5;
	//printf("$ %.2f\n",monthsalary*MONTHS);
	//char x = 'A';
	//char y = 65;
	//char z = 'B';
	///*char x = 65; ASCII CODE*/
	///*int x = 65*/
	//printf("%c\n", x); // 결과값: A로 동일
	//printf("%c\n", y);
	//printf("%c\n", z);
	//printf("%d\n", z);
	//int a = 100;
	//printf("10진수 : %d\n", a);
	//printf(" 8진수 : %o\n", a);
	//printf("16진수 : %x\n", a);

	//printf("======== 연산자 ========\n");
	//int input = 1000;
	//int minute = input / SECOND_PER_MINUTE;
	//int second = input % SECOND_PER_MINUTE;
	//printf("%d초 =  %d분 %d초\n",input,minute,second);
	//int x = 0;
	//printf("현재의 x : %d\n", x);
	//x++;
	//printf("현재의 x : %d\n", x);
	//printf("현재의 x : %d\n", x--);
	//printf("현재의 x : %d\n", x);
	//printf("현재의 x : %d\n", --x);
	//printf("현재의 x : %d\n", ++x);
	//printf("===========================\n");
	//int y = 100;
	//printf("현재의 y : %d\n", y);
	//y += 50;
	//printf("현재의 y : %d\n", y);
	//y -= 50;
	//printf("현재의 y : %d\n", y);
	//y *= 50;
	//printf("현재의 y : %d\n", y);
	//y /= 50;
	//printf("현재의 y : %d\n", y);
	//y %= 3;
	//printf("현재의 y : %d\n", y);
	//printf("===========================\n");
	//int a = 50, b = 30;
	//printf("a = b ? %d\n", a == b);
	//printf("a≠ b ? %d\n", a != b);
	//printf("a > b ? %d\n", a > b);
	//printf("a < b ? %d\n", a < b);
	//printf("a > b 이고 b > 40 ? %d\n", (a > b) && (b>40));
	//printf("a > b 이거나 b > 40 ? %d\n", (a > b) || (b > 40));
	//printf("===========================\n");
	//int c = -50, d = 30;
	//int absoluteC = (c > 0) ? c : -c; // (조건연산자)c가 0보다 작으면 c = -c;
	//int max = (c > d) ? c : d;
	//int min = (c < d) ? c : d;
	//printf("c = %d\n", c);
	//printf("c의 절대값: %d\n", absoluteC);
	//printf("c,d 중에서 최대값 = %d\n", max);
	//printf("c,d 중에서 최소값 = %d\n", min);
	//printf("===========================\n");
	//double e = pow(2.0, 20.0);
	//printf("2의 20제곱 = %.0f\n", e);
	//int f = abs(-2);
	//printf("-2의 절대값 = %d\n", f);

	/*printf("======== 조건문 ========\n");*/
	/*int x = -50;
	if (x < 0) 
	{
		x = -x;
	}
	printf("x의 절대값 = %d\n", x);*/
	/*int y = 85;
	if (y > 95) 
	{
		printf("A+");
	}
	else if(y>90)
	{
		printf("A");
	}
	else if(y>85)
	{
		printf("B+");
	}
	else if (y > 80)
	{
		printf("B");
	}
	else if (y > 75)
	{
		printf("C+");
	}
	else if (y > 70)
	{
		printf("C");
	}
	else
	{
		printf("F");
	}*/

	/*int year = 2016;
	if ((year % 4 == 0 && year != 100) || year % 400 == 0) 
	{
		printf("%d년은 윤년\n", year);
	}
	else 
	{
		printf("%d년은 윤년이 아님\n", year);
	}*/

	/*printf("======== 반복문 ========\n");*/
	//int i = 1;
	//int sum=0;
	//while(i <= 1000)
	//{
	//	sum = sum + i;
	//	i++;
	//}
	///*for (int i = 1; i <= 1000; i++) 
	//{
	//	sum = sum + i;
	//}*/
	//printf("1부터 1000까지의 합 : %d\n", sum);

	/*for (int i = 0; i < N; i++) 
	{
		for (int j = 0; j < N; j++) 
		{
			printf("★");
		}
		printf("\n");
	}*/

	/*for(int i = 0; i < 5; i++) 
	{
		for (int j = i; j < 4; j++) 
		{ 
			printf(" "); 
		}
		for (int k = 0; k < 2*i+1; k++) 
		{
			printf("*");
		}
		printf("\n");
	}*/

	/*int a, b;
	char o;

	while (1) 
	{
		printf("수식 입력 : \n");
		scanf_s("%d", &a);
		scanf_s("%c", &o);
		scanf_s("%d", &b);
		if (o == '+') 
		{
			printf("%d %c %d = %d\n", a,o,b,a + b);

		}
		else if (o == '-') 
		{
			printf("%d %c %d = %d\n", a,o,b,a- b);

		}
		else if (o == '*') 
		{
			printf("%d %c %d = %d\n", a,o,b,a * b);
		}
		else if (o == '/') 
		{
			printf("%d %c %d = %d\n", a, o, b, a / b);
		}
		else 
		{
			printf("%d %c %d = %d\n", a, o, b, a % b);
		}	
		getchar();
		printf("프로그램 종료?(y/n)\n");
		scanf_s("%c", &o);
		if (o == 'n' || o == 'N')
		{
			continue;
		}
		else if (o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("입력 오류\n");
		}
	}*/

	/*int i ;
	int sum=0;
	printf("숫자 입력: \n");
	scanf_s("%d", &i);
	for (int j = 1; j <= i; j++) 
	{
		sum = sum + j;
	}
	printf("1부터 %d까지의 합 : %d\n", i,sum);*/

	/*int i;
	int sum = 0;
	printf("숫자입력(구구단)\n");
	scanf_s("%d", &i);
	for (int j = 1; j < 10; j++) 
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	printf("\n");*/
	
	return 0;
}