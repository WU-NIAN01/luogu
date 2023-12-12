#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int x, temp = 0;
	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &x);
		static int y = x;
		if (y >= x)
			y = x;
		temp = y;
	}
	printf("%d", temp);
	return 0;
}