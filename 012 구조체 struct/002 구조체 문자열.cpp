/*
	1.����ü �ȿ� ���ڿ�
	2.����ü �ȿ� �Լ�
*/

#include <stdio.h>

struct PROFILE
{
	int		nAge;
	char	name[20];

	void	show()
	{
		printf("--------PROFILE SHOW----------\n");
		printf("Age = %d\n", nAge);
		printf("name = %s\n", name);
	}
};

void main()
{
	PROFILE Hazard = { 23, "hazard" };

	//1. hazard ����ü �� �� ���
	/*printf("age = %d\n", Hazard.nAge);
	printf("name = %s\n", Hazard.name);*/

	//2. hazard ����ü�� �̸��� scanf �� ����
	//scanf("%s", Hazard.name);
	//printf("name = %s\n", Hazard.name);

	//3. show() �Լ��� ����ü ���� �� ���
	Hazard.show();
}