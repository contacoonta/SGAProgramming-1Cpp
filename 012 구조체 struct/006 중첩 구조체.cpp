/*
	��ø ����ü ( ����ü ���� ����ü )
*/

#include <stdio.h>

struct POINT
{
	float fx;
	float fy;

	void show()
	{
		printf("��ǥ = %f, %f\n", fx, fy);
	}

	void setPos( float x, float y )
	{
		fx = x;
		fy = y;
	}
};

struct CHARACTER
{
	POINT startPos;
	POINT currentPos;	

	void show()
	{
		printf("-----������ġ-----\n");
		startPos.show();
		printf("-----������ġ-----\n");
		currentPos.show();
	}
};


void showCharacter(CHARACTER * pc);

void main()
{
	CHARACTER enemy1 = { { 0.0f, 0.0f }, { 1.0f, 1.0f } };

	enemy1.startPos.show();	

	//1. postion �� ���ϴ� ������ �ٲٴ� �Լ�
	enemy1.currentPos.setPos(3, 5);
	//enemy1.currentPos.show();

	//2. enemy1 �� ���� ��ġ�� ���� ��ġ�� ����ϴ� �Լ�
	//showCharacter(&enemy1);

	//3. ���� showCharacter �Լ��� enemy1 ����ü ���ο��� ����
	enemy1.show();
}


void showCharacter(CHARACTER * pc)
{
	printf("-------ĳ���� ����--------\n");

	printf("������ġ ] \n");
	pc->startPos.show();

	printf("������ġ ] \n");
	pc->currentPos.show();
}