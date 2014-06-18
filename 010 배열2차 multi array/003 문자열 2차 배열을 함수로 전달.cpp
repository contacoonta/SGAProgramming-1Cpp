#include <stdio.h>

void showStr(char str[]);
void showStr1(char(*str));

void showStr2(char str[][30]);
void showStr3(char (*str)[30]);

int main()
{
	char str1[] = "2014 brazil worldcup";
	showStr(str1);

	char str2[][30] = {	"korea riudezaneiru",
						"russi brasilia",
						"belgi santos",
						"japan saopaulo" };

	
	printf("%s\n", str2[0]);
	printf("%s\n", *(str2+2) );
	// �Լ��� ����

	showStr2(str2);
	showStr3(str2);
	
	return 0;
}

//1 ���ڿ� 1�� �迭 �Լ��� ����
void showStr(char str[])
{
	printf("%s\n", str);
}

//char str[] -> char (*str)
void showStr1(char (*str))
{
	printf("%s\n", str);
}


//2 ���ڿ� 2�� �迭 �Լ��� ����
void showStr2(char str[][30])
{
	printf("--------------showStr2-------------\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", str[i]);
	}
}

void showStr3(char (*str)[30])
{
	printf("--------------showStr3-------------\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", *(str + i) + 6 );
	}
}