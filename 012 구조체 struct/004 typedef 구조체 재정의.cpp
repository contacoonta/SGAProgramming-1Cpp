/*
	typedef 
	- ������ ���� ������ �Ҷ� ���
*/

#include <stdio.h>

typedef unsigned int UINT;
UINT num = 909090909;

//#define PI 3.14;
//#define PIS "3.141592"
//float fpi = PI;

//const float PI2 = 3.14f;
//float fpi2 = PI2;

typedef struct point
{
	float fx;
	float fy;
}POINT;

int main()
{
	point p1;
	POINT p2;

	// �����Ǹ� �� �� ���� �ִ�.
	typedef POINT poINt;
}