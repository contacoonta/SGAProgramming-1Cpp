/*

�ѱ��ھ� Ÿ�����ؼ� Ʋ���κ��� ���� ����.

��)
�־��� ����	] a rolling stone gathers no moss
Ÿ����		] a r_ll_ng s_one gathers no moss

�⺻ ] �� ���ڰ� Ʋ�Ƚ��ϴ�. :: ___

Ȯ�� ] Ÿ���� �Ϸ���� �ɸ��ð� :: ___


���� >> ���� ������ ���ڿ� �Է�
scanf("%[^\n]", string);

*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main()
{
	int nDifferentCnt = 0;			//Ʋ�� ���� ��
	unsigned int nElapsedTime = 0;	//�ɸ� �ð�

	// �־��� ���ڿ�
	char str1[] = "a rolling stone gathers no moss";
	// Ÿ������ ���ڿ�
	char str2[50] = {};

	printf("�غ�Ǹ� \"����\" �����ּ���\n");
	int ch = 0;
	scanf("%c", &ch);
	//ȭ���� �����ϰ� ����� ����
	system("cls");

	printf("%s\n", str1 );
	//�Է½��� �ð�
	unsigned int beginTime = time(NULL);
	scanf("%[^\n]", str2);
	//�Է����� �ð�
	unsigned int endTime = time(NULL);
	//�� �ɸ��ð� ���
	nElapsedTime = endTime - beginTime;

	for (int i = 0; i < (sizeof(str1) / sizeof(char)); i++)
	{
		if (str1[i] != str2[i])
		{
			nDifferentCnt++;
		}
	}//for

	printf("Ʋ�� ���� �� = %d\n", nDifferentCnt);
	printf("Ÿ���� �Ϸ� �ð� = %d\n", nElapsedTime);
}




