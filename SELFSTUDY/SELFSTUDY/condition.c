#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int main_condition(void) 
{
	//���� ���� -> �л� vs �Ϲ���(20��)
	//if(����){}else{}
	//int age = 25;
	//if (age >= 20)
	//{ 
	//	printf("�Ϲ����Դϴ�.\n");
	//}
	//else
	//{ 
	//	printf("�л��Դϴ�.\n");
	//}

	//�ʵ��л�(8~13) vs ���л�(14~16) vs ����л�(17~19)
	/*int age = 20;
	if (age >=8 && age<=13) 
	{
		printf("�ʵ��л��Դϴ�.\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�.\n");
	}
	else if(age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�.\n");
	}
	else
	{
		printf("�Ϲ����Դϴ�.\n");
	}*/
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ

	/*for (int i = 1; i <= 30; i++) 
	{
		if (i >= 6) 
		{
			printf("������ �л��� ���� ������\n");
			break;
		}
		printf("%d�� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	}*/

	//1������ 30������ �ִ� �ݿ��� 7�� �л� �Ἦ
	//7���� �����ϰ� 6������ 10������ ���� ��ǥ
	/*for (int i = 1; i <= 30; i++) 
	{
		if (i >= 6 && i <= 10) 
		{
			if (i == 7) 
			{
				printf("%d�� �л��� �Ἦ�Դϴ�\n", i);
				continue;
			}
			printf("%d�� �л��� ���� ��ǥ�� �غ��ϼ���\n", i);
		}
	}*/
	// && ||
	/*int a = 10, b = 10, c = 13 , d = 12;
	if (a == b || c == d) 
	{
		printf("a�� b Ȥ�� c�� d�� �����ϴ�.\n");
	}
	else 
	{
		printf("���� ���� �ٸ��׿�.\n");
	}*/

	// ���� 0 , ���� 1 , �� 2
	/*srand(time(NULL));
	int i = rand() % 3;
	if (i == 0) 
	{
		printf("����\n");
	}
	else if (i == 1)
	{
		printf("����\n");
	}
	else if (i == 2)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}*/

	/*srand(time(NULL));
	int i = rand() % 3;
	switch (i) 
	{
		case 0:printf("����\n"); break;
		case 1:printf("����\n"); break;
		case 2:printf("��\n"); break;
		default:printf("����\n"); break;
	}*/
	//int age = 11;
	//switch (age) //switch~case ������ case�� break������ �� ���� ���� �ڵ� ����
	//{
	//    case 8:
	//    case 9:
	//	case 10:
	//	case 11:
	//	case 12:
	//	case 13: printf("�ʵ��л��Դϴ�.\n"); break;
	//	case 14:
	//	case 15:
	//	case 16: printf("���л��Դϴ�.\n"); break;
	//	case 17:
	//	case 18:
	//	case 19: printf("����л��Դϴ�.\n"); break;
	//	default: printf("�л��� �ƴϱ���\n"); break;	
	//}
	
	// up & down
	srand(time(NULL));
	int num = rand() % 100+1;
	printf("����: %d\n", num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("���� ��ȸ %d�� \n", chance--);
		printf("���ڸ� �����(1~100): ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down ��\n\n");
		}
		else if(answer < num)
		{
			printf("Up ��\n\n");
		}
		else if (answer == num) 
		{
			printf("�����Դϴ�.\n\n");
			break;	
		}
		else
		{
			printf("�� �� ���� ���� �߻�\n");
		}

		if (chance == 0) 
		{
			printf("��� ��ȸ�� �� ����ϼ̽��ϴ� ����\n");
			break;
		}

	}	
	return 0;
}