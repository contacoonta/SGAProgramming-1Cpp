/*

	�Լ� ����
	- ���� ����.
	- �ּҸ� ����.
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

	//nums[0];	// ��
	//&nums[0];	// �ּ�
	//(nums + 0);	// �ּ�
	//*(nums + 0);// ��
	
	// nums �迭�� ������ 3�� ����
	//func1(nums, 3);	
	
	// ��ũ�� = 16 ����ũ�� = 4  16 / 4 = �Ѱ���
	printf("size = %d\n",sizeof(nums));
	printf("count = %d\n", sizeof(nums) / sizeof(int));
						
	// nums �迭�� ������ ���
	show(nums, sizeof(nums) / sizeof(int));
}

// nums �� �� ��ҵ��� n�� ����
void func1(int nums[], int n)
{
	nums[0] += n;
	nums[1] += n;
	nums[2] += n;
	nums[3] += n;
}

//			�����ּ�, ũ��
void show(int nums[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(" nums[%d] = %d\n", i, nums[i]);
	}
}

/*
	nums[] �� �Լ��� ���� ���� �ֱ�.
*/