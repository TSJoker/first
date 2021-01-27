#include<stdio.h>
struct Person
{
	char name[20];//定义结构体姓名
	long  stnum;//定义结构体学号
	char major[20];//专业
	char class[20];//班级
	char grade[20];//年级

};
int main()
{
	struct Person P = { "李颖",1862020222,"汉语国际教育","二班","18级" };//创造一个该类型的结构体变量
	printf("姓名:%s\n", P.name);//P.name表示结构体变量.成员
	printf("学号:%d\n", P.stnum);
	printf("专业:%s\n", P.major);
	printf("班级:%s\n", P.class);
	printf("年级:%s\n", P.grade);
	return 0;
}