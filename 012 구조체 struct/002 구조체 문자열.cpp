/*
	1.구조체 안에 문자열
	2.구조체 안에 함수
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

	//1. hazard 구조체 의 값 출력
	/*printf("age = %d\n", Hazard.nAge);
	printf("name = %s\n", Hazard.name);*/

	//2. hazard 구조체의 이름을 scanf 로 변경
	//scanf("%s", Hazard.name);
	//printf("name = %s\n", Hazard.name);

	//3. show() 함수로 구조체 안의 값 출력
	Hazard.show();
}