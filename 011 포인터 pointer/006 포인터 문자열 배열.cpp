/*
	포인터 문자 배열
*/

#include <stdio.h>

int main()
{
	char* pstr[4] = {};

	char Korea[] = "Korea";
	char Belgium[] = "Belgium";
	char Russia[] = "Russia";
	char Algeria[] = "Algeria";

	pstr[0] = Korea;
	pstr[1] = Belgium;
	pstr[2] = Russia;
	pstr[3] = Algeria;

	char USA[] = "USA";
	pstr[2] = USA;

	//printf("");
	//show(pstr);
}