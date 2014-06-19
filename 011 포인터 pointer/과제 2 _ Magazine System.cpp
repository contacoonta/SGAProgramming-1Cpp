/* ���� ]]
	źâ �ý���.. (Magazine System)
	1. rifle	30
	2. pistol	7
	3. knife	infinite
	4. grenade	2

	r. reload 

	�߻� ��ư.. SPACEBAR

	���� ������ ������ �Ѿ��� �Ҹ�

	�Լ� ������ Ȱ�� 
	tip ] ź�� �� static or �迭 Ȱ��
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int nMaxAmmos[4] = { 30, 7, 100, 2 };	// ������ �ִ� �Ѿ� ��
int nCurAmmos[4] = { 30, 7, 100, 2 };	// ������ ���� �Ѿ� ��
void(*pfire)(bool breload) = nullptr;
void weaponRifle(bool breload);
void weaponPistol(bool breload);
void weaponKnife(bool breload);
void weaponGrenade(bool breload);

void main()
{
	printf("���� ���� : 1. Rifle, 2. Pistol, 3. Kinfe, 4. Grenade\n");
	printf("           r.������, esc. ����\n");

	char chkey = 0;
	do
	{		
		// Ű �Է��� ������ ó��, �ƴϸ� �н� ( Non-blocking )
		chkey = getch();

		switch (chkey)
		{
		case '1':
			printf("Rifle ����\n");
			pfire = weaponRifle;
			break;
		case '2':
			printf("Pistol ����\n");
			pfire = weaponPistol;
			break;
		case '3':
			printf("Knife ����\n");
			pfire = weaponKnife;
			break;
		case '4':
			printf("Grenade ����\n");
			pfire = weaponGrenade;
			break;
		case 0x20 : // space Ű �߻�
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
			printf("�߸��� ��ɾ�\n");
			break;
		}//switch

	} while (chkey != 0x1b );	// esc Ű ����
}

void weaponRifle(bool breload)
{
	static int curAmmo = nMaxAmmos[0];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[0];
		printf("Rifle �Ѿ� ������ ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Rifle �Ѿ��� �����ϴ�. %d\n", curAmmo);
		return;
	}

	printf("Rifle �߻� ! %d\n", curAmmo);
}

void weaponPistol(bool breload)
{
	static int curAmmo = nMaxAmmos[1];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[1];
		printf("Pistol �Ѿ� ������ ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Pistol �Ѿ��� �����ϴ�. %d\n", curAmmo);
		return;
	}
	printf("Pistol �߻� ! %d\n", curAmmo);
}

void weaponKnife(bool breload)
{
	printf("Knife �ֵθ��� ! ������!\n");
}

void weaponGrenade(bool breload)
{
	static int curAmmo = nMaxAmmos[3];
	
	if (breload)
	{
		curAmmo = nMaxAmmos[3];
		printf("Grenade ������ ... %d\n", curAmmo);
		return;
	}
	if (curAmmo-- <= 0)
	{
		curAmmo = 0;
		printf("Grenade �� �����ϴ�. %d\n", curAmmo);
		return;
	}
	printf("Grenade �߻� ! %d\n", curAmmo);
}