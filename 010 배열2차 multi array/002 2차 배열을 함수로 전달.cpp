/*
		
*/

#include <stdio.h>

void show(int table[]);
void show(int table[][4]);
void show3(int (*table)[4]);

void main()
{
	int table1[] = { 1, 2, 3, 4 };

	int table2[][4] = { 11, 12, 13, 14,
						21, 22, 23, 24,
						31, 32, 33, 34 };

	show(table1);
	show(table2);
	show3(table2);
}

// 1차 배열 함수인자로 전달
void show( int table[] )
{
	printf("-----------array1------------\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", table[i]);
	}
}

//2차 배열 함수인자로 전달
void show(int table[][4])
{
	printf("-----------array2------------\n");
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			printf("%3d", table[row][column]);
		}
		printf("\n");
	}
}

//2차 배열 함수인자로 전달 (2번째 방법)
//array[][4]  ->  (*array)[4]
void show3(int (*table)[4])
{
	printf("-----------array3------------\n");
	for (int row = 0; row < 3; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			printf("%3d", table[row][column]);
		}
		printf("\n");
	}
}