/*
	포인터 배열
	int (*p)[3];	// 2차 배열 포인터
	(int*) p[];		// 포인터 배열
*/
#include <stdio.h>

void show(int* p[]);
void show2(int* *p);

void main()
{
	int alpha = 1, beta = 5, charlie = 8;

	// 포인터 배열
	int* p[] = { 0, 0, 0 };
	
	p[0] = &alpha;
	p[1] = &beta;
	p[2] = &charlie;

	printf("%d\n", *(p[0]));
	printf("%d\n", *(p[1]));
	printf("%d\n", *(p[2]));

	show(p);
	show2(p);
}

void show(int* p[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", *(p[i]));
	}
	printf("\n");
}

void show2(int* *p)
{
	for (int i = 0; i < 3; i++)
	{
		printf("%d ", * *(p+i));
	}
	printf("\n");
}