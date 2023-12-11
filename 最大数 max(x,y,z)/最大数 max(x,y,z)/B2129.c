#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max1(int x, int y, int z)
{
	if (x <= y)
		x = y;
	return x >= z ? x : z;
}
int max2(int x, int y, int z)
{
	int a = x + y;
	if (a <= y)
		a = y;
	return a >= z ? a : z;
}
int max3(int x, int y, int z)
{
	int a = z + y;
	if (a <= y)
		a = y;
	return a >= x ? a : x;
}
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	double x = 1.0 * max1(a, b, c) / max2(a, b, c) / max3(a, b, c);
	printf("%.3lf", x);
	return 0;
}