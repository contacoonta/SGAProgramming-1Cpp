/*
*/

#include <stdio.h>

void show(char* pstr, int offset);
void show2(char pstr[], int offset);

void main()
{
	char str[] = "korea vs russia";
	
	//printf(pstr);
	// vs russia 만 나오게 출력
	int nOffset = 6;
//	char *pstr = str + nOffset;
//	printf("%s\n", pstr);

	//함수로 만들어 보기
//	char *pstr2 = str;
	printf("str 주소 = %p\n", str);
	show(str, nOffset);

	show2(str, 0);
}

void show(char* pstr, int offset)
{
	printf("%s\n", pstr + offset);
}

void show2(char pstr[], int offset)
{
	printf("pstr 주소 = %p\n", pstr);
}