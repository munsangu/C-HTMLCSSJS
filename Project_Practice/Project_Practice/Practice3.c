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
		printf("���� ��ȸ %d��\n",count--);
		printf("���� �Է�(1~100):  ");
		scanf_s("%d", &num2);
		if (num2 == num)
				{
					printf("����!\n");
					break;
				}
		else if (num2 > num)
				{
					printf("DOWN!\n");
				}
		else
				{
					printf("UP!\n");
				}
		if (count == 0) 
		{
			printf("���� ���߱� ����!\n");
			printf("������ %d", num);
		}

	}
	return 0;
}