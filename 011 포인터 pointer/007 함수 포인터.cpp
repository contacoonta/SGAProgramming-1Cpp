/*
	함수 포인터 ( Pointer function )

	void (*func)( )
*/

#include <stdio.h>

//일반 함수
char show();
int plus(int a, int b);
int multiply(int a, int b);

void main()
{
	//printf("show 함수의 주소 = %p\n", &show);

	//함수 포인터
	int (*pfunc)(int, int);
	// 함수 포인터를 초기화 해주기 위해 nullptr
	pfunc = nullptr;

	// 일반 함수 사용
	//int res = plus(5, 6);

	// 함수 포인터에 일반 함수의 주소를 전달
	//pfunc = plus;
	
	// 함수 포인터를 사용 ( 실제는 일반 함수를 사용 )
	pfunc(5, 6);
	
}

char show()
{
	//a
	//b
	return 0;
}

int plus(int a, int b)
{
	printf("------plus 함수------\n");
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return c;
}

int multiply(int a, int b)
{
	printf("------multiply 함수------\n");
	int c = a * b;
	printf("%d * %d = %d\n", a, b, c);
	return c;
}