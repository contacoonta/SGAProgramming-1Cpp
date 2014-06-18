/*
	랜덤 숫자 6개 발생
	배열1에 삽입
	배열2에 역순으로 삽입

	3 6 7 1 4 --> 배열 1 ( 정배열 )
	4 1 7 6 3 --> 배열 2 ( 역배열 )

	ex)
	srand(509);
	
	int nrandom = rand();
	nrandom = rand();
	nrandom = rand();
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int nums1[6] = {};
	int nums2[6] = {};

	srand(509);
	for (int i = 0; i < 6; i++)
	{
		nums1[i] = rand() % 10;
	}

	for (int x : nums1)
	{
		printf("%d ", x);
	}

	printf("\n-----------------------\n");

	for (int a = 0, b = 5; a < 6, b >= 0; a++, b--)
	{
		nums2[b] = nums1[a];
	}

	for (int x : nums2)
	{
		printf("%d ", x);
	}



	return 0;
}