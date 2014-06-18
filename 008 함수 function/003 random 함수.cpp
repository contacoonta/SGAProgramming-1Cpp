/*
	
		
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int random(int nMax);

void main()
{
	printf("%d\n", random(1000));
}

int random(int nMax)
{
	srand(time(NULL));
	return rand() % nMax;
}