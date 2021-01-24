#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入四个整数，要求从小到大输出
int main()
{
	int a, b, c, d;
	int t = 0;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	if (a > b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a > c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (a > d)
	{
		t = a;
		a = d;
		d = t;
	}
	if (b > c)
	{
		t = b;
		b = c;
		c = t;
	}
	if (b > d)
	{
		t = b;
		b = d;
		d = t;
	}
	if (c > d)
	{
		t = c;
		c = d;
		d = t;
	}
	printf("%d%d%d%d\n", a, b, c, d);
	return 0;
}