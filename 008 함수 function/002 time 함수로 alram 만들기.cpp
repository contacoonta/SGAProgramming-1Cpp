/*
	표준 라이브러리 함수 ( Standard Library Function )
	시간 출력
*/


#include <stdio.h>
#include <time.h>

bool Alarm(const time_t begin, int secondAlarm);

void main()
{
	/*time_t result = time(NULL);
	printf("현재시간 = %u\n", result);
	printf("현재시간 = %s\n", asctime(localtime(&result)));*/

	const time_t timeBegin = time(NULL);	// 최초(시작) 시간

	while (true)
	{
		if (Alarm(timeBegin, 2))
		{
			printf("%d 초가 경과..\n", 2);
			break;
		}
	}//while()
}

// bool : 1byte ( true, false )
bool Alarm(const time_t begin, int secondAlarm)
{
	time_t timeCurrent = time(NULL);	// 현재 시간을 가져오기

	if (timeCurrent - begin >= secondAlarm) 
	{
		return true;
	}

	return false;
}



/*
	경과된 시간을 보여주는 함수
	현재시간 체크
	5초가 지나면 .. 알람
*/