#include <stdio.h>

int main()
{
	int a = 99;//定义一个整型变量a,赋值为99
	int* x = &a;//取地址操作，将a的地址存放到指针变量x中
	*x = 50;//通过*加指针变量x，就是通过x里存放的地址找到那个对象a，然后赋值就可以改变原来a的值
	printf("%d\n",a);//&a是取地址操作，此时是打印a的存储地址
	return 0;
} 
//通过指针变量寻址和改变原对象的操作