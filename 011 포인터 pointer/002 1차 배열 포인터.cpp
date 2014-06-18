/*
	1차 배열 포인터
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

	//배열의 시작 주소 를 포인터에 전달.

	HANDLE_A pnums = nums;

	printf("nums[2] = %d\n",		nums[2]);
	printf("pnums[2] = %d\n",		pnums[2]);
	printf("*(pnums+2) = %d\n",		*(pnums+2));

	//nums 의 네번째 값의 주소를  pnums 전달
//	pnums = &nums[3];
	printf("*pnums = %d\n", *pnums);
	printf("pnums[0] = %d\n", pnums[0]);
	//pnums 로 nums 의 값 2가 나오도록 접근
	printf("pnums[-2] = %d\n", pnums[-2]);
	
	//반복문으로 pnums 의 값들 출력
	show(pnums, sizeof(nums)/sizeof(int));
}

void show(HANDLE_A pnums, int nsize)
{
	for (int i = 0; i < nsize; i++)
	{
		printf("포인터 배열 pnums[%d] = %d\n",
			i, pnums[i] );
	}

	printf("\n");
}