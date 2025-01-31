#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1. C语言的函数：
// 一段代码块，负责完成某项特定的任务，具备相对的独立性。
// 函数有 参数 和 返回值，过程封装，细节隐藏，集成为软件库。

// 2.函数的分类
// 2.1 库函数
// C语言的基础库中就提供了一系列函数，不用写基础的功能。
// 常用的有：IO函数、字符串操作函数、字符操作函数、内存操作函数、时间/日期函数、数学函数
// 使用库函数，必须预处理指令 #include 包含对应的头文件

// strcpy() - 字符串拷贝
//char* strcpy(char* destination, const char* source)；
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[20] = { 0 }; //要保证目标数组有足够的内存空间
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

// memset() - 内存设置
//void* memset(void* ptr, int value, size_t num);
//#include <memory.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	printf("%s\n", arr1);
//	memset(arr1, 'x', 5); //替换的"值"和替换的"数量"不能搞错顺序
//	printf("%s\n", arr1);
//	return 0;
//}


// 2.2 自定义函数
// 程序员自己写的定义的函数
// 包括：返回值类型、函数名、参数

// 写一个函数可以找到两个整数的最大值
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

// 3. 函数的参数
// 3.1实参 -- 实际参数：真实传递给函数的参数
// 常量、变量、表达式、函数；
// 进行函数调用时，必须有确定的值，才可以把这些值传递给形参。

// 3.2 形参 -- 形式参数：函数名括号中的变量
// 形式参数旨在函数被调用的过程中才实例化，分配内存
// 函数调用完成之后，形式参数自动销毁，所以形式参数只在函数中有效

// 实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
// 想要修改，使用指针。

// 写一个函数可以交换两个整形变量的值
//void swap(int* pa,int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	printf("修改前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("修改后：a=%d b=%d\n", a, b);
//	return 0;
//}

// 修改指针的拷贝，并不会改变指针指向的内容
//void swap(int* pa,int* pb)
//{
//	int* tmp = pa;
//	pa = pb;
//	pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	printf("修改前：a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("修改后：a=%d b=%d\n", a, b);
//	return 0;
//}

// 4. 函数的调用
// 4.1 传值调用
// 函数的形参和实参分别占有不同的内存块，对形参的修改不会影响实参；

// 4.2 传址调用
// 把函数外部创建的变量的内存递质传递给函数参数的调用方式
// 可以让函数和函数外边的变量建立起真正的联系，也就是函数内部可以直接操作函数外部的变量。

// 写一个函数判断一个数是不是闰年
//int is_leap_year(int y)
//{
//	/*if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	return 0;*/
//	
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//			printf("%d ", year);
//
//	}
//	return 0;
//}

// 写一个函数判断一个数是不是素数
//#include <math.h>
//int is_prime(int a)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(a); i++) // 必须从2开始，不能从1开始
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 101; a <= 200; a++)
//	{
//		if (is_prime(a))
//			printf("%d ", a);
//	}
//	return 0;
//}

// 写一个函数，实现一个整形有序数组的二分查找
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left);
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	while (1)
//	{
//		scanf("%d", &k);
//		if (-1 == binary_search(arr, k, sz))
//			printf("找不到");
//		else
//		{
//			k = binary_search(arr, k, sz);
//			printf("找到了，下标是:>%d\n", k);
//			break;
//		}
//	}
//
//	return 0;
//}

// 写一个函数，每调用一次这个函数，就会将num的值增加1
//void add(int* a)
//{
//	//*a = *a + 1;
//	//*a += 1;
//	(*a)++;
//}
//int main()
//{
//	int num = 0;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		add(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}

// 5. 函数的嵌套调用和链式访问
// 5.1 嵌套调用 -- 函数和函数之间可以根据实际的情况进行相互调用

//void print()
//{
//	printf("welcome home!\n");
//}
//void Print()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		print();
//	}
//}
//int main()
//{
//	Print();
//	return 0;
//}

// 函数可以嵌套调用，但是不可以嵌套定义
//void Print()
//{
//	void print();
//}

// 5.2 链式访问 -- 把一个函数的返回值作为另一个函数的参数

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	// printf() -- 返回值是打印的字符的个数
//	return 0;
//}


// 6. 函数的声明和定义
// 6.1 函数声明 
// 告诉编译器有一个函数，包括返回值类型，函数名，参数类型；但是具体是不是存在，函数声明决定不了。
// 函数的声明要在函数使用之前，保证先声明后使用
// 函数的声明一般放在头文件中

// 6.2 函数定义 -- 函数的具体实现，交代函数的具体功能

//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int ret = add(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


// 7. 函数递归
// 7.1 递归 -- 程序调用自身
// 一个过程或者函数在其定义或说明中有直接或间接调用自身；
// 方法：把一个大型复杂的问题层层转化为一个与原问题相似的规模较小的问题来解决 -- 把大事化小
// 优点：少量的程序就可以描述解题过程所需要的多次重复计算，极大减少了程序的代码量。

// 7.2 递归的两个必要条件
// a. 存在限制条件，当满足这个限制条件，递归就不再继续；
// b. 每次递归调用之后越来越接近这个限制。

// 接受一个无符号整型，按照顺序打印它的每一位

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10); // 递归
//	}
//	printf("%d ", n % 10); // 打印个位的数字
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num); // %u -- 无符号整形
//	print(num);
//	return 0;
//}


// 编写函数，求字符串的长度

//int my_strlen(char* str)
//{
//	int count = 0; 
//	while (*str != '\0')  // 循环实现
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); // 递归实现
//		// 递归当中，使用str++没有效果，使用++str会改变参数的值，所以一般不适用前置或后置++
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello world!";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


// 7.3 递归与迭代(循环)

// 求n的阶乘
//unsigned int fab(unsigned int n)
//{
//	if (n >= 2)
//	{
//		return n * fab(n - 1);
//	}
//	return 1;
//}

//unsigned int fab(unsigned int n)
//{
//	int res = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++) // 循环迭代
//	{
//		res = res * i;
//	}
//	return res;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	unsigned int ret = fab(n);
//	printf("%u", ret);
//	return 0;
//}

// 求第n个斐波那契数（不考虑溢出）
//unsigned int fib(unsigned int n)
//{
//	if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);  //递归
//	}
//	return 1;
//}

unsigned int fib(unsigned int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3) // 循环迭代
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	unsigned int n = 0;
	while (1)
	{
		scanf("%u", &n);
		unsigned int ret = fib(n);
		printf("%u\n", ret);
	}
	return 0;
}

// stack overflow -- 栈溢出
// 系统分配给程序的栈空间是有限的，如果出现死循环，或者死递归，可能导致一直开辟栈空间，最终导致栈空间耗尽


// 许多问题以递归的形式解释，是因为它比非递归的形式更为清晰；
// 但是这些问题的迭代实现比递归实现效率更高，虽然代码的可读性较差；
// 当一个问题相当复杂，难以用迭代实现时，递归的简洁性可以补偿它所带来的运行开销。



