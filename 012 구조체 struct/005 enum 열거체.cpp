/*
	¿­°ÅÃ¼ enum
	- enumerate
*/

#include <stdio.h>

enum week { Monday = 10, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };
enum weapon { Rifle, Pistol, Knife, Grenade, weaponMAX };

void main()
{
	int weekend[7] = {};

	weekend[2] = 32;
	weekend[Wednesday] = 32;

	int day = week::Saturday;
	printf("day = %d\n", day);



	int Magazine[weaponMAX];

	Magazine[weapon::Grenade];
}
