/*
	* ������ ( Asterisk ) �� ���� ����
	- * �ڿ��� �ݵ�� �ּ��̴�.
*/

#include <stdio.h>

void main()
{
	char nums[] = {1,2,3,4,5,6};

	printf("%d\n", nums[2]);
	printf("%p\n", &nums[3]);
	printf("%d\n", *&nums[3]);
	printf("%d\n", *(nums+2) );
}