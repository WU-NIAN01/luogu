#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
int max(int arr[],int size)
{
	int max1 = 0;
	for (int i = 0;i < size; i++)
	{
		if (arr[i] > max1)
			max1 = arr[i];
	}
	return max1;
}
int nian(int p, int q, int r)
{
	int i = 0;
	for (i = 2;i <= 16;i++)
	{
		long long x = 0, y = 0, z = 0;
		int arr1[10] = { 0 };
		int arr2[10] = { 0 };
		int temp = p;
		int j = 0;
		while (temp != 0)
		{
			arr1[j] = temp % 10;
			arr2[j] = arr1[j] * pow(i, j);
			x = x + arr2[j];
			temp = (temp - temp % 10) / 10;
			j++;
		}
		if (max(arr1, 10) >= i)
			continue;
		temp = q;
		j = 0;
		while (temp != 0)
		{
			arr1[j] = temp % 10;
			arr2[j] = arr1[j] * pow(i, j);
			y = y + arr2[j];
			temp = (temp - temp % 10) / 10;
			j++;
		}
		if (max(arr1, 10) >= i)
			continue;
		temp = r;
		j = 0;
		while (temp != 0)
		{
			arr1[j] = temp % 10;
			arr2[j] = arr1[j] * pow(i, j);
			z = z + arr2[j];
			temp = (temp - temp % 10) / 10;
			j++;
		}
		if (max(arr1, 10) >= i)
			continue;
		if (x * y == z)
			return i;
	}
	return 0;
}
int main()
{
	int p = 0, q = 0, r = 0;
	scanf("%d %d %d", &p, &q, &r);
	int rct=nian(p, q, r);
	printf("%d", rct);
	return 0;
}