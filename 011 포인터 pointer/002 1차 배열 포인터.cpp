/*
	1�� �迭 ������
*/

#include <stdio.h>

#define HANDLE_A int*
#define PI		3.141592
#define G		9.18

const float cpi	= 3.1415f;

void show(HANDLE_A pnums, int nsize);

void main()
{
	int nums[5] = { 1, 2, 3, 4, 5, };

	//�迭�� ���� �ּ� �� �����Ϳ� ����.

	HANDLE_A pnums = nums;

	printf("nums[2] = %d\n",		nums[2]);
	printf("pnums[2] = %d\n",		pnums[2]);
	printf("*(pnums+2) = %d\n",		*(pnums+2));

	//nums �� �׹�° ���� �ּҸ�  pnums ����
//	pnums = &nums[3];
	printf("*pnums = %d\n", *pnums);
	printf("pnums[0] = %d\n", pnums[0]);
	//pnums �� nums �� �� 2�� �������� ����
	printf("pnums[-2] = %d\n", pnums[-2]);
	
	//�ݺ������� pnums �� ���� ���
	show(pnums, sizeof(nums)/sizeof(int));
}

void show(HANDLE_A pnums, int nsize)
{
	for (int i = 0; i < nsize; i++)
	{
		printf("������ �迭 pnums[%d] = %d\n",
			i, pnums[i] );
	}

	printf("\n");
}