#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.函数是什么 - 子程序


//2.库函数
//c语言的编译器提供了一些库函数
//C语言标准规定了函数名、功能、参数、返回类型，怎么实现不管，交给编译器厂商

//strcpy()
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//memset()
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//使用库函数，必须包含头文件


//3.自定义函数 - 函数名，返回类型，函数参数

//写一个函数，求两个数的最大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d", m);
//	return 0;
//}

//写一个函数可以交换两个整型变量的内容
//void Swap(int* x,int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
////当函数调用的时候，实参传给形参，形参是实参的一份临时拷贝
////所以对形参的修改，是不影响实参的
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("交换前:a=%d b=%d", a, b);
//	Swap(&a, &b); //传址调用
//	//Swap(a, b); 传值调用
//	printf("交换后:a=%d b=%d", a, b);
//	return 0;
//}



//4.函数参数
//实际参数（实参） - 真实传给函数的参数
//实参可以是：常量、变量、表达式、函数等
//无论实参是何种类型的量，在进行函数调用是，它们都必须有确定的值，一边把这些值都传送给形参

//形式参数 - 函数名后括号中的变量
//形式参数只有在函数被调用的过程中才实例化（分配内存单元）
//形式参数当函数调用完成后就自动销毁了，因此旨在函数中有效

//形参实例化之后相当于实参的一份临时拷贝



//5.函数调用
//传值调用 - 对形参的修改不会影响实参

//传址调用 - 把函数外部创建变量的内存地址传递给函数参数
//让函数和函数外部的变量建立器真正的联系，也就是函数内部可以直接操作函数外部的变量



//6.函数的嵌套调用和链式访问
//嵌套调用

//链式访问
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//7.函数的声明和定义
//int Add(int, int); //函数声明 - 要在使用之前
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = Add(a, b);
//	printf("%d", s);
//	return 0;
//}
//int Add(int x, int y) //函数定义
//{
//	return x + y;
//}


//VS2022是编译器吗？其实是集成开发环境 - IDE
//编辑器，编译器，链接器，调试器

//#include "Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d", s);
//	return 0;
//}



//8.函数的递归
//递归 - 程序调用自身的编程技巧

//int main()
//{
//	printf("hehe\n");
//	main(); //死循环
//	return 0;
//}
//每一次函数调用都会在栈区申请内存空间 - 函数栈帧

//递归的两个必要条件
//1.存在限制条件，当满足这个限制条件的时候，递归便不再继续
//2.没次递归调用之后越来越接近这个限制条件

//网站 stackoverflow.com    github

//递归的思考方式 - 大事化小

//接受一个整型值（无符号），按照顺序打印它的每一位
//void print(unsigned int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//按照顺序打印num的每一位
//	return 0;
//}

//编写函数，不允许创建临时变量，求字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0; //创建变量
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //++str 不推荐，有副作用
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//递归与迭代
//求n的阶乘
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
////int Fac2(int n)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret = ret * i;
////	}
////	return ret;
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//斐波那契数列
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//求斐波那契数列不适用递归

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//
//	return 0;
//}





//9.函数栈帧的创建和销毁








//练习
//5.1.写一个函数可以判断一个数是不是素数
//#include <math.h>
//int is_primer(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_primer(i) == 1)
//		{
//			printf("%d ", i);
//		}			
//	}
//	return 0;
//}

//函数，如果不写返回值，函数默认会返回一个值
//有些编译器上返回的是：最后一条指令产生的结果

//5.2.写一个函数判断一年是不是闰年
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//5.3.写一个函数，实现一个整型有序数组的二分查找
//int binary_search(int arr[], int k)   //数组传参的时候，传的是首元素的地址，是指针
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//找到了
//		}
//	}
//	return -1;//没找到
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//找到了返回下标，找不到返回-1
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//	return 0;
//}

//5.4.写一个函数，每调用一次这个函数，就会将num的值增加1
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//8.1.汉诺塔问题


//8.2.青蛙跳台阶问题



