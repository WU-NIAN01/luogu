#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sum(int x)
{
	if (x == 1)
		return 1;
	else
		return sum(x - 1) + x;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}
