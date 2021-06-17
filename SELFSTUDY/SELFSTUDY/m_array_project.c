#include<stdio.h>
#include<time.h>
// 10������ ���� �ٸ� ���� (�� ī�� 2�徿)
// ����ڷκ��� 2���� �Է°��� �޾Ƽ� ���� ������ ã���� ī�� ������
// ��� ���� ���� ã���� ���� ����
// �� ���� Ƚ�� �˷��ֱ�

int arrayAnimal[4][5]; // ī�� ���� (20��)
int checkAnimal[4][5]; // ������ ���� Ȯ��
char* strAnimal[10];
 
void initAnimalArray();
void initAnimalName();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAnimal();
void printQuestion();


int main_m_array_project(void) 
{
	srand(time(NULL));

	initAnimalArray();
	initAnimalName();
	shuffleAnimal();
	
	int failCount = 0; //����Ƚ��
	while (1) 
	{
		int select1 = 0; // ����ڰ� ������ ó�� ��
		int select2 = 0; // ����ڰ� ������ �ι�° ��

		printAnimal(); // ���� ��ġ ���
		printQuestion(); // ���� ���(ī������)
		printf("������ ī�带 2�� �������� : ");
		scanf_s("%d %d", &select1, &select2);

		if (select1 == select2) // ���� ī�� ���ý� ��ȿ
			continue;
		
		// ��ǥ�� �ش��ϴ� ī�带 ����� ���� �������� Ȯ��

		//���� ��ǥ�� (x,y)�� ��ȯ
		int firstSelect_x = conv_pos_x(select1);
		int firstSelect_y = conv_pos_y(select1);

		int secondSelect_x = conv_pos_x(select2);
		int secondSelect_y = conv_pos_y(select2);

		// ���� ������ ���(ī�� ������ ���� + ���� ���� Ȯ��)
		if (
			(checkAnimal[firstSelect_x][firstSelect_y]==0
			&& checkAnimal[secondSelect_x][secondSelect_y] == 0)
			&& 
			(arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y])
		   )
		{
			printf("\n\n ����! : %s �߰� \n\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			checkAnimal[firstSelect_x][firstSelect_y] = 1;
			checkAnimal[secondSelect_x][secondSelect_y] = 1;
		}
		// �ٸ� ������ ���
		else 
		{
			printf("\n\n ��!(Ʋ�Ȱų� �̹� ������ ī��) \n");
			printf("%d : %s\n",select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
			printf("%d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
			printf("\n\n");

			failCount++;
		}

		if (foundAllAnimals() == 1) // 1 True 0 False
		{
			printf("\n\n ����! ��� ���� �� ã��!\n");
			printf("\n\n���ݱ��� �� %d�� �Ǽ�!\n",failCount);
			break;
		}
	}
	return 0;
}

void initAnimalArray() 
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arrayAnimal[i][j] = -1;
		}
	}
}
void initAnimalName()
{
	strAnimal[0] = "������";
	strAnimal[1] = "�ϸ�";
	strAnimal[2] = "������";
	strAnimal[3] = "������";
	strAnimal[4] = "����"; 
	strAnimal[5] = "�ڳ���";
	strAnimal[6] = "�⸰";
	strAnimal[7] = "��Ÿ";
	strAnimal[8] = "Ÿ��";
	strAnimal[9] = "ȣ����";
}
// ����������
// ����������
// ����������
// ����������

void shuffleAnimal() 
{
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 0; j < 2; j++) 
		{
			int pos = getEmptyPosition();
			int x = conv_pos_x(pos);
			int y = conv_pos_y(pos);

			arrayAnimal[x][y] = i;
		}
	}
}

// ��ǥ���� �� ���� ã��
// ����������    0  1  2  3  4 -> (5�� ���� ������) 0 0 0 0 0
// ����������    5  6  7  8  9 -> (5�� ���� ������) 1 1 1 1 1
// ����������   10 11 12 13 14 -> (5�� ���� ������) 2 2 2 2 2
// ����������   15 16 17 18 19 -> (5�� ���� ������) 3 3 3 3 3

int getEmptyPosition() 
{
	while (1) 
	{
		int randPos = rand() % 20; //0~19 ������ ���� ��ȯ
		// 19 -> (3,4)
		int x = conv_pos_x(randPos);
		int y = conv_pos_y(randPos);

		if (arrayAnimal[x][y] == -1) 
		{
			return randPos;
		}
	}	
	return 0;
}

int conv_pos_x(int x) 
{
	// 19 -> (3,4)
	return x / 5;
}
int conv_pos_y(int y)
{
	// 19 -> 19 / 5 = �� 3 ������ 4
	return y % 5; // y�� 5�� ���� ������ �� 
}
void printAnimal()  // ���� ��ġ ���
{
// ����������    0  1  2  3  4 
// ����������    5  6  7  8  9 
// ����������   10 11 12 13 14 
// ����������   15 16 17 18 19
	printf("\n=============�̰� ���(����)================\n\n");

	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			printf("%8s", strAnimal[arrayAnimal[i][j]]);
		}
		printf("\n");
	}
	printf("\n=====================================\n\n");

}
void printQuestion() // ���� ���(ī������)
{
	printf("\n\n(����)\n");

	int seq = 0;

					//seq             //checkAnimal
// ����������    0  1  2  3  4		   0 0 0 0 0
// ����������   �ϸ�  6  7  8  9	   1 0 0 0 0
// ����������   10 11 12 �ϸ� 14       0 0 0 1 0
// ����������   15 16 17 18 19         0 0 0 0 0

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			// ī�带 ����� ������ �������� '�����̸�'
			if (checkAnimal[i][j] != 0) 
			{
				printf("%8s", strAnimal[arrayAnimal[i][j]]);
			}
			// ���� x -> �޸� ��ġ�� ��Ÿ���� ����
			else
			{
				printf("%8d",seq);
			}
			seq++;
		}
		printf("\n");
		
	}
	
}

int foundAllAnimals() 
{
	for (int i = 0; i < 4; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			if (checkAnimal[i][j] == 0) 
			{
				return 0;
			}
		}
	}
	return 1; // ��� �� ã��
}