#include <stdio.h>

struct GameInfo 
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //������ü����
};

typedef struct /*GameInformation*/
{
	char* name;
	int year;
	int price;
	char* company;
} GAME_INFO;

int main_struct(void) 
{
	//[���� ���]
	// �̸�: ����
	// �߸ų⵵: 2017��
	// ����: 50��
	// ���ۻ�: ȸ��

	char* name = "����";
	int year = 2017;
	int price = 50;
	char* company = "ȸ��";

	//[�� �ٸ� ���� ��� ]
	// �̸�: �� ����
	// �߸ų⵵: 2017��
	// ����: 50��
	// ���ۻ�: �� ȸ��

	char* name2 = "�� ����";
	int year2 = 2017;
	int price2 = 50;
	char* company2 = "�� ȸ��";

	// ����ü ���
	struct GameInfo gameInfo1;
	gameInfo1.name = "����";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "ȸ��";

	//����ü ���
	printf("-- ���� ��� ���� --\n");
	printf("���Ӹ�   : %s\n",gameInfo1.name);
	printf("��ó⵵ : %d��\n", gameInfo1.year);
	printf("����     : %d��\n", gameInfo1.price);
	printf("ȸ��     : %s\n", gameInfo1.company);
	printf("\n\n");

	// ����ü�� �迭ó�� �ʱ�ȭ
	struct GameInfo gameInfo2 = {"�� ����",2017,100,"�� ȸ��"};
	printf("-- �� �ٸ� ���� ��� ���� --\n");
	printf("���Ӹ�   : %s\n", gameInfo2.name);
	printf("��ó⵵ : %d��\n", gameInfo2.year);
	printf("����     : %d��\n", gameInfo2.price);
	printf("ȸ��     : %s\n", gameInfo2.company);
	printf("\n\n");
	// ����ü �迭
	struct GameInfo gameArray[2] = 
	{
	{"����",2017,50,"ȸ��"} ,
	{"�� ����",2017,100,"�� ȸ��"} 
	};

	// ����ü ������
	struct GameInfo* gamePtr; 
	gamePtr = &gameInfo1;
	printf("-- �������� ���� ��� ���� --\n");
	//printf("���Ӹ�   : %s\n", (*gamePtr).name); 
	//printf("��ó⵵ : %d��\n", (*gamePtr).year);
	//printf("����     : %d��\n", (*gamePtr).price);
	//printf("ȸ��     : %s\n", (*gamePtr).company);
	printf("���Ӹ�   : %s\n", gamePtr->name); 
	printf("��ó⵵ : %d��\n", gamePtr->year);
	printf("����     : %d��\n", gamePtr->price);
	printf("ȸ��     : %s\n", gamePtr->company);
	printf("\n\n");

	// ���� ��ü ���� �Ұ�
	gameInfo1.friendGame = &gameInfo2;
	printf("-- ������ü�� ���� ��� ���� --\n");
	printf("���Ӹ�   : %s\n", gameInfo1.friendGame->name);
	printf("��ó⵵ : %d��\n", gameInfo1.friendGame->year);
	printf("����     : %d��\n", gameInfo1.friendGame->price);
	printf("ȸ��     : %s\n", gameInfo1.friendGame->company);
	printf("\n\n");

	//typedef
	//�ڷ����� �̸�(����) ����
	int i = 1;
	typedef int ����;
	typedef float �Ǽ�;
	���� �������� = 3; // int i = 3;
	�Ǽ� �Ǽ����� = 3.14f; // float f = 3.14f;
	printf("�������� : %d, �Ǽ�����: %.2f\n", ��������, �Ǽ�����);

	typedef struct GameInfo ��������;
	�������� game1;
	game1.name = "�ѱ۰���";
	game1.year = 2015;
	game1.price = 1000;
	game1.company = "�ѱ�ȸ��";
	GAME_INFO game2;
	game2.name = "�������";
	game2.year = 2016;
	game2.price = 10000;
	game2.company = "����ȸ��";

	//struct  GameInformation game3;
	//game3.name = "�Ϻ������";
	//game3.year = 2017;
	//game3.price = 10;
	//game3.company = "�Ϻ���ȸ��";

	return 0;
}