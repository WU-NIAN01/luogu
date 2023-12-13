#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int pn(int x)
{
	int y = (int)sqrt(x);
	int a = 0;
	for (int i = 2;i <= y;i++)
	{
		if (x % i == 0)
		{
			a++;
			break;
		}
	}
	return a;
}
int main()
{
	int n;
	int a = 0;
	scanf("%d", &n);
	for (int i = 2;i <= n;i++)
	{
		if (pn(i) == 0)
			a++;
	}
	printf("%d", a);
	return 0;
}