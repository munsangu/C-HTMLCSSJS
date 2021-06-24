#include <stdio.h>
#include<string.h>

int main_basic16(void) 
{
	char input[10] = "ABC";
	char result[5] = "Love";
	strcpy(result,input);
	printf("문자열 복사 = %s\n", result);
	return 0;
}