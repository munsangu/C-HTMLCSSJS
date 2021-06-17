#include <stdio.h>	


int main(void) 
{
	
	for (int i = 0; i < 5; i++) 
	{
	
		for (int j = 0; j <= i; j++) 
		{
			printf("*");
		}printf("\n");
	}
	
	int floor;

	printf("¸î Ãþ?\n");
	scanf_s("%d", &floor);

	for (int i = 0; i < floor; i++) 
	{
		for (int j = i; j < floor; j++) 
		{
			printf(" ");
		}
		for (int k = 0; k < i * 2 + 1; k++) 
		{
			printf("*");
		}printf("\n");
	}

	return 0;
}