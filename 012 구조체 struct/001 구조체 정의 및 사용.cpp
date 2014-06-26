/*
	Struct
	배열과의 차이점 ]
	1. 다른 자료형들도 얼마든지 묶을 수 있다.
	2. 연속된 주소 형태를 갖는다. ( 배열과 동일 )
*/

#include <stdio.h>


struct profile	// 구조체 이름
{
	int nAge = 22;
	int nPhone = 12345678;
	int nGender = 1;
	float fHeight = 0.0f;


};

void main()
{
	//기존 변수 정의 형식
	/*int nAge = 22;
	int nPhone = 12345678;
	int nGender = 1;*/
	
	//위의 변수들을 하나로 묶는다.

	//1. 구조체 선언 및 초기화
	profile lsh;

	lsh.fHeight = 175.5f;

	printf("Age = %d\n", lsh.nAge);
	printf("Phone = %d\n", lsh.nPhone);
	printf("Gender = %d\n", lsh.nGender);
	printf("Height = %f\n", lsh.fHeight);
	

	//2. 구조체 크기
	printf("구조체 크기 = %d\n", sizeof(profile));

	//3. 구조체 내부 변수들의 주소가 연속적인가 ?
	printf("Age 주소 = %p\n", &(lsh.nAge));
	printf("Phone 주소 = %p\n", &(lsh.nPhone));
	printf("Gender 주소 = %p\n", &(lsh.nGender));
	printf("Height 주소 = %p\n", &(lsh.fHeight));

	// [[참고]]
	auto ptr = &(lsh.nAge);
	printf("Gender 값 = %d\n", ptr[2]);
	printf("Height 값 = %f\n", *((float*)(ptr+3)));
}