//计算n的阶乘
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 1;
	int n = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		
		sum = i * j;
		j = sum;
	}
	printf("n的阶乘为>:%d", sum);
	return 0;
}