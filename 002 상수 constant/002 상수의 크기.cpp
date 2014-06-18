/*
	상수의 데이터 크기
	sizeof
*/

#include <stdio.h>

int main()
{
	printf("정수 %d 의 크기 = %d\n", 24, sizeof(24));
	// 1.54f
	printf("실수 %.2f 의 크기 = %d\n", 1.54f, sizeof(1.54f));
	// 1.54
	printf("실수 %.2f 의 크기 = %d\n", 1.54, sizeof(1.54));
	// 'y'
	printf("단일문자 %c 의 크기 = %d\n", 'y', sizeof('y'));
	// "xy"
	printf("문자열 %s 의 크기 = %d\n", "xy", sizeof("xy"));

	return 0;
}