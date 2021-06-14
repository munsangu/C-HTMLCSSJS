#include<stdio.h>
#include<time.h>

// ����� 6����
// �̵��� ���׿� ����ִµ�, �縷
// �縷�� �ʹ� ���� �����ؼ� ���� ���� ���� ����
// ���� �� �����ϱ� ���� �������� ���׿� ���� �־� ����� �츮��
// ������ �ð��� �������� ���� Ŀ��
int level;
int arrayFish[6];
int * cursor;

void initDate();
void printfFishes();
void decreaseWater();

int main(void) 
{
	long startTime = 0; // ���� ���� �ð�
	long totalElapsedTime = 0; // �� ����ð�
	long prevElapsedTime = 0; // ���� ����ð�(�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ������, ����� �Է�
	initDate();

	cursor = arrayFish; // cursor[0],,cursor[1],,

	startTime = clock(); // ���� �ð��� 1000���� 1�� ������ ��ȯ
	while (1)
	{
		printfFishes();
		printf("�� �� ���׿� ���� ��?");
		scanf_s("%d", &num);

		// �Է°� üũ
		if (num < 1 || num >6)
		{
			printf("\n�Է°��� �߸���\n");
			continue;
		}
		// �� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð�: %ld ��\n", totalElapsedTime);
		// ������ �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapsedTime = totalElapsedTime - prevElapsedTime;
		printf("�ֱ� ��� �ð�: %ld ��\n", prevElapsedTime);	
	
		// ������ �� ����
		decreaseWater(prevElapsedTime);
		
		// ����ڰ� �Է��� ���׿� ���� ��
		// 1. ������ ���� 0�̸�? ���� ���� ���� 
		if (cursor[num - 1] <= 0) 
		{
			printf("%d�� ������ �̹� ����... �� �ʿ� ����\n",num);
		}
		// 2. ������ ���� 0�� �ƴϸ�? ���� �� 100�� ���� �ʰ�
		else if (cursor[num - 1] + 1 <= 100) 
		{
			printf("%d�� ���׿� ���� ��\n\n",num);
			cursor[num - 1]+=1;
		}
		// �������� �� ���� Ȯ��(�������� 20�ʸ���)
		if (totalElapsedTime / 20 > level - 1) 
		{
			level++;
			printf(" *** �� ���� ��! ���� %d �������� %d������ ���׷��̵� ***\n\n",level-1,level);

			if (level == 5) 
			{
				printf("\n\n����, �ְ� ���� �޼�, ��������\n\n");
				exit(0);
			}
		}
	

			// ��� ����Ⱑ �׾����� Ȯ��
		if (checkFishAlive() == 0)
		{
			// ��� ����� ���
			printf("��� ����� ���\n");
			exit(0);
		}
		else
		{
			// �ּ� �Ѹ��� �̻� ����
			printf("����� ����\n");
		}
		prevElapsedTime = totalElapsedTime;

		// 10�� -> 15��(5�� : prevElapsedTime -> 15��) -> 25�� (10��...>?)

	}


	return 0;
}

void initDate()
{
		level = 1; //���ӷ���(1~5)
		for (int i = 0; i < 6; i++)
		{
			arrayFish[i] = 100; // ������ �� ����(0~100)
		}
}
void printfFishes() 
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) 
	{
		printf(" %4d ",arrayFish[i]);
	}
	printf("\n\n");
}
void decreaseWater(long elapsedTime) 
{
	for (int i = 0; i < 6; i++) 
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime);//3 : ���̵� ������ ���� ��
		if (arrayFish[i] < 0) 
		{
			arrayFish[i] = 0;
		}
	}
}
int checkFishAlive() 
{
	for (int i = 0; i < 6; i++) 
	{
		if (arrayFish[i] > 0) 
		{
			return 1;
		}
	}
	return 0;
}
