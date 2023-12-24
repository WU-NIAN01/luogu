#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int n = 0;
	char name[100] = { 0 };
	int grade=0;
	char temp[100];
	int temp1 = -1;
	scanf("%d", &n);
	for (int i = 1;i <= n;i++)
	{
		scanf("%d %s", &grade, name);
		if (grade > temp1)
		{
			strcpy(temp, name);
			temp1 = grade;
		}
	}
	printf("%s", temp);
	return 0;
}