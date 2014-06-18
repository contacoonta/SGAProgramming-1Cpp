/*

한글자씩 타이핑해서 틀린부분의 개수 세기.

예)
주어진 문장	] a rolling stone gathers no moss
타이핑		] a r_ll_ng s_one gathers no moss

기본 ] 몇 글자가 틀렸습니다. :: ___

확장 ] 타이핑 완료까지 걸린시간 :: ___


참고 >> 띄어쓰기 포함한 문자열 입력
scanf("%[^\n]", string);

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	int nDifferentCnt = 0;			//틀린 글자 수
	unsigned int nElapsedTime = 0;	//걸린 시간

	// 주어진 문자열
	char str1[] = "a rolling stone gathers no moss";
	// 타이핑할 문자열
	char str2[50] = {};

	printf("준비되면 \"엔터\" 눌러주세요\n");
	int ch = 0;
	scanf("%c", &ch);
	//화면을 깨끗하게 지우고 시작
	system("cls");

	printf("%s\n", str1 );
	//입력시작 시간
	unsigned int beginTime = time(NULL);
	scanf("%[^\n]", str2);
	//입력종료 시간
	unsigned int endTime = time(NULL);
	//총 걸린시간 계산
	nElapsedTime = endTime - beginTime;

	for (int i = 0; i < (sizeof(str1) / sizeof(char)); i++)
	{
		if (str1[i] != str2[i])
		{
			nDifferentCnt++;
		}
	}//for

	printf("틀린 글자 수 = %d\n", nDifferentCnt);
	printf("타이핑 완료 시간 = %d\n", nElapsedTime);
}




