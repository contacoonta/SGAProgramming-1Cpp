/*
	2차 배열 포인터

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

	//첫번째 행의 주소를 포인터에 전달
	int (*pRow1) = table[0];
	printf("%d\n", *pRow1);
	//첫번째 행의 3을 출력 하려면..
	printf("%d\n", *(pRow1 + 2));
	printf("%d\n", pRow1[8]);
	//printf("%d\n", pRow1[2][2]);

	int (*ptable)[4] = table;
	// ptable로 (1행,2열) 의 값을 출력 
	printf("%d\n", ptable[1][2]);

	// 함수로 만들기
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