#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// ��й�ȣ�� �Է� �޾Ƽ�
// �´� ��쿡�� ��� �ϱ⸦ �о�ͼ� �����ְ� ��� �ۼ�
// Ʋ�� ��쿡�� ��� �޽��� ǥ��



#define MAX 10000

int main(void) 
{

	// fgets, fputs Ȱ��
	char line[MAX];      // ���Ͽ��� �ҷ��� ������ ������ ����
	char contents[MAX];  // �ϱ��忡 �Է��� ����
	char password[20];   // ��й�ȣ �Է�
	char c;              // ��й�ȣ �Է½� Ű �� Ȯ�ο�(����ŷ)

	printf("'����ϱ�'�� ���� ���� ȯ��\n");
	printf("��й�ȣ �Է� : ");

	//getchar() vs getch() -> '����' �Է� �޾ƾ� ���� vs Ű �Է½� �ٷ� ����

	int i = 0;
	while (1) 
	{
		c = getch();
		if (c == 13)      // Enter => ��й�ȣ �Է� ����
		{
			password[i] = '\0';
			break;
		}
		else              // ��й�ȣ �Է� ��
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// ��й�ȣ : mmm
	printf("\n\n === ��й�ȣ Ȯ�� �� ===\n\n");
	if (strcmp(password, "mmm") == 0)  // ��й�ȣ ��ġ
	{
		printf(" === ��й�ȣ Ȯ�� �Ϸ� ===\n\n");
		char* fileName = "d:\\secretdiary.txt";
		// ������ ������ ����, ������ ������ append(�ڿ��� ���� ���� �߰�)
		FILE* file = fopen(fileName, "a+b"); 
		if(file == NULL) 
		{
			printf("���� ���� ����\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) 
		{
			printf("%s", line);
		}
		printf("\n\n ������ ��� �ۼ��ϼ���! �����Ϸ��� EXIT �Է�\n\n");

		while (1) 
		{
			scanf("%[^\n]", contents); // �� ��(\n)�� ������ ������ �о����(�� ���徿 ����)
			getchar(); // Enter �Է�(\n) Flush ó��
			
			if (strcmp(contents, "EXIT") == 0) 
			{
				printf("����ϱ� �Է� ����\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n",file); // Enter�� ������ ���� ó�� -> ���� �߰�
		}
		fclose(file);
	}

	else // ��й�ȣ Ʋ�� ���
	{
		printf(" === ��й�ȣ Ʋ�� ===\n\n");
		printf(" ������? \n\n\n");
	}

	return 0;
}