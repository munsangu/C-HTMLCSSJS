#include <stdio.h>
#include<string.h>

int main_basic16(void) 
{
	char input[10] = "ABC";
	char result[5] = "Love";
	strcpy(result,input);
	printf("���ڿ� ���� = %s\n", result);
	return 0;
}