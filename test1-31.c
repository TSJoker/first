#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�ж�һ�����Ƿ�Ϊ���������1-100�������

int main()
{
	int a,b;
	int i,j= 0;
	scanf_s("%d", &a);
	b = a % 2;
	if (b == 0)
		printf("������ż��%d\n", a);
	else
		printf("����������%d\n", a);
	for (i = 0; i < 100; i++)
	{
		j = i % 2;
		i++;
		printf("%d\n", i);

	}
	return 0;
}