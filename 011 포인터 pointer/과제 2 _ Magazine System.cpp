/* 과제 ]]
	탄창 시스템.. (Magazine System)
	1. rifle	30
	2. pistol	7
	3. knife	infinite
	4. grenade	2

	r. reload 

	발사 버튼.. SPACEBAR

	현재 선택한 무기의 총알이 소모

	함수 포인터 활용 
	tip ] 탄알 은 static or 배열 활용
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int nMaxAmmos[4] = { 30, 7, 100, 2 };	// 무기의 최대 총알 수
int nCurAmmos[4] = { 30, 7, 100, 2 };	// 무기의 현재 총알 수
void(*pfire)(bool breload) = nullptr;
void weaponRifle(bool breload);
void weaponPistol(bool breload);
void weaponKnife(bool breload);
void weaponGrenade(bool breload);

void main()
{
	printf("무기 선택 : 1. Rifle, 2. Pistol, 3. Kinfe, 4. Grenade\n");
	printf("           r.재장전, esc. 종료\n");

	char chkey = 0;
	do
	{		
		// 키 입력을 받으면 처리, 아니면 패스 ( Non-blocking )
		chkey = getch();

		switch (chkey)
		{
		case '1':
			printf("Rifle 선택\n");
			pfire = weaponRifle;
			break;
		case '2':
			printf("Pistol 선택\n");
			pfire = weaponPistol;
			break;
		case '3':
			printf("Knife 선택\n");
			pfire = weaponKnife;
			break;
		case '4':
			printf("Grenade 선택\n");
			pfire = weaponGrenade;
			break;
		case 0x20 : // space 키 발사
			if (pfire != nullptr) {
				pfire(false);
			}
			break;
		case 'r':
		case 'R':	//reload
			if (pfire != nullptr) {
				pfire(true);
			}
			break;
		default:
			printf("잘못된 명령어\n");
			break;
		}//switch

	} while (chkey != 0x1b );	// esc 키 종료
}

void weaponRifle(bool breload)
{
	static int curAmmo = nMaxAmmos[0];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[0];
		printf("Rifle 총알 재장전 ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Rifle 총알이 없습니다. %d\n", curAmmo);
		return;
	}

	printf("Rifle 발사 ! %d\n", curAmmo);
}

void weaponPistol(bool breload)
{
	static int curAmmo = nMaxAmmos[1];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[1];
		printf("Pistol 총알 재장전 ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Pistol 총알이 없습니다. %d\n", curAmmo);
		return;
	}
	printf("Pistol 발사 ! %d\n", curAmmo);
}

void weaponKnife(bool breload)
{
	printf("Knife 휘두르기 ! 무제한!\n");
}

void weaponGrenade(bool breload)
{
	static int curAmmo = nMaxAmmos[3];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[3];
		printf("Grenade 재장전 ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Grenade 가 없습니다. %d\n", curAmmo);
		return;
	}
	printf("Grenade 발사 ! %d\n", curAmmo);
}