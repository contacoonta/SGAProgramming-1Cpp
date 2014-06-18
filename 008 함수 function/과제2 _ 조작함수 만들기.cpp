#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	srand(time(NULL));
	/*int nresult = rand() % 6;
	printf("¹«ÀÛÀ§ = %d\n", nresult);*/

	int nresult = 0;
	int ndice[6] = {};
	for (int i = 0; i < 100; i++)
	{
		nresult = rand() % 100;
		if (nresult >= 0 && nresult < 60)
		{
			ndice[0]++;
		}
		else if (nresult >= 60 && nresult < 90)
		{
			ndice[1]++;
		}
		else if (nresult >= 90 && nresult < 94)
		{
			ndice[2]++;
		}
		else if (nresult >= 94 && nresult < 97)
		{
			ndice[3]++;
		}
		else if (nresult >= 97 && nresult < 99)
		{
			ndice[4]++;
		}
		else if (nresult >= 99 && nresult < 100)
		{
			ndice[5]++;
		}
		else
		{
			printf("wrong\n");
		}
	}//for

	for (int x : ndice)
	{
		printf("%d\n", x);
	}
}

/*
	0	->	100ep		60%
	1	->	300ep		30%
	2	->	5000ep		4%
	3	->	10000ep		3%
	4	->	50000ep		2%
	5	->	10000000ep	1%
*/