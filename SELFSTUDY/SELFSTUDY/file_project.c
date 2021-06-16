#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


// 비밀번호를 입력 받아서
// 맞는 경우에는 비밀 일기를 읽어와서 보여주고 계속 작성
// 틀린 경우에는 경고 메시지 표시



#define MAX 10000

int main(void) 
{

	// fgets, fputs 활용
	char line[MAX];      // 파일에서 불러온 내용을 저장할 변수
	char contents[MAX];  // 일기장에 입력할 내용
	char password[20];   // 비밀번호 입력
	char c;              // 비밀번호 입력시 키 값 확인용(마스킹)

	printf("'비밀일기'에 오신 것을 환영\n");
	printf("비밀번호 입력 : ");

	//getchar() vs getch() -> '엔터' 입력 받아야 동작 vs 키 입력시 바로 동작

	int i = 0;
	while (1) 
	{
		c = getch();
		if (c == 13)      // Enter => 비밀번호 입력 종료
		{
			password[i] = '\0';
			break;
		}
		else              // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	// 비밀번호 : mmm
	printf("\n\n === 비밀번호 확인 중 ===\n\n");
	if (strcmp(password, "mmm") == 0)  // 비밀번호 일치
	{
		printf(" === 비밀번호 확인 완료 ===\n\n");
		char* fileName = "d:\\secretdiary.txt";
		// 파일이 없으면 생성, 파일이 있으면 append(뒤에서 부터 내용 추가)
		FILE* file = fopen(fileName, "a+b"); 
		if(file == NULL) 
		{
			printf("파일 열기 실패\n");
			return 1;
		}

		while (fgets(line, MAX, file) != NULL) 
		{
			printf("%s", line);
		}
		printf("\n\n 내용을 계속 작성하세요! 종료하려면 EXIT 입력\n\n");

		while (1) 
		{
			scanf("%[^\n]", contents); // 새 줄(\n)이 나오기 전까지 읽어들임(한 문장씩 저장)
			getchar(); // Enter 입력(\n) Flush 처리
			
			if (strcmp(contents, "EXIT") == 0) 
			{
				printf("비밀일기 입력 종료\n\n");
				break;
			}
			fputs(contents, file);
			fputs("\n",file); // Enter를 위에서 무시 처리 -> 임의 추가
		}
		fclose(file);
	}

	else // 비밀번호 틀린 경우
	{
		printf(" === 비밀번호 틀림 ===\n\n");
		printf(" 누구냐? \n\n\n");
	}

	return 0;
}