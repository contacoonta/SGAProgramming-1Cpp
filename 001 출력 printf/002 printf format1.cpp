/*
	y		=	f		( x )
	int			main	(	)

	main �Լ��� Ư¡
	1. �����Լ��� �ϳ��� ����.
	2. main �ҹ��ڷ� ��Ȯ�� �Է�.
*/

/*
	printf�� ���ؼ� �˾ƺ���
*/


#include <stdio.h>

int main()
{
	printf("���� ��������\n���� �ּ���\n");

	//printf("����� �Ҹ�\a\a\n");

	printf("�齺��\b�̽�\b");
	printf("��\f��\f��\n");
	printf("ĳ��\r������\n");

	printf("��\t��\t��\n");
	printf("��\v��\v��\n");

	printf(" \"ū����ǥ\" \n");
	printf(" '���� ����ǥ' \n");
	printf(" 3\\4 \n");

	return 0;
}