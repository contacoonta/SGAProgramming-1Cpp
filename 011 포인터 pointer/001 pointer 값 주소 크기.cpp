/*
	Pointer : �ּҸ� ����Ų��.

	���, ����, �迭, �Լ� ...

	�ּ��� ũ��� 4byte == 32bit

	Pointer �� ũ�� ? 4byte
*/

#include <stdio.h>
void setFloat(float * pf, float f);

void main()
{
	char ch = 'c';
	char * pch = &ch;
	
	printf("ch �� �� = %c, �ּ� = %p\n", ch, &ch);
	printf("pch �� �� = %p\n", pch);
	printf("pch �� �ּ� = %p\n", &pch);
	*pch = 'f';
	printf("ch �� �� = %c\n", ch);

	//ũ�� ��
	printf("ch�� ũ�� = %d\n", sizeof(ch));
	printf("pch�� ũ�� = %d\n", sizeof(pch));

	//
	float fnum = 3.14f;
	float * pfnum = &fnum;
	printf("fum = %f\n", fnum);

	//�Լ��� ����� ����
	setFloat(pfnum, 9.1f);
	printf("fum = %f\n", fnum);
}

void setFloat(float * pf, float f)
{
	*pf = f;
}
