#include<stdio.h>
#include<time.h>
// 5마리 고양이 
// 아무 키나 눌러서 랜덤으로 고양이 나옴
// 5마리 모두 다 수집해서 열심히 키우기
// 중복 발생 가능


// 고양이
// 이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct 
{
	char* name;       // 이름
	int age;		  // 나이
	char* character;  // 성격
	int level;        // 키우기 난이도(레벨)
}CAT;

// 현재까지 보유한 고양이
int collection[5] = {0,0,0,0,0};

// 전체 고양이 리스트
CAT cats[5];

void initCats(); // 고양이 정보 초기화
void printfCat(int selected);
int main_struct_project(void) 
{
	srand(time(NULL));
	initCats();
	while (1) 
	{
		printf("두근두근! 어느 고양이의 집사가 될까요?\n아무 키나 눌러서 확인하세요!");
		getchar();

		int selected = rand() % 5; // 0 ~ 4 사이의 숫자 반환
		printfCat(selected); // 선택한 고양이 정보 출력
		collection[selected] = 1; // 고양이 뽑기 처리

		int collectAll = checkCollection();
		if (collectAll == 1) 
		{
			break;
		}
	}

	return 0;
}

void initCats() 
{
	cats[0].name= "깜냥이";
	cats[0].age = 5;
	cats[0].character = "온순";
	cats[0].level = 1;

	cats[1].name = "귀염냥이";
	cats[1].age = 3;
	cats[1].character = "날카로운";
	cats[1].level = 2;

	cats[2].name = "수줍냥이";
	cats[2].age = 7;
	cats[2].character = "잠만보";
	cats[2].level = 3;

	cats[3].name = "깜놀냥이";
	cats[3].age = 2;
	cats[3].character = "활발";
	cats[3].level = 4;

	cats[4].name = "돼냥이";
	cats[4].age = 1;
	cats[4].character = "먹보";
	cats[4].level = 5;
}
void printfCat(int selected) 
{
	printf("\n\n == 당신은 이 고양이의 집사가 되었어요! == \n\n");
	printf("이름    : %s\n",cats[selected].name);
	printf("나이    : %d\n", cats[selected].age);
	printf("성격    : %s\n", cats[selected].character);
	printf("난이도  : ");
	for (int i = 0; i < cats[selected].level; i++) 
	{
		printf("%s", "★");
	}
	printf("\n\n");
}
int checkCollection() 
{
	// 현재 보유한 고양이 목록 출력 & 다 모았는지 여부 확인 

	int collectAll = 1;

	printf("\n\n === 보유한 고양이 목록 ===\n\n");
	for (int i = 0; i < 5; i++) 
	{
		if (collection[i] == 0)  // 고양이 수집 x 
		{
			printf("%10s", "(빈 박스)");
			collectAll = 0; // 다 모으지 못한 상태
		}
		else // 고양이 수집 o
		{
			printf("%10s",cats[i].name);
		}
	}
	printf("\n=========================================\n\n");

	if (collectAll)  // 모든 고양이 수집 완료
	{
		printf("모두 수집 완료!\n\n");
	}
	return collectAll;
}