#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int nian(int n)
{
	int a = 0;
	int b = 0;
	while (n)
	{
		if (n % 2 == 1)
			a++;
		else
			b++;
		n /= 2;
	}
	if (a > b)
		return 1;
	else
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int count = 0;
	for (int i = 1;i <= n;i++)
		count = count + nian(i);
	printf("%d %d", count,n-count);
	return 0;
}
//a����¼1�ĸ���
//b����¼0�ĸ���
//A�������������1��B�������������0