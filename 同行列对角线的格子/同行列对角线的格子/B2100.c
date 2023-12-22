#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0;
	scanf("%d %d %d", &n, &i, &j);
	//第一行：从左到右输出同一行格子位置；
	for (int k = 1;k <= n;k++)
	{
		printf("(%d,%d) ", i, k);
		if (k == n)
			printf("\n");
	}
	//第二行：从上到下输出同一列格子位置；
	for (int k = 1;k <= n;k++)
	{
		printf("(%d,%d) ", k, j);
		if (k == n)
			printf("\n");
	}
	//第三行：从左上到右下输出同一对角线格子位置；
	int row = i, col = j;
	while (row != 1 && col != 1)
	{
		row--;
		col--;
	}
	for (int k = row;k <= n&&j-(i-k)<=n;k++)
	{
		printf("(%d,%d) ", k, j - (i - k));
		if (k == n || j - (i - k) == n)
			printf("\n");
	}
	//第四行：从左下到右上输出同一对角线格子位置。
	row = i, col = j;
	while (row != n && col != 1)
	{
		row++;
		col--;
	}
	for (int k = row;k >= 1 && col <= n;k--,col++)
	{
		printf("(%d,%d) ", k,col);
		if (k == 1 || col == n)
			printf("\n");
	}
	return 0;
}