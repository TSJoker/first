//打印出所有水仙花数
#include<stdio.h>
int main()
{
	int i = 0;
	int m, n, l = 0;
	int sum = 0;
	for (i = 100; i < 1000; i++)
	{
		m = i / 100;
		n = i / 10 % 10;
		l = i % 10;
		sum = m * m * m + n * n * n + l * l * l;
		if (sum == i)
			printf("%d ", i);
		else
			;
	}
	return 0;
}