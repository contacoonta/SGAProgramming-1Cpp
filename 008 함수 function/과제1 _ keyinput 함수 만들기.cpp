/*
	�Լ� �����
	���� �ΰ��� �־ 
	additive		
	subtract
	multiply
	divide
	����� �������� ������
*/

#include <stdio.h>

float divide(int a, int b);

void main()
{
	int a = 0, b = 0;

	printf("�� ���� �Է� : ");
	scanf("%d %d", &a, &b);

	//1.
	//a / b;
	float f = divide(a, b);
	printf("��� = %f\n", f );
}

float divide(int a, int b)
{
	float fresult = float(a) / float(b);
	return fresult;
}





/*
	char = keyInput()

	Ű�� �Է� : ___
	�Է��� Ű�� �����ϰ�..

	show( char )	���� 1��
	���...
*/