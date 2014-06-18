/*
	배열	 Array
	1. 연속된 주소
	2. 같은 데이터 타입
*/

#include <stdio.h>

void main()
{
	int a=1, b=2;

	printf("주소 = %p\n", &a);
	printf("주소 = %p\n", &b);

	printf("------------------\n");
	//배열의 주소는 순차적으로 증가한다. ( 연결 )
	int c[3];
	printf("주소 = %p\n", &c[0]);
	printf("주소 = %p\n", &c[1]);
	printf("주소 = %p\n", &c[2]);
}