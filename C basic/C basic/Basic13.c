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
	printf("�Է��� ���ڿ��� ���� = %d\n", count);
	printf("�Է��� ���ڿ� = %s\n",input);
	return 0;
}