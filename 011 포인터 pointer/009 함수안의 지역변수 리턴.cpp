/*
	�Լ� ������ ������ ������ ��ȯ
*/
#include <stdio.h>

char keyInput();
int* localArray();

void main()
{
	/*char chkey = keyInput();
	printf("%c\n", chkey);*/

	int* parray = localArray();
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", parray[i]);
	}
}

char keyInput()
{
	char ch = 0;
	scanf("%c", &ch);
	return ch;
}

int* localArray()
{
	// ���������� static ���� ���������� ����� ���α׷��� �����ֱ⸦ ���� �Ѵ�.
	static int table[] = { 11, 12, 13, 14 };
	return table;
}