#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n,x;
	scanf("%d", &n);
	int a[101] = { 0 };
	for (int i = 1;i <= n;i++)
	{
		scanf("%d", &x);
		a[x] = a[x] + 1;
		if (a[x] == 1)
			printf("%d ", x);
	}
	return 0;
}