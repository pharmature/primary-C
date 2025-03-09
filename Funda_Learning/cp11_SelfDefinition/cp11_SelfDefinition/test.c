#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1. 结构体
//1.1 结构的定义 - 
//结构是一些值的集合，这些值被称为成员变量。
//结构的每个成员可以是不同类型的变量

//1.2 结构的声明
//struct tag
//{
//	member-list; //成员变量
//}variable-list; //创建的结构变量名

//1.3 特殊的声明 - 没有结构类型名

//struct
//{
//	int a;
//	char b;
//	float c
//}x, v; //可以这样创建匿名结构变量
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}*p;
//
//int main()
//{
//	p = &x; //err，但是不能这样使用
// //编译器会把上面两个声明当成完全不同的类型
//	return 0;
//}


//1.4 结构的自引用

//链表
//struct Node
//{
//	int data;
//	struct Node next; 
//};
//编译器无法确定结构的大小

// 正确写法 - 指针
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
////类型重定义
//typedef struct
//{
//	int data;
//	Node* next; //err,类型使用在定义之前
//}Node;
//
////正确写法
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;


//1.5 结构体变量的定义和初始化
struct Point
{
	int x;
	int y;
}p1; //声明类型的同时定义变量

struct Point p2; //全局变量

struct Point p3 = { 3,4 }; //初始化 - 定义变量的同时赋值

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10, {4,5},NULL }; //结构体嵌套初始化


//1.6 结构体内存对齐
//1. 结构体的第一个成员放在 0 偏移处
//2. 从第二个成员开始，每个成员都有一个对齐数，都要对齐到这个对齐数的整数倍处
//这个对齐数是：成员自身大小 和 默认对齐数的较小值
//VS环境默认8，gcc没有默认对齐数，对齐数就是成员自身的大小
//3. 当成员全部放进去之后，结构体的总大小必须是，所有成员的对齐数中的最大对齐数的整数倍，如果不够，就浪费空间
//4. 当嵌套了结构体，嵌套的结构体成员要对齐到自己成员的最大对齐数的整数倍。
//整个结构体的大小，必须是最大对齐数的整数倍，最大对齐数包含嵌套的结构体的成员的对齐数

//为什么存在内存对齐？
//1. 平台原因(移植)
//不是所有的硬件平台都能访问任意地址上的任意数据，某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常
//2. 性能原因
//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
//原因在于，为了访问未对齐地内存，处理器需要两次内存访问，而对齐的内存访问仅需要一次访问。

//结构体的内存对齐是为了用 空间 换 时间。

//让占用空间小的成员尽量集中在一起
//struct s1
//{
//	char c1;
//	int i;
//	char c2;
//}; //12字节
//
//struct s2
//{
//	char c1;
//	char c2;
//	int i;
//}; //8字节
//
////offsefof() - 计算偏移值的宏
//#include <stddef.h>
//int main()
//{
//	printf("%zd %zd %zd", offsetof(struct s1, c1), offsetof(struct s1, i), offsetof(struct s1, c2));
//	return 0;
//}


//1.7 修改默认对齐数 - #pragma pack()

//#pragma pack(8)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//#pragma pack(1) //修改默认对齐数为1
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack() //还原默认对齐数
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));
//
//	return 0;
//}


//1.8 结构体传参
//首选结构体指针传参
//函数传参的时候，参数需要压栈，会有时间和空间上的系统开销。
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，会导致性能的下降

//struct S
//{
//	int data[1000];
//	int num;
//};
//struct S s = { {1,2,3,4},1000 };
//
//void Print1(struct S s)
//{
//	printf("%d\n", s.num);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	Print1(s);
//	Print2(&s);
//	return 0;
//}



//2.位段
//2.1 位段的定义
//位段的成员必须是 int, unsigned int, signed int, char 整型家族
//位段的成员后边有一个冒号和一个数字

//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};  //数字表示的二进制 bit 位
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	return 0;
//}


//2.2 位段的内存分配
//1. 位段的成员可以是int, unsigned int, signed int, char 类型
//2. 位段的空间上是按照需要以4个字节(int)或者1个字节(char)的方式来开辟的
//3. 位段设计很多不确定因素，位段是不跨平台的，注意可移植的程序应该避免使用位段

struct A
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

//int main()
//{
//	struct A pa = { 0 };
//	pa.a = 10;
//	pa.b = 12;
//	pa.c = 3;
//	pa.d = 4;
//	//调试 - 窗口 - 内存 - &pa
//	return 0;
//}
//VS 环境下 - 
//分配到的内存是从右向左使用
//分配到的内存剩余的bit位不够时，直接浪费掉


//2.3 位段的跨平台问题
//1. int 位段被当作有符号数还是无符号数是不确定的
//2. 位段中最大位的数目不能确定。(16位机器、32位机器...)
//3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准未定义
//4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，时舍弃剩余的位还是利用，是不确定的


//2.4 位段的应用 - 网络传输
//4位版本号、4位首部长度、8位服务类型TOS、16位总长度、16位标识符...


//3.枚举
//3.1 枚举类型的定义
//把可能的值一一列举

enum Day
{
	Mon,  //枚举常量 - 枚举类型的可能取值
	Tues,
	Wed,
	Thur,
	Fri,
	Sat,
	Sun
};
enum Sex
{
	Male,
	Female,
	Secret
};

//枚举常量时有值的，默认从0开始，一次递增1，在定义的时候也可以赋初始值
enum Color
{
	Red,
	Green = 5,
	Blue
};


//3.2 枚举的优点
//1. 增加代码的可读性和可维护性
//2. 和#define定义的标识符比较，枚举有类型检查，更加严谨
//3. 防止了命名污染
//4. 便于调试
//5. 使用方便，一次可以定义多个常量


//4.联合体 - 共用体
//4.1 联合体的定义
//成员公用同一块空间，所以联合体也叫做共用体
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	printf("%zd\n", sizeof(union Un));
//	return 0;
//}


//4.2 联合体的内存计算
//联合体的成员共用同一块内存空间
//一个联合体的大小，至少是最大成员的大小

//判断当前计算机的大小端存储

union Un
{
	char c;
	int i;
};

//int main()
//{
//	union Un u = { 0 };
//	u.i = 1;
//	if (u.c == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}


//4.3 联合体大小的计算
//1. 联合体的大小至少时最大成员的大小
//2. 当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍

union Un1
{
	char c[5];
	int i;
};

union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%zd\n", sizeof(union Un1));
	printf("%zd\n", sizeof(union Un2));

	return 0;
}




