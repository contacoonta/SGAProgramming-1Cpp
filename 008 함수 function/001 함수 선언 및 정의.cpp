/*
	함수  function
	1. main함수에 집중된 코드를 분산
	2. 함수로 만든 코드의 재사용

	y	=	f	(	x	)
	char	main(		)
*/

#include <stdio.h>

//3. 함수의 선언
void show(int i);
void show(float f);

char main()
{

	//1. 함수의 필요성
	//printf("정수 %d\n", 4);

	//4. 함수의 호출 ( 실제 사용 )
	show(10.1f);
	show(3);
	show(3 + 10.1f);

	show(-7, 9.875);
	
	return 0;
}

//2. 함수를 정의 ( 디자인 )
void show(int i)
{
	printf("------func show------\n");
	printf("정수 %d\n", i);
}

/*	
	실수 형태를 입력받아 출력해준다.
*/
void show(float f)
{
	printf("------func show _ float ------\n");
	printf("실수 %.2f\n", f);
}

void show(int i, double d)
{
}
