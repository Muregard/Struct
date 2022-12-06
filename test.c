#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//struct B
//{
//	char c;
//	short s;
//	double d;
//};
//
//struct Stu
//{
//	//成员变量
//	struct B sb;
//	char name[20];//名字
//	int age;//年龄
//	char id[20];//学号
//}s1,s2;//s1和s2也是结构体变量，为全局变量
//
//int main()
//{
//	struct Stu s = { {'w',20,3.14},"张三",30,"20221206"};//对象
//	//结构体成员访问 . ->
//	printf("%c\n", s.sb.c);
//	printf("%s\n", s.id);
//
//	struct Stu* ps = &s;
//	printf("%c\n", (*ps).sb.c);
//	printf("%c\n", ps->sb.c);
//	return 0;
//}

struct B
{
	char c;
	short s;
	double d;
};

struct Stu
{
	//成员变量
	struct B sb;
	char name[20];//名字
	int age;//年龄
	char id[20];//学号
};


void print1(struct Stu t)
{
	printf("%c %d %lf %s %d %s\n",t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
}

void print2(struct Stu* ps)
{
	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
}
int main()
{
	struct Stu s = { {'w',20,3.14},"张三",30,"20221206" };//对象
	//写一个函数打印s的内容
	print1(s);//传值调用，将结构体变量传递给函数
	print2(&s);//传址调用，将结构体变量的地址传递给函数
	return 0;
}