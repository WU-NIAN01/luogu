#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[6][6] = { 0 };
	int row[6] = { 0 };
	int col[6] = { 0 };
	int max = -999999, min = 999999;
	for (int i = 1;i < 6;i++)
	{
		for (int j = 1;j < 6;j++)
		{
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j])
			{
				max = arr[i][j];
				row[i] = j;
			}
		}
		max = -999999;
	}
	for (int i = 1;i < 6;i++)
	{
		for (int j = 1;j < 6;j++)
		{
			if (min > arr[j][i])
			{
				min = arr[j][i];
				col[i] = j;
			}
		}
		min = 999999;
	}
	for (int i = 1;i < 6;i++)
	{
		if (arr[i][row[i]] == arr[col[row[i]]][row[i]])
		{
			printf("%d %d %d", i, row[i], arr[i][row[i]]);
			return 0;
		}
	}
	printf("not found");
	return 0;
}