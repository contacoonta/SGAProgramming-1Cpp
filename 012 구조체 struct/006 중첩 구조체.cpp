/*
	중첩 구조체 ( 구조체 안의 구조체 )
*/

#include <stdio.h>

struct POINT
{
	float fx;
	float fy;

	void show()
	{
		printf("좌표 = %f, %f\n", fx, fy);
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
		printf("-----시작위치-----\n");
		startPos.show();
		printf("-----현재위치-----\n");
		currentPos.show();
	}
};


void showCharacter(CHARACTER * pc);

void main()
{
	CHARACTER enemy1 = { { 0.0f, 0.0f }, { 1.0f, 1.0f } };

	enemy1.startPos.show();	

	//1. postion 을 원하는 값으로 바꾸는 함수
	enemy1.currentPos.setPos(3, 5);
	//enemy1.currentPos.show();

	//2. enemy1 의 시작 위치와 현재 위치를 출력하는 함수
	//showCharacter(&enemy1);

	//3. 위의 showCharacter 함수를 enemy1 구조체 내부에서 정의
	enemy1.show();
}


void showCharacter(CHARACTER * pc)
{
	printf("-------캐릭터 정보--------\n");

	printf("시작위치 ] \n");
	pc->startPos.show();

	printf("현재위치 ] \n");
	pc->currentPos.show();
}