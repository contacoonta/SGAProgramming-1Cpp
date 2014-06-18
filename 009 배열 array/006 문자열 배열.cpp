/*
	'a' ,'b' , 'c'
	"worldcup"	문자열 끝'\0' (null문자)
*/

#include <stdio.h>

void show(char str[]);

void main()
{
	char str1[] = "worldcup";

	/*printf("%s\n", str1);
	printf("size = %d\n", sizeof(str1));*/
	show(str1);

	char str2[] = "축구팀 성적은 ?";

	/*printf("%s\n", str2);
	printf("size = %d\n", sizeof(str2));*/
	//show(str2);
}

void show(char str[])
{
	printf("----------show---------\n");
	//printf("%s\n", str);

	int i = 0;
	char ch = 0;
	while ( true )
	{
		ch = str[i];
		printf("%c ", ch);

		i++;

		if (ch == '\0')
			break;
	}
}