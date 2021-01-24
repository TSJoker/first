#include<stdio.h>
#include<math.h>
//给出三角形的三边，判断是否能构成三角形并求三角形面积
int main()
{
	double a, b, c, x, y;
	scanf_s("%lf%lf%lf", &a, &b, &c);
	
	x = (a+b+c)/2;
	y = 0;
	if (a + b > c && a + c > b && b + c > a)
		y = (double)sqrt(x * (x - a) * (x - b) * (x - c));
	else
		printf("无法构成三角形");
	printf("%f\n", y);

	return 0;
}