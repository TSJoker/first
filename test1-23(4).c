#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ʵ�ִ�1��100�����
int main()
{
	int num = 0;
	int sum = 0;
	while (num < 100)
	{
		num = num + 1;
		sum = sum + num;
		
	}
	printf("%d\n", sum);
	return 0;
}