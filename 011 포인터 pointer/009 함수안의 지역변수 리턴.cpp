/*
	함수 내부의 변수를 밖으로 반환
*/
#include <stdio.h>

char keyInput();
int* localArray();

void main()
{
	/*char chkey = keyInput();
	printf("%c\n", chkey);*/

	int* parray = localArray();
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", parray[i]);
	}
}

char keyInput()
{
	char ch = 0;
	scanf("%c", &ch);
	return ch;
}

int* localArray()
{
	// 지역변수를 static 으로 정적변수로 만들어 프로그램과 생명주기를 같게 한다.
	static int table[] = { 11, 12, 13, 14 };
	return table;
}