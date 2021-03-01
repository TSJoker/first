#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	switch (a)
	{
	case 2:printf("小班"); break;
	case 3:printf("小班"); break;
	case 4:printf("中班"); break;
	case 5:printf("大班"); break;
	case 6:printf("大班"); break;
	default:printf("年龄不符");
	}
	return 0;
}