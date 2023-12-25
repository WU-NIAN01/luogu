#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[1100] = { 0 };
	int str1[256] = { 0 };
	scanf("%s", str);
	int sz = strlen(str);;
	char* p = str;
	for (int i = 0;i < sz;i++)
		str1[str[i]]++;
	int count = 0;
	for (int i = 0;i <= sz;i++)
	{
		if (str1[str[i]] == 1)
		{
			count++;
			printf("%c", str[i]);
			break;
		}
	}
	if (count == 0)
		printf("no");
	return 0;
}