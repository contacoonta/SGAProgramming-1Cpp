/*
	* 연산자 ( Asterisk ) 로 값을 참조
	- * 뒤에는 반드시 주소이다.
*/

#include <stdio.h>

void main()
{
	char nums[] = {1,2,3,4,5,6};

	printf("%d\n", nums[2]);
	printf("%p\n", &nums[3]);
	printf("%d\n", *&nums[3]);
	printf("%d\n", *(nums+2) );
}