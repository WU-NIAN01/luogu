#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0, i = 0, j = 0;
	scanf("%d %d %d", &n, &i, &j);
	//��һ�У����������ͬһ�и���λ�ã�
	for (int k = 1;k <= n;k++)
	{
		printf("(%d,%d) ", i, k);
		if (k == n)
			printf("\n");
	}
	//�ڶ��У����ϵ������ͬһ�и���λ�ã�
	for (int k = 1;k <= n;k++)
	{
		printf("(%d,%d) ", k, j);
		if (k == n)
			printf("\n");
	}
	//�����У������ϵ��������ͬһ�Խ��߸���λ�ã�
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
	//�����У������µ��������ͬһ�Խ��߸���λ�á�
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