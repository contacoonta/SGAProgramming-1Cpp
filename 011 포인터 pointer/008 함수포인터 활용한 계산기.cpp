/*
	함수 포인터를 활용한 계산기

	3.14f, 7.2f

	switch(연산선택) 로 선택하면 
	함수포인터에 해당 함수 셋팅
	
	1덧셈
	2뺄셈
	3곱셈
	4나눗셈

	0선택 .. 계산하기
*/

#include <stdio.h>

//함수 포인터 선언과 동시에 초기화
float(*pfunc)(float, float) = nullptr;

float plus(float a, float b);
float minus(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float average(float a, float b);


void main()
{
	int nsel = 0;

	while (true)
	{
		printf("연산 선택 : ");
		fflush(stdin);
		scanf("%d", &nsel);

		switch (nsel)
		{
		case 1:
			pfunc = &plus;
			printf("plus 선택\n");
			break;
		
			//...

		case 0:
			pfunc(3.14f, 7.2f);
			break;
		}
	}

}

float plus(float a, float b)
{
	printf("------plus------\n");
	printf("%f + %f = %f\n", a, b, a + b);
	return a + b;
}
