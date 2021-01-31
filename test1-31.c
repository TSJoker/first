#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//判断一个数是否为奇数并输出1-100间的奇数

int main()
{
	int a,b;//为判断奇偶定义变量
	int i,j= 0;//为输出奇数定义变量
	scanf("%d", &a);//键盘输入一个数
	b = a % 2;//取模运算
	if (b == 0)//余数为0
		printf("该数是偶数%d\n", a);
	else
		printf("该数是奇数%d\n", a);
	for (i = 0; i < 100; i++)
	{
		j = i % 2;
		if (j == 0)
			i++;
		else
			i = i;		
		printf("%d,", i);

	}
	return 0;
}
