#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int ch = 0;
	int ret = 0;
	char password[20] = { 0 };
	printf("请输入密码:>");
	scanf("%s", password);
	while (getchar(ch) != '\n')
	{
		;
	}
	printf("请确认密码:Y/N>");
	ret = getchar();
	if (ret == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	return 0;
}