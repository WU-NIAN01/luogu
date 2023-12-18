#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int Prime_Number(int x)
{
	for (int i = 2;i <= sqrt(x);i++)
	{
		if (x % i == 0)
			return 0;
	}
	if (x == 1)
		return 0;
	else
		return 1;
}
int main()
{
	int x = 0, y = 0;
	int count = 0;
	scanf("%d %d", &x, &y);
	if (x > y)
	{
		int temp = x;
		x = y;
		y = temp;
	}
	for (int i = x;i <= y;i++)
	{
		if (Prime_Number(i))
			count++;
	}
	printf("%d", count);
	return 0;
}