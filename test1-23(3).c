#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int input = 0;
	printf("�ú�ѧϰ��>(0/1):");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("�ؼ�����\n");
	return 0;
}