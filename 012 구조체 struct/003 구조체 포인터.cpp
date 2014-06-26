

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

// ����ü�� ���� ���·� �Լ����� ���� ( ���̴� )
POINT MinusPoint(POINT p1, POINT p2);
// ����ü�� �ּ��� ���·� �Լ����� ���� ( ������ )
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

	//1. �Լ�ȭ
	p3 = MinusPoint(p1, p2);
	printf("p3 = %f, %f\n", p3.x, p3.y);

	
	// POINT ����ü�� ���� ������ ���
	p3 = MinusPoint(&p2, &p1);
	p3.show();
}

//����ü �� , ����ü ���� ������ ����  (  .  )
POINT MinusPoint(POINT p1, POINT p2)
{
	POINT p3;
	p3.x = p1.x - p2.x;
	p3.y = p1.y - p2.y;
	return p3;
}

//����ü �ּ� �����϶� , ����ü ���� ������ �����Ҷ� (   ->    )
POINT MinusPoint(POINT * p1, POINT * p2)
{
	POINT p3;
	p3.x = p1->x - p2->x;
	p3.y = p1->y - p2->y;
	return p3;
}