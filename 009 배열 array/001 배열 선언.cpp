/*
	�迭	 Array
	1. ���ӵ� �ּ�
	2. ���� ������ Ÿ��
*/

#include <stdio.h>

void main()
{
	int a=1, b=2;

	printf("�ּ� = %p\n", &a);
	printf("�ּ� = %p\n", &b);

	printf("------------------\n");
	//�迭�� �ּҴ� ���������� �����Ѵ�. ( ���� )
	int c[3];
	printf("�ּ� = %p\n", &c[0]);
	printf("�ּ� = %p\n", &c[1]);
	printf("�ּ� = %p\n", &c[2]);
}