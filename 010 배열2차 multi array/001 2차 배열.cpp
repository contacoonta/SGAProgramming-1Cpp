/*
	2�� (������) �迭	 : Multi Array

	��	: ����	: Row		: Vertical
	��	: ����	: Column	: Horizontal

	int Array[��][��]
*/

#include <stdio.h>

void main()
{
	int table[3][4] = { { 0, 1, 2, 3 },
						{ 4, 5, 6, 7 },
						{ 8, 9, 10,11 } };

	//2�� �迭 ���� ���
	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3d ", table[vert][horz]);
		}//column
		printf("\n");
	}//row


	//2�� �迭 �ּ� ���
	for (int vert = 0; vert < 3; vert++)
	{
		for (int horz = 0; horz < 4; horz++)
		{
			printf("%3x ", &(table[vert][horz]));
		}//column
		printf("\n");
	}//row

	printf("---------for--------\n");

	for (int i = 0; i < 12; i++)
	{
		printf("%d ", *(table[0] + i));
	}
	printf("\n");
}

/*
	
*/