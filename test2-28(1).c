#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c = 0.0;
	double x1, x2 = 0.0;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0)
	{
		printf("���̽�Ϊ��x1=x2=%lf", -c / b);
	}
	else if (b * b - 4 * a * c > 0)
	{
		x1 = ((-b + sqrt(b * b - 4 * a * c))/2*a);
		x2 = ((-b - sqrt(b * b - 4 * a * c))/2*a);
		printf("���̽�Ϊ��x1=%lf\nx2=%lf\n", x1, x2);
	}
	else
		printf("�����޽�");
	return 0;
}