/*
	�迭 ����, �ʱ�ȭ

	�ּҸ� Ȯ��  & (�ڿ� ��)
*/
#include <stdio.h>
void main()
{
	int nums[5] = {0,1,0,1,0};

	//�ʱ�ȭ 
	/*nums[0] = 0;
	nums[1] = 0;
	nums[2] = 0;
	nums[3] = 0;
	nums[4] = 0;*/
	//�迭�� ���� Ȯ��
	for (int i = 0; i < 5; i++) 
	{
		printf("nums[%d] = %d\n", i, nums[i]);
	}
	printf("--------addr1--------\n");
	//�迭�� �ּҸ� Ȯ��
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d] = %p\n", i, &nums[i]);
	}
	printf("--------addr2--------\n");
	//�迭�� �ּҸ� Ȯ�� 2
	for (int i = 0; i < 5; i++)
	{
		printf("nums[%d] = %p\n", i, (nums + i) );
	}
}