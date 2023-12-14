#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int akm(int x, int y)
{
	if (x == 0)
		return y + 1;
	else if (x > 0 && y == 0)
		return akm(x - 1, 1);
	else if (x > 0 && y > 0)
		return akm(x - 1, akm(x, y - 1));
}
int main()
{
	int m = 0, n = 0;
	scanf("%d %d", &m, &n);
	printf("%d", akm(m, n));
	return 0;
}