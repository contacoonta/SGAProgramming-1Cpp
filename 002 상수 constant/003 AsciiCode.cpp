/*
	Ascii Code
	16진수 표현 : 0x??
*/

#include <stdio.h>
#include <conio.h>

int main()
{
	printf("%c 의 ascii code = %x\n", 'b', 'b');
	printf("16진수 %x = 문자 %c\n", 0x62, 0x62 );

	// 'S' 'G' 'A' 'P' -> Ascii code ?
	// esc , enter, spacebar, w, a, s, d
	printf("esc = %c\n", 0x1b );
	printf("enter = %c\n", 0xD );
	printf("space %c\n", 0x20);
}