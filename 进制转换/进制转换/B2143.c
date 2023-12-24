#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 100
char number[] = "0123456789ABCDEF";
char str[max] = { 0 };
int length = 0;
void nian(int x, int m)
{
	if (x < m)
		str[length++] = number[x];
	else
	{
		str[length++] = number[x % m];
		nian(x / m, m);
	}
}
int main()
{
	int x = 0, m = 0;
	scanf("%d%d", &x, &m);
	nian(x, m);
	for (int i = length - 1;i >= 0;i--)
		printf("%c", str[i]);
	return 0;
}