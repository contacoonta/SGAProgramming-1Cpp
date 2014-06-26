

#include <stdio.h>

struct POINT
{
	float x;
	float y;

	void show()
	{
		printf("-----POINT show-----\n");
		printf("X = %f, Y = %f\n", x, y);
	}
};

// 구조체의 값의 형태로 함수인자 전달 ( 무겁다 )
POINT MinusPoint(POINT p1, POINT p2);
// 구조체의 주소의 형태로 함수인자 전달 ( 가볍다 )
POINT MinusPoint(POINT * p1, POINT * p2);

void main()
{
	POINT p1 = { 3, 4 };
	POINT p2 = { 11, 13 };
	POINT p3;

	/*p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	printf("p3 = %f, %f\n", p3.x, p3.y);*/

	p1.show();
	p2.show();

	//1. 함수화
	p3 = MinusPoint(p1, p2);
	printf("p3 = %f, %f\n", p3.x, p3.y);

	
	// POINT 구조체의 내부 변수들 출력
	p3 = MinusPoint(&p2, &p1);
	p3.show();
}

//구조체 값 , 구조체 내부 데이터 접근  (  .  )
POINT MinusPoint(POINT p1, POINT p2)
{
	POINT p3;
	p3.x = p1.x - p2.x;
	p3.y = p1.y - p2.y;
	return p3;
}

//구조체 주소 형태일때 , 구조체 내부 데이터 접근할때 (   ->    )
POINT MinusPoint(POINT * p1, POINT * p2)
{
	POINT p3;
	p3.x = p1->x - p2->x;
	p3.y = p1->y - p2->y;
	return p3;
}