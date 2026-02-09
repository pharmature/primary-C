#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1.什么是C语言
// C语言是一门通用计算机变成语言，广泛应用于底层开发。
// C语言的设计目标：提供一种能以简易的方式编译、处理低级存储器、产生少量的机器码以及不需要任何运行环境支持便能运行的编程语言。

// C语言标准
// 1980s - 美国国家标准局 ANSI C 
// 2011年12越8日 - 国际标准化组织ISO和国际电工委员会IEC 发布 C11

// C语言是一门 面向过程 的计算机编程语言，与C++、Java等面向对象的编程语言有所不同

// C语言的编译器：
// Clang、GCC、WIN-TC、SUBLIME、MSVC、Turbo C


// 2.第一个C语言程序
//int main()
//{
//	// 第一个C语言程序
//	printf("hello world!!");
//	return 0;
//}
// main函数是程序的入口
// 一个工程中main函数有且仅有一个


// 3.C语言的数据类型

// 每种类型的大小
//int main()
//{
//	printf("%d\n", sizeof(char)); // 字符
//	printf("%d\n", sizeof(short)); // 短整型
//	printf("%d\n", sizeof(int)); // 整型
//	printf("%d\n", sizeof(long)); // 长整型
//	printf("%d\n", sizeof(long long)); // 更长的整形
//	printf("%d\n", sizeof(float)); // 单精度浮点数
//	printf("%d\n", sizeof(double)); // 双精度浮点数
//
//}
//C语言没有字符串类型

// 存在这么多的类型，其实是为了更加丰富地表达生活中的各种值


// 3.变量、常量
// 不变的值，C语言中用 常量 的概念来表示
// 变的值，C语言中用 变量 来表示

// 3.1定义变量的方法
//int main()
//{
//	int age = 0;
//	float weight = 45.5f;
//	char ch = 'w';
//	return 0;
//}

// 3.2变量的命名
// (1)只能由字母(包括大写和小写)、数字和下划线组成。
// (2)不能以数字开头
// (3)长度不能超过63个字符
// (4)严格区分大小写
// (5)不能使用关键字

// 3.3变量的分类
// 局部变量 - 全局变量
//int global = 2026;
//int main()
//{
//	int local = 2025;
//	
//	int global = 2019;
//	printf("global = %d\n", global);
//	// 当局部变量和全局变量同名的时候，局部变量优先使用
//	return 0;
//}

// 3.4变量的作用域和生命周期
// 作用域scope
// 程序设计概念，通常来说，一段代码中所使用到的名字并不总是有效/可用的，而限定这个名字的可用性的代码范围就是这个名字的作用域
// (1)局部变量的作用域 - 变量所在的局部范围
// (2)全局变量的作用域 - 整个工程

// 生命周期
// 变量的生命周期指的是变量的创建到变量的销毁之间的一个时间段
// (1)局部变量的生命周期 - 进入作用域生命周期开始，出作用域生命周期结束
// (2)全局变量的生命周期 - 整个程序的生命周期

// 3.5常量

// 常量的分类：
// (1)字符常量
// (2)const修饰的常变量
// (3)#define定义的常量
// (4)enum枚举常量
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	// 字面常量
//	3.14;
//	1000;
//
//	// const修饰的常量
//	const float pi = 3.14f;
//	
//	// #define的标识符常量
//#define MAX 100
//	printf("max = %d\n", MAX);
//
//	// 枚举常量
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	// 枚举常量的默认是从0开始，依次向下递增1
//
//	return 0;
//}


// 4.字符串+转义字符+注释

// 4.1字符串
// 结束标志是一个 \0 转义字符，计算字符串长度的时候\0时结束标志，不是字符串内容。
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = {'h','e','l','l','o'};
//	char arr3[] = {'h','e','l','l','o','\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}


// 4.2转义字符
// \n - 换行
// \t - 制表符
// \b - 退格符
// \r - 回车
// \a - 电脑叫
// \ddd - 八进制数字，不能大于8
// \xdd - 十六进制数字
// \' - 单引号
// \" - 双引号
//int main()
//{
//	printf("%c\n", "\'");
//	printf("%s\n", "\"");
//	return 0;
//}

// 案例：程序输出什么？
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	// \62被解析成一个转义字符
//	return 0;
//}


// 5.注释
// 代码中有不需要的代码可以直接删除，也可以注释掉
// 代码中有些代码比较难懂，可以加一下注释文字

// 两种注释风格
// C语言风格的注释 /* xxxxx */
// C++风格的注释 // xxxxx


// 练习题

// 1.写一个代码打印1-100之间所有3的倍数的数字
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// 写代码将三个整数数按从大到小输出。
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//写一个代码：打印100~200之间的素数
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	
//	for (n = 101; n <= 200; n++)
//	{
//		int flag = 1; // 先假设是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(n); j++)
//		{
//			if (n % j == 0)
//			{
//				flag = 0; // 不是素数
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}


// 打印1000年到2000年之间的闰年
// 闰年：能被4整除但不能被100整除；或者能被400整除
//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


// 给定两个数，求这两个数的最大公约数
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int k = 0;
	scanf("%d %d", &m, &n);
	while (k = m % n) // 辗转相除法
	{
		m = n;
		n = k;
	}
	printf("%d", n);
	return 0;
}


