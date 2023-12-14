#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
double fn(double x,double y)
{
	if (y == 1)
		return sqrt(1 + x);
	else
		return sqrt(fn(x, y - 1) + y);
}
int main()
{
	double n = 0;
	double x = 0;
	scanf("%lf %lf", &x,&n);
	printf("%.2lf", fn(x,n));
	return 0;
}