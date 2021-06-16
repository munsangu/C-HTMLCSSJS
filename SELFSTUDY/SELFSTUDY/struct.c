#include <stdio.h>

struct GameInfo 
{
	char* name;
	int year;
	int price;
	char* company;

	struct GameInfo* friendGame; //연관업체게임
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
	//[게임 출시]
	// 이름: 게임
	// 발매년도: 2017년
	// 가격: 50원
	// 제작사: 회사

	char* name = "게임";
	int year = 2017;
	int price = 50;
	char* company = "회사";

	//[또 다른 게임 출시 ]
	// 이름: 또 게임
	// 발매년도: 2017년
	// 가격: 50원
	// 제작사: 또 회사

	char* name2 = "또 게임";
	int year2 = 2017;
	int price2 = 50;
	char* company2 = "또 회사";

	// 구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "회사";

	//구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("게임명   : %s\n",gameInfo1.name);
	printf("출시년도 : %d년\n", gameInfo1.year);
	printf("가격     : %d원\n", gameInfo1.price);
	printf("회사     : %s\n", gameInfo1.company);
	printf("\n\n");

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = {"또 게임",2017,100,"또 회사"};
	printf("-- 또 다른 게임 출시 정보 --\n");
	printf("게임명   : %s\n", gameInfo2.name);
	printf("출시년도 : %d년\n", gameInfo2.year);
	printf("가격     : %d원\n", gameInfo2.price);
	printf("회사     : %s\n", gameInfo2.company);
	printf("\n\n");
	// 구조체 배열
	struct GameInfo gameArray[2] = 
	{
	{"게임",2017,50,"회사"} ,
	{"또 게임",2017,100,"또 회사"} 
	};

	// 구조체 포인터
	struct GameInfo* gamePtr; 
	gamePtr = &gameInfo1;
	printf("-- 포인터의 게임 출시 정보 --\n");
	//printf("게임명   : %s\n", (*gamePtr).name); 
	//printf("출시년도 : %d년\n", (*gamePtr).year);
	//printf("가격     : %d원\n", (*gamePtr).price);
	//printf("회사     : %s\n", (*gamePtr).company);
	printf("게임명   : %s\n", gamePtr->name); 
	printf("출시년도 : %d년\n", gamePtr->year);
	printf("가격     : %d원\n", gamePtr->price);
	printf("회사     : %s\n", gamePtr->company);
	printf("\n\n");

	// 연관 업체 게임 소개
	gameInfo1.friendGame = &gameInfo2;
	printf("-- 연관업체의 게임 출시 정보 --\n");
	printf("게임명   : %s\n", gameInfo1.friendGame->name);
	printf("출시년도 : %d년\n", gameInfo1.friendGame->year);
	printf("가격     : %d원\n", gameInfo1.friendGame->price);
	printf("회사     : %s\n", gameInfo1.friendGame->company);
	printf("\n\n");

	//typedef
	//자료형에 이름(별명) 지정
	int i = 1;
	typedef int 정수;
	typedef float 실수;
	정수 정수변수 = 3; // int i = 3;
	실수 실수변수 = 3.14f; // float f = 3.14f;
	printf("정수변수 : %d, 실수변수: %.2f\n", 정수변수, 실수변수);

	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글게임";
	game1.year = 2015;
	game1.price = 1000;
	game1.company = "한글회사";
	GAME_INFO game2;
	game2.name = "영어게임";
	game2.year = 2016;
	game2.price = 10000;
	game2.company = "영어회사";

	//struct  GameInformation game3;
	//game3.name = "일본어게임";
	//game3.year = 2017;
	//game3.price = 10;
	//game3.company = "일본어회사";

	return 0;
}