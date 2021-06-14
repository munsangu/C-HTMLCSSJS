#include<stdio.h>

//선언
void p(int num);

void function_without_return();
int function_with_return();
void function_without_parameter();
void function_with_parameter(int num1, int num2, int num3);

int apple(int tot, int ate); // 전체 tot개에서 ate를 먹고 남은 것

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void) 
{
	//int num = 2;
	///*printf("num은 %d 입니다\n", num);*/
	//p(num);

	//num = num + 3;
	///*printf("num은 %d 입니다\n", num);*/
	//p(num);

	//num -= 1;
	///*printf("num은 %d 입니다\n", num);*/
	//p(num);

	//num *= 3;
	///*printf("num은 %d 입니다\n", num);*/
	//p(num);

	//num /= 6;
	///*printf("num은 %d 입니다\n", num);*/
	//p(num);

	// 함수 종류
	// 반환값이 없는 함수
	/*function_without_return();*/

	// 반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	// 파라미터(전달값)가 없는 함수
	/*function_without_parameter();*/

	// 파라미터(전달값)가 있는 함수
	/*function_with_parameter(1,2,3);*/

	// 파라미터(전달값)도 받고, 반환값이 있는 함수
	//int ret = apple(5, 2); //5개의 사과 중 2개를 먹음
	//printf("사과 5개 중에 2개를 먹으면? %d개가 남음\n", ret);
	/*printf("사과 %d개 중에 %d개를 먹으면? %d개가 남음\n", 10, 4, apple(10, 4));*/
	
	
	
	// 계산기 함수
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 6);
	p(num);
	
	return 0;
}

// 정의
void p(int num) 
{
	printf("num은 %d입니다\n", num);
}

//전달값: 36
// 함수: ㅁ + 4
// 반환형: ?

//int 함수이름(num) 
//{
//	return num + 4;
//}

void function_without_return() 
{
	printf("반환값이 없는 함수\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수\n");
	return 10;
}

void function_without_parameter() 
{
	printf("전달값이 없는 함수\n");
}

void function_with_parameter(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d입니다.\n", num1, num2, num3);
}

int apple(int tot, int ate) 
{
	printf("전달값과 반환값이 있는 함수\n");
	return tot - ate;
}

int add(int num1, int num2)
{
	return num1 + num2;
}
int sub(int num1, int num2)
{
	return num1 - num2;
}int mul(int num1, int num2)
{
	return num1 * num2;
}int div(int num1, int num2)
{
	return num1 / num2;
}