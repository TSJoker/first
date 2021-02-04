#include<stdio.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF->end of file,即Ctrl+c键
		putchar(ch);//输出字符->putchar,输入字符->getchar
	return 0;
}
