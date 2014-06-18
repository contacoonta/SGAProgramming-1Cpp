/*
	y		=	f		( x )
	int			main	(	)

	main 함수의 특징
	1. 메인함수는 하나만 존재.
	2. main 소문자로 정확히 입력.
*/

/*
	printf에 대해서 알아보기
*/


#include <stdio.h>

int main()
{
	printf("문을 안쪽으로\n열어 주세요\n");

	//printf("경고음 소리\a\a\n");

	printf("백스페\b이스\b");
	printf("폼\f피\f드\n");
	printf("캐리\r지리턴\n");

	printf("수\t평\t탭\n");
	printf("수\v직\v탭\n");

	printf(" \"큰따옴표\" \n");
	printf(" '작은 따옴표' \n");
	printf(" 3\\4 \n");

	return 0;
}