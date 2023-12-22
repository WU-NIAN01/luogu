#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int arr[5][5], int a, int b)
{
	for (int i = 0;i < 5;i++)
	{
		int temp = arr[a - 1][i];
		arr[a - 1][i] = arr[b - 1][i];
		arr[b - 1][i] = temp;
	}
}
int main()
{
	int arr[5][5] = { 0 };
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	int a = 0, b = 0;
	scanf("%d %d", &a, &b);
	swap(arr,a, b);
	for (int i = 0;i < 5;i++)
	{
		for (int j = 0;j < 5;j++)
		{
			printf("%d ", arr[i][j]);
			if (j == 4)
				printf("\n");
		}
	}
	return 0;
}