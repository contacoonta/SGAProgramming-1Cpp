/*
	Struct
	�迭���� ������ ]
	1. �ٸ� �ڷ����鵵 �󸶵��� ���� �� �ִ�.
	2. ���ӵ� �ּ� ���¸� ���´�. ( �迭�� ���� )
*/

#include <stdio.h>


struct profile	// ����ü �̸�
{
	int nAge = 22;
	int nPhone = 12345678;
	int nGender = 1;
	float fHeight = 0.0f;


};

void main()
{
	//���� ���� ���� ����
	/*int nAge = 22;
	int nPhone = 12345678;
	int nGender = 1;*/
	
	//���� �������� �ϳ��� ���´�.

	//1. ����ü ���� �� �ʱ�ȭ
	profile lsh;

	lsh.fHeight = 175.5f;

	printf("Age = %d\n", lsh.nAge);
	printf("Phone = %d\n", lsh.nPhone);
	printf("Gender = %d\n", lsh.nGender);
	printf("Height = %f\n", lsh.fHeight);
	

	//2. ����ü ũ��
	printf("����ü ũ�� = %d\n", sizeof(profile));

	//3. ����ü ���� �������� �ּҰ� �������ΰ� ?
	printf("Age �ּ� = %p\n", &(lsh.nAge));
	printf("Phone �ּ� = %p\n", &(lsh.nPhone));
	printf("Gender �ּ� = %p\n", &(lsh.nGender));
	printf("Height �ּ� = %p\n", &(lsh.fHeight));

	// [[����]]
	auto ptr = &(lsh.nAge);
	printf("Gender �� = %d\n", ptr[2]);
	printf("Height �� = %f\n", *((float*)(ptr+3)));
}