#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
long long Gcd(long long a, long long b)
{
	if (a > b)
	{
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	while (b % a != 0)
	{
		long long tmp = a;
		a = b % a;
		b = tmp;
	}
	return a;
}
long long Lcm(long long a, long long b)
{
	return a * b / Gcd(a, b);
}
int main()
{
	long long a = 0, b = 0;
	scanf("%lld %lld", &a, &b);
	long long gcd = Gcd(a, b);
	long long lcm = Lcm(a, b);
	printf("%lld %lld", gcd, lcm);
	return 0;
}