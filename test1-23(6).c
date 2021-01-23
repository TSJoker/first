#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	int c = a & b;
	int d = a | b;
	int e = a ^ b;
	printf("%d\n%d\n%d\n", c, d, e);
	return 0;
}