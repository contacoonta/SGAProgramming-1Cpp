/*
	�Լ� �����͸� Ȱ���� ����

	3.14f, 7.2f

	switch(���꼱��) �� �����ϸ� 
	�Լ������Ϳ� �ش� �Լ� ����
	
	1����
	2����
	3����
	4������

	0���� .. ����ϱ�
*/

#include <stdio.h>

//�Լ� ������ ����� ���ÿ� �ʱ�ȭ
float(*pfunc)(float, float) = nullptr;

float plus(float a, float b);
float minus(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);
float average(float a, float b);


void main()
{
	int nsel = 0;

	while (true)
	{
		printf("���� ���� : ");
		fflush(stdin);
		scanf("%d", &nsel);

		switch (nsel)
		{
		case 1:
			pfunc = &plus;
			printf("plus ����\n");
			break;
		
			//...

		case 0:
			pfunc(3.14f, 7.2f);
			break;
		}
	}

}

float plus(float a, float b)
{
	printf("------plus------\n");
	printf("%f + %f = %f\n", a, b, a + b);
	return a + b;
}
