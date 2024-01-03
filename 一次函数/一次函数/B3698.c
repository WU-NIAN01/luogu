#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int x[1000000] = { 0 };
int y[1000000] = { 0 };
int main()
{
	int n = 0, k = 0, b = 0;

	int count = 0;
	scanf("%d %d %d", &n, &k, &b);
	for (int i = 0;i < n;i++)
	{
		scanf("%d %d", &x[i], &y[i]);
		if ((k * x[i] + b) == y[i])
			count++;
	}
	printf("%d", count);
	return 0;
}