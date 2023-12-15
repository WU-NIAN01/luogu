#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int Hermite(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return 2 * x;
	else
		return 2 * x * Hermite(n - 1, x) - 2 * (n - 1) * Hermite(n - 2, x);
}
int main()
{
	int n = 0, x = 0;
	scanf("%d %d", &n, &x);
	int a = Hermite(n, x);
	printf("%d", a);
	return 0;
}