#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double fn(double x, int n)
{
	if (n == 1)
		return x / (1 + x);
	else
		return x / (n + fn(x, n - 1));
}
int main()
{
	double x = 0;
	int n = 0;
	scanf("%lf %d", &x, &n);
	printf("%.2lf", fn(x, n));
	return 0;
}