/*
	함수 만들기
	인자 두개를 넣어서 
	additive		
	subtract
	multiply
	divide
	결과를 리턴으로 나오게
*/

#include <stdio.h>

float divide(int a, int b);

void main()
{
	int a = 0, b = 0;

	printf("두 수를 입력 : ");
	scanf("%d %d", &a, &b);

	//1.
	//a / b;
	float f = divide(a, b);
	printf("결과 = %f\n", f );
}

float divide(int a, int b)
{
	float fresult = float(a) / float(b);
	return fresult;
}





/*
	char = keyInput()

	키를 입력 : ___
	입력한 키를 리턴하게..

	show( char )	인자 1개
	출력...
*/