#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. 结构体的声明

// 1.1 定义：一些值的集合，这些值称为成员变量，每个成员可以是不同类型的变量

// 1.2 结构体的声明

//struct Book
//{
//	char name[20];
//	int price;
//}b1, b2, b3; // 这里直接创建的是全局变量

// 可以使用 typedef

//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//
//int main()
//{
//	struct Book b4;
//	struct Book b5; // 创建局部变量
//
//	Book b4;
//	Book b5; // typedef重定义之后，创建变量更简单
//	return 0;
//}


// 1.3 成员变量的类型
// 可以是标量、数组、指针，甚至是其它结构体

// 1.4 结构体的初始化

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL }; // 结构体嵌套初始化
//
//int main()
//{
//	struct Stu s1 = { "zhangsan", 20 };
//
//	struct Node n2 = { 20,{5,6}, NULL };  // 嵌套初始化
//	return 0;
//}


// 2. 结构体成员的访问
// 结构体变量.成员变量
// 结构体指针->成员变量

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	printf("%s %d\n", s.name, s.age);
//
//	struct Stu* ps = &s;
//	printf("%s %d\n", ps->name, ps->age);
//
//	return 0;
//}


// 3. 结构体传参
// 可以传变量名 - 传值调用
// 也可以传变量的地址 - 传址调用

struct S
{
	int data[100];
	int num;
};

void print1(struct S s)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", s.data[i]);
	}
	printf("\n%d\n", s.num);
}

void print2(struct S* ps)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n%d\n", ps->num);
}

int main()
{
	struct S s = { {1,2,3,4},100 };

	print1(s);
	print2(&s);
	
	return 0;
}

// 首选传址调用
// 函数传参的时候，参数是需要压栈的
// 传递一整个结构体对象，结构体过大，参数压栈的系统开销比较大，会导致性能下降 - 代码优化







