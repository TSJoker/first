#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//systemͷ�ļ�
#include<string.h>//strcmpͷ�ļ�
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	again:
	printf("��ĵ��Խ���һ���Ӻ�ػ������ش�������ȡ���ػ�����:��������\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}