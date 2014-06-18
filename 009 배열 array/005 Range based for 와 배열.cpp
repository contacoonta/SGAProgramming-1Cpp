/*
	[c++ 11]
	range based for
	- 배열의 위한 반복문

	int array[10];
*/
#include <stdio.h>

void show(int nums[]);

void main()
{
	int nums[5] = {10,-2,-3,24,55};

	printf("size = %d\n", sizeof(nums));
	for (int i : nums)
	{
		printf("%d\n", i);
	}

	show(nums);
}

void show(int nums[])
{
	printf("size = %d\n", sizeof(nums));
	/*for (int x : nums)
	{
		printf("%d\n", x);
	}*/
}