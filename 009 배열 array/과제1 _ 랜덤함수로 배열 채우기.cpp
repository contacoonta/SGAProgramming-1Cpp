/*
	int nums[3] = ��������
	
	�迭���� 3 ����
	�������� 0 ~ 9
	RandomArray( nums[] );
	ShowArray( nums[] );
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int nums[]);
void ShowArray(int nums[]);

void main()
{
	//�õ�� �ѹ��� ȣ��
	srand(time(NULL));

	int nums[3] = {};
	
	RandomArray( nums );
	ShowArray( nums );
}

void RandomArray(int nums[])
{
	for (int i = 0; i < 3; i++)
	{
		nums[i] = rand() % 10;
	}
}

void ShowArray(int nums[])
{
	for (int i = 0; i < 3; i++)
	{
		printf("nums[%d] = %d\n", i, *(nums+i));
	}
}