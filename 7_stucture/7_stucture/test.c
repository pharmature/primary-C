#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.结构体的声明
//学生
//名字+年龄+性别+身高
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int hight;
//}s1,s2,s3;//全局变量
//
//int main()
//{
//	struct Stu s4;//局部变量
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char c;
//	struct Point p;
//	double d;
//	char str[20];
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int hight;
//};
//int main()
//{
//	struct S ss = { 'x',{100,200},3.14,"hehe" };
//  struct S ss= { .d=3.14,.c='x',.p.x=100 };
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	struct Point p = { 10,20 };
//	struct Stu s = { "zhangsan",20,"男",180 };
//	printf("x=%d y=%d\n", p.x, p.y);
//	printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
//	return 0;
//}



//2.结构体成员的访问
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S s = { .age = 20,.name = "zhangsan" };
//	printf("%s %d\n", s.name, s.age);
//	s.age = 30;
//	//s.name = "zhangsanfeng";//err
//	strcpy(s.name, "zhangsanfeng");
//	return 0;
//}



//3.结构体传参
//struct S
//{
//	int data[1000];
//	char buf[100];
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%s\n", ss.buf);
//}
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%s\n", ps->buf);
//}
//int main()
//{
//	struct S s = { {1,2,3},"hehe" };
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}

//函数传参的时候，参数是需要压栈的。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。

//结构体传参的时候，要传结构体的地址。