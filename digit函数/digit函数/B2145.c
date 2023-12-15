#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0, k = 0;
	scanf("%d %d", &n, &k);
	for (int i = 1;i < k;i++)
		n = n / 10;
	int a = n % 10;
	printf("%d", a);

}