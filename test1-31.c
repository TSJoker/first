#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断一个数是否为奇数并输出1-100间的奇数

int main()
{
	int a,b;
	int i,j= 0;
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
		printf("该数是偶数%d\n", a);
	else
		printf("该数是奇数%d\n", a);
	for (i = 0; i < 100; i++)
	{
		j = i % 2;
		i++;
		printf("%d\n", i);

	}
	return 0;
}