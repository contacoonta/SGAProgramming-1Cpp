/*
	배열 선언, 초기화

	주소를 확인  & (뒤에 값)
*/
#include <stdio.h>
void main()
{
	int nums[5] = {0,1,0,1,0};

	//초기화 
	/*nums[0] = 0;
	nums[1] = 0;
	nums[2] = 0;
	nums[3] = 0;
	nums[4] = 0;*/
	//배열의 값을 확인
	for (int i = 0; i < 5; i++) 
	{
		printf("nums[%d] = %d\n", i, nums[i]);
	}
	printf("--------addr1--------\n");
	//배열의 주소를 확인
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d] = %p\n", i, &nums[i]);
	}
	printf("--------addr2--------\n");
	//배열의 주소를 확인 2
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d] = %p\n", i, (nums + i) );
	}
}