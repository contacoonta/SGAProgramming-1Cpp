/*
	�Լ� ������ ( Pointer function )

	void (*func)( )
*/

#include <stdio.h>

//�Ϲ� �Լ�
char show();
int plus(int a, int b);
int multiply(int a, int b);

void main()
{
	//printf("show �Լ��� �ּ� = %p\n", &show);

	//�Լ� ������
	int (*pfunc)(int, int);
	// �Լ� �����͸� �ʱ�ȭ ���ֱ� ���� nullptr
	pfunc = nullptr;

	// �Ϲ� �Լ� ���
	//int res = plus(5, 6);

	// �Լ� �����Ϳ� �Ϲ� �Լ��� �ּҸ� ����
	//pfunc = plus;
	
	// �Լ� �����͸� ��� ( ������ �Ϲ� �Լ��� ��� )
	pfunc(5, 6);
	
}

char show()
{
	//a
	//b
	return 0;
}

int plus(int a, int b)
{
	printf("------plus �Լ�------\n");
	int c = a + b;
	printf("%d + %d = %d\n", a, b, c);
	return c;
}

int multiply(int a, int b)
{
	printf("------multiply �Լ�------\n");
	int c = a * b;
	printf("%d * %d = %d\n", a, b, c);
	return c;
}