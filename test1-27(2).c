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
	struct Person P = { "��ӱ",1862020222,"������ʽ���","����","18��" };//����һ�������͵Ľṹ�����
	printf("����:%s\n", P.name);//P.name��ʾ�ṹ�����.��Ա
	printf("ѧ��:%d\n", P.stnum);
	printf("רҵ:%s\n", P.major);
	printf("�༶:%s\n", P.class);
	printf("�꼶:%s\n", P.grade);
	return 0;
}