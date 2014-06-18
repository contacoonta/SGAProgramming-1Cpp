/*
	상수 Constant, Literal

	숫자 상수	정수			3, -2
				실수			1.24
	문자 상수	단일문자		'a'
				문자열		"string"
*/

#include <stdio.h>

int main()
{
	//printf("정수 = ?", 12);
	printf("%d + %d = %d\n", 45, 17, 45 + 17);

	//printf("실수 = ?", 5.12);
	printf("%.2f - %.2f = %.2f\n", 5.12f, 3.18f, 5.12f - 3.18f);

	printf("단일문자 = %c %c %c\n", 'k' , 'o' , 'r');
	printf("문자열 = %s\n", "fighting");

	return 0;
}