/*
	Pointer : 주소를 가리킨다.

	상수, 변수, 배열, 함수 ...

	주소의 크기는 4byte == 32bit

	Pointer 의 크기 ? 4byte
*/

#include <stdio.h>
void setFloat(float * pf, float f);

void main()
{
	char ch = 'c';
	char * pch = &ch;
	
	printf("ch 의 값 = %c, 주소 = %p\n", ch, &ch);
	printf("pch 의 값 = %p\n", pch);
	printf("pch 의 주소 = %p\n", &pch);
	*pch = 'f';
	printf("ch 의 값 = %c\n", ch);

	//크기 비교
	printf("ch의 크기 = %d\n", sizeof(ch));
	printf("pch의 크기 = %d\n", sizeof(pch));

	//
	float fnum = 3.14f;
	float * pfnum = &fnum;
	printf("fum = %f\n", fnum);

	//함수로 만들어 보기
	setFloat(pfnum, 9.1f);
	printf("fum = %f\n", fnum);
}

void setFloat(float * pf, float f)
{
	*pf = f;
}
