/*
	����� ������ ũ��
	sizeof
*/

#include <stdio.h>

int main()
{
	printf("���� %d �� ũ�� = %d\n", 24, sizeof(24));
	// 1.54f
	printf("�Ǽ� %.2f �� ũ�� = %d\n", 1.54f, sizeof(1.54f));
	// 1.54
	printf("�Ǽ� %.2f �� ũ�� = %d\n", 1.54, sizeof(1.54));
	// 'y'
	printf("���Ϲ��� %c �� ũ�� = %d\n", 'y', sizeof('y'));
	// "xy"
	printf("���ڿ� %s �� ũ�� = %d\n", "xy", sizeof("xy"));

	return 0;
}