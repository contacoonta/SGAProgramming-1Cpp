/*
	���� ���� 6�� �߻�
	�迭1�� ����
	�迭2�� �������� ����

	3 6 7 1 4 --> �迭 1 ( ���迭 )
	4 1 7 6 3 --> �迭 2 ( ���迭 )

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