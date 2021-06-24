#include <stdio.h>

int main_basic13(void) 
{
	char input[1001];
	gets(input);
	int count = 0;
	while (input[count] != '\0') 
	{
		count++;
	}
	printf("입력한 문자열의 길이 = %d\n", count);
	printf("입력한 문자열 = %s\n",input);
	return 0;
}