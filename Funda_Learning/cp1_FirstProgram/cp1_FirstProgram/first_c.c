#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// 第一个C语言程序
//	printf("hello world!!");
//	return 0;
//
//	// C语言的数据类型
//	printf("%d\n", sizeof(char)); // 字符
//	printf("%d\n", sizeof(short)); // 短整型
//	printf("%d\n", sizeof(int)); // 整型
//	printf("%d\n", sizeof(long)); // 长整型
//	printf("%d\n", sizeof(long long)); // 更长的整形
//	printf("%d\n", sizeof(float)); // 单精度浮点数
//	printf("%d\n", sizeof(double)); // 双精度浮点数
//	//C语言没有字符串类型
//}


// 变量
// 局部变量 - 全局变量
// 变量的命名：数字、字母、下划线，不可以数字开头，区分大小写；

// 常量
// 字符常量
// const修饰的常变量
// #define定义的常量
// enum枚举常量
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


// 字符串
// 结束标志时 \0 转义字符，计算字符串长度的时候\0时结束标志，不是字符串内容。

// 转义字符
// \n - 换行
// \t - 制表符
// \b - 退格符
// \r - 回车
// \a - 电脑叫
// \ddd - 八进制数字，不能大于8
// \xdd - 十六进制数字


// 写一个代码打印1-100之间所有3的倍数的数字
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


