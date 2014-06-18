/*
	ǥ�� ���̺귯�� �Լ� ( Standard Library Function )
	�ð� ���
*/


#include <stdio.h>
#include <time.h>

bool Alarm(const time_t begin, int secondAlarm);

void main()
{
	/*time_t result = time(NULL);
	printf("����ð� = %u\n", result);
	printf("����ð� = %s\n", asctime(localtime(&result)));*/

	const time_t timeBegin = time(NULL);	// ����(����) �ð�

	while (true)
	{
		if (Alarm(timeBegin, 2))
		{
			printf("%d �ʰ� ���..\n", 2);
			break;
		}
	}//while()
}

// bool : 1byte ( true, false )
bool Alarm(const time_t begin, int secondAlarm)
{
	time_t timeCurrent = time(NULL);	// ���� �ð��� ��������

	if (timeCurrent - begin >= secondAlarm) 
	{
		return true;
	}

	return false;
}



/*
	����� �ð��� �����ִ� �Լ�
	����ð� üũ
	5�ʰ� ������ .. �˶�
*/