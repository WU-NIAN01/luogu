#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	int count = 0;
	for (int i = a;i <= b;i++)
	{
		int odd = 0, even = 0;
		int tmp = i;
		while (tmp)
		{
			odd += tmp % 10;
			tmp /= 10;
			even += tmp % 10;
			tmp /= 10;
		}
		if (odd == even)
			count++;
	}
	printf("%d", count);
	return 0;
}