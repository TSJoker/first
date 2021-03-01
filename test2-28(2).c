#include<stdio.h>
int main()
{
	double s = 0.0;
	int i = 1;
	double a = 0.0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		a = flag*1.0 / i;
		flag = -flag;
		s = s + a;
	}
	printf("s=%lf\n", s);
	return 0;
}