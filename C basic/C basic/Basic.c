#include <stdio.h>
#include <limits.h>
#include<math.h>
#define MONTHS 12
#define SECOND_PER_MINUTE 60;

int main(void) 
{
	/*printf("Hello World!\n");*/

	/*printf("======== ������ ========\n");
	int x = 50;
	printf("x�� ��          : %d\n",x);
	printf("x��  �޸� ũ��: %d Byte\n", sizeof(x));
	float y = 123456789.123456789;
	printf("y�� ��          : %.2f\n", y);
	printf("y��  �޸� ũ��: %d Byte\n", sizeof(y));
	double z = 123456789.123456789;
	printf("z�� ��          : %.2f\n", z);
	printf("z��  �޸� ũ��: %d Byte\n", sizeof(z));*/

	/*printf("======== Overflow ========\n");
	int num = INT_MAX;
	printf("int���� �ִ� num�� %d\n", num);
	printf("num + 1�� %d\n", num+1);*/

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
	//printf("%c\n", x); // �����: A�� ����
	//printf("%c\n", y);
	//printf("%c\n", z);
	//printf("%d\n", z);
	//int a = 100;
	//printf("10���� : %d\n", a);
	//printf(" 8���� : %o\n", a);
	//printf("16���� : %x\n", a);

	//printf("======== ������ ========\n");
	//int input = 1000;
	//int minute = input / SECOND_PER_MINUTE;
	//int second = input % SECOND_PER_MINUTE;
	//printf("%d�� =  %d�� %d��\n",input,minute,second);
	//int x = 0;
	//printf("������ x : %d\n", x);
	//x++;
	//printf("������ x : %d\n", x);
	//printf("������ x : %d\n", x--);
	//printf("������ x : %d\n", x);
	//printf("������ x : %d\n", --x);
	//printf("������ x : %d\n", ++x);
	//printf("===========================\n");
	//int y = 100;
	//printf("������ y : %d\n", y);
	//y += 50;
	//printf("������ y : %d\n", y);
	//y -= 50;
	//printf("������ y : %d\n", y);
	//y *= 50;
	//printf("������ y : %d\n", y);
	//y /= 50;
	//printf("������ y : %d\n", y);
	//y %= 3;
	//printf("������ y : %d\n", y);
	//printf("===========================\n");
	//int a = 50, b = 30;
	//printf("a = b ? %d\n", a == b);
	//printf("a�� b ? %d\n", a != b);
	//printf("a > b ? %d\n", a > b);
	//printf("a < b ? %d\n", a < b);
	//printf("a > b �̰� b > 40 ? %d\n", (a > b) && (b>40));
	//printf("a > b �̰ų� b > 40 ? %d\n", (a > b) || (b > 40));
	//printf("===========================\n");
	//int c = -50, d = 30;
	//int absoluteC = (c > 0) ? c : -c; // (���ǿ�����)c�� 0���� ������ c = -c;
	//int max = (c > d) ? c : d;
	//int min = (c < d) ? c : d;
	//printf("c = %d\n", c);
	//printf("c�� ���밪: %d\n", absoluteC);
	//printf("c,d �߿��� �ִ밪 = %d\n", max);
	//printf("c,d �߿��� �ּҰ� = %d\n", min);
	//printf("===========================\n");
	//double e = pow(2.0, 20.0);
	//printf("2�� 20���� = %.0f\n", e);
	//int f = abs(-2);
	//printf("-2�� ���밪 = %d\n", f);

	printf("======== ���ǹ� ========\n");
	/*int x = -50;
	if (x < 0) 
	{
		x = -x;
	}
	printf("x�� ���밪 = %d\n", x);*/
	int y = 85;
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
	}

	return 0;
}