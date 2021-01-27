#include <stdio.h>

int main()
{
	int a = 99;//定义一个整型变量
	printf("%p\n",&a);//&a是取地址操作，此时是打印a的存储地址
	return 0;
}