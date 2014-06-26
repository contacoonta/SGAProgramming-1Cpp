/*
	void형 포인터

*/

#include <stdio.h>

void main()
{
	char	a = 3;
	int		b = 9;
	float	c = 11.1f;
	double	d = -8.8;

	void*	pa = &a;
	void*	pb = &b;
	void*	pc = &c;
	void*	pd = &d;

	printf("pa 크기 = %d\n", sizeof(pa));
	printf("pa 값 = %d\n", *((char*)pa));
	printf("pb 값 = %d\n", *((int*)pb));
	printf("pc 값 = %f\n", *((float*)pc));
	printf("pd 값 = %f\n", *((double*)pd));

	auto	pe = &a;
	printf("pe 값 = %d\n", *pe);
}