#include <stdio.h>
#include <time.h>

int main(void) 
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	/*printf("�������� : %d",num);*/
	printf("���� ���� ���� �Ϸ�!");
	int count = 5;
	int num2;

	printf("\n\n ========== ���� ���߱� ========== \n");
	while (count > 0)
	{
		
		
		printf("���� �Է�(1~100) �� 5���� ��ȸ:  ");
		scanf_s("%d", &num2);
		if (num2 > 100)
		{
			printf("�Է� ����! 1 ~ 100 ������ ���ڸ� �Է�! \n");
			continue;
		}
		if (num2 == num)
				{
					printf("����!\n");
					break;
				}
		else if (num2 > num)
				{
					printf("DOWN!\n");
					printf("���� ��ȸ %d��\n", --count);
				}
		else
				{
					printf("UP!\n");
					printf("���� ��ȸ %d��\n", --count);
				}
		if (count == 0) 
		{
			printf("���� ���߱� ����!\n");
			printf("������ %d", num);
		}

	}
	return 0;
}