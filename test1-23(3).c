#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int input = 0;
	printf("好好学习？>(0/1):");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("回家种田\n");
	return 0;
}