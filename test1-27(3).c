#include<stdio.h>
struct Person
{
	char name[20];//����ṹ������
	long  stnum;//����ṹ��ѧ��
	char major[20];//רҵ
	char class[20];//�༶
	char grade[20];//�꼶

};
int main()
{
	struct Person P1 = { "��ӱ",1862020222,"������ʽ���","����","18��" };//����һ�������͵Ľṹ�����
	struct Person* D = &P1;
	printf("����:%s\n", D->name);//P.name��ʾ�ṹ�����.��Ա
	printf("ѧ��:%d\n", D->stnum);
	printf("רҵ:%s\n", D->major);
	printf("�༶:%s\n", D->class);
	printf("�꼶:%s\n", D->grade);
	return 0;
}