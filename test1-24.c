#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//system头文件
#include<string.h>//strcmp头文件
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("你的电脑将在一分钟后关机，若回答问题则取消关机，问:你是猪吗？\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}