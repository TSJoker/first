#include<stdio.h>

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)//EOF->end of file
		putchar(ch);
	return 0;
}