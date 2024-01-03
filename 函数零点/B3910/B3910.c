#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	long long arr[1000001];
	scanf("%d", &n);
	for (int i = 0;i <= n;i++)
		scanf("%lld", &arr[i]);
	int count = 0;
	for (int i = 0;i <= n-1;i++)
	{
		if (arr[i] * arr[i + 1] < 0)
			count++;
	}
	printf("%d", count);
	return 0;
}