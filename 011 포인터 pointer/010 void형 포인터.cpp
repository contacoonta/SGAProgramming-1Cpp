/*
	void�� ������

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

	printf("pa ũ�� = %d\n", sizeof(pa));
	printf("pa �� = %d\n", *((char*)pa));
	printf("pb �� = %d\n", *((int*)pb));
	printf("pc �� = %f\n", *((float*)pc));
	printf("pd �� = %f\n", *((double*)pd));

	auto	pe = &a;
	printf("pe �� = %d\n", *pe);
}