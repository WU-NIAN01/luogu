#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int chinese, math, english;
	int weight_c, weight_m, weight_e;
	scanf("%d%d%d%d%d%d", &chinese, &math, &english, &weight_c, &weight_m, &weight_e);
	int a = 0;
	if (chinese < 60)
		a++;
	if (math < 60)
		a++;
	if (english < 60)
		a++;
	if (a>=2)
		printf("FAIL\n");
	else
		printf("PASS\n");
	int sum_grade = chinese * weight_c + math * weight_m + english * weight_e;
	int sum_weight = weight_c + weight_m + weight_e;
	double result = 1.0 * sum_grade / sum_weight;
	if(result>=60)
		printf("PASS\n");
	else
		printf("FAIL\n");
	return 0;
}