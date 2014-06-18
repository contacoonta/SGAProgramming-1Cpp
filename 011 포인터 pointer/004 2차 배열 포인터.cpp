/*
	2�� �迭 ������

	(*array)[5] = array[][5]
*/

#include <stdio.h>

void show(int(*ptable)[4], int vert, int horz);
void show(int(*ptable)[4]);

void main()
{
	int table[3][4] = { 1, 2, 7, 4,
						5, 6, 7, 8,
						9, 10, 11, 12 };

	//ù��° ���� �ּҸ� �����Ϳ� ����
	int (*pRow1) = table[0];
	printf("%d\n", *pRow1);
	//ù��° ���� 3�� ��� �Ϸ���..
	printf("%d\n", *(pRow1 + 2));
	printf("%d\n", pRow1[8]);
	//printf("%d\n", pRow1[2][2]);

	int (*ptable)[4] = table;
	// ptable�� (1��,2��) �� ���� ��� 
	printf("%d\n", ptable[1][2]);

	// �Լ��� �����
	show(ptable, 2, 2);
	show(ptable);
}

void show(int(*ptable)[4], int vert, int horz)
{
	printf("-------show--------\n");
	printf("%d\n", ptable[vert][horz]);
}

void show(int(*ptable)[4])
{
	printf("-------show table--------\n");
	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3d", ptable[vert][horz]);
		}
		printf("\n");
	}
}