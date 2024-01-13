#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	long long n = 0, m = 0;
	scanf("%lld %lld", &n, &m);
	if (n <= m)
		printf("0");
	else
	{
		long long a = n - m;
		long long b = a / 100;
		if (a % 100)
			b++;
		printf("%lld", b);
	}
	return 0;
}