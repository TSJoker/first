#include<stdio.h>
#include<math.h>
//���������ε����ߣ��ж��Ƿ��ܹ��������β������������
int main()
{
	double a, b, c, x, y;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	
	x = (a+b+c)/2;
	y = 0;
	if (a + b > c && a + c > b && b + c > a)
		y = (double)sqrt(x * (x - a) * (x - b) * (x - c));
	else
		printf("�޷�����������");
	printf("%f\n", y);

	return 0;
}