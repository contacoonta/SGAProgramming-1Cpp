/*
*/

#include <stdio.h>

void show(char* pstr, int offset);
void show2(char pstr[], int offset);

void main()
{
	char str[] = "korea vs russia";
	
	//printf(pstr);
	// vs russia �� ������ ���
	int nOffset = 6;
//	char *pstr = str + nOffset;
//	printf("%s\n", pstr);

	//�Լ��� ����� ����
//	char *pstr2 = str;
	printf("str �ּ� = %p\n", str);
	show(str, nOffset);

	show2(str, 0);
}

void show(char* pstr, int offset)
{
	printf("%s\n", pstr + offset);
}

void show2(char pstr[], int offset)
{
	printf("pstr �ּ� = %p\n", pstr);
}