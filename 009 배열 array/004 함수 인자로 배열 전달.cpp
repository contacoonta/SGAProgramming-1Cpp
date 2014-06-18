/*

	함수 인자
	- 값을 전달.
	- 주소를 전달.
*/
#include <stdio.h>
void func1(int nums[], int n);
void show(int nums[], int size);

void main()
{
	int nums[4] = {};

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 4;

	//nums[0];	// 값
	//&nums[0];	// 주소
	//(nums + 0);	// 주소
	//*(nums + 0);// 값
	
	// nums 배열의 값들을 3씩 증가
	//func1(nums, 3);	
	
	// 총크기 = 16 단위크기 = 4  16 / 4 = 총개수
	printf("size = %d\n",sizeof(nums));
	printf("count = %d\n", sizeof(nums) / sizeof(int));
						
	// nums 배열의 값들을 출력
	show(nums, sizeof(nums) / sizeof(int));
}

// nums 의 각 요소들을 n씩 증가
void func1(int nums[], int n)
{
	nums[0] += n;
	nums[1] += n;
	nums[2] += n;
	nums[3] += n;
}

//			시작주소, 크기
void show(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(" nums[%d] = %d\n", i, nums[i]);
	}
}

/*
	nums[] 을 함수를 통해 값을 넣기.
*/