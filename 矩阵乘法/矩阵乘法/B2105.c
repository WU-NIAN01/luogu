#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 120
int main()
{
	int n = 0, m = 0, k = 0;
	scanf("%d %d %d", &n, &m, &k);
	int arr1[max][max] = { 0 }, arr2[max][max] = { 0 }, arr3[max][max] = { 0 };
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= m;j++)
			scanf("%d", &arr1[i][j]);
	}
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= k;j++)
			scanf("%d", &arr2[i][j]);
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= k;j++)
			for (int x = 1;x <= m;x++)
				arr3[i][j] = arr3[i][j] + arr1[i][x] * arr2[x][j];
	}
	for (int i = 1;i <= n;i++)
	{
		for (int j = 1;j <= k;j++)
			printf("%d ", arr3[i][j]);
		printf("\n");
	}
	return 0;
}