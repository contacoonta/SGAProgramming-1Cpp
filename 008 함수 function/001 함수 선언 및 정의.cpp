/*
	�Լ�  function
	1. main�Լ��� ���ߵ� �ڵ带 �л�
	2. �Լ��� ���� �ڵ��� ����

	y	=	f	(	x	)
	char	main(		)
*/

#include <stdio.h>

//3. �Լ��� ����
void show(int i);
void show(float f);

char main()
{

	//1. �Լ��� �ʿ伺
	//printf("���� %d\n", 4);

	//4. �Լ��� ȣ�� ( ���� ��� )
	show(10.1f);
	show(3);
	show(3 + 10.1f);

	show(-7, 9.875);
	
	return 0;
}

//2. �Լ��� ���� ( ������ )
void show(int i)
{
	printf("------func show------\n");
	printf("���� %d\n", i);
}

/*	
	�Ǽ� ���¸� �Է¹޾� ������ش�.
*/
void show(float f)
{
	printf("------func show _ float ------\n");
	printf("�Ǽ� %.2f\n", f);
}

void show(int i, double d)
{
}
