#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. 字符指针

//int main()
//{
//	char ch = 'b';
//	char* pc = &ch; // 字符指针
//
//	char arr[] = "hello world";
//	char* p3 = arr;
//	// p 指向的是数组的首元素
//	// 数组是可以修改的
//
//	char* p = "hello world";
//	// 把字符串的首字符的地址存放在 p 中
//	// 表达式的值是首字符的地址
//	// 字符串是常量表达式，值不能修改，下面的写法更规范
//	const char* p2 = "hello";
//
//	printf("%s\n", p);
//	return 0;
//}


// 创建数组的时候，会开辟单独的空间，首元素地址不同
// 创建字符指针，C/C++会把常量字符串存储到单独一个内存区域，
// 几个指针指向同一个字符串的时候，实际指向的是同一个内存地址

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//
//	char* arr3 = "hello world";
//	char* arr4 = "hello world";
//
//	if (arr1 == arr2)
//		printf("arr1 and arr2 are same.\n");
//	else
//		printf("arr1 and arr2 are not same.\n");
//
//	if(arr3 == arr4)
//		printf("arr3 and arr4 are same.\n");
//	else
//		printf("arr3 and arr4 are not same.\n");
//
//	return 0;
//}


// 2. 指针数组 - 存储指针的数组

// 模拟二维数组
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = { 6,7,8,9,0 };
//	int arr3[5] = { 11,12,13,14,15 };
//
//	int* pa[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



// 3. 数组指针 - 指向数组的指针

// 3.1 定义
//int main()
//{
//	int arr[10] = {0};
//
//	int (*pa)[10] = &arr; // &arr得到的是整个数组的地址
//	// * 表示 pa 是个指针，int [10] 是指向的数组大小
//  // [] 的优先级高于 * ，所以必须加上 () 来保证 p 先和 * 结合
//
//	char* arr2[3];
//	char* (*pa2)[3] = &arr2;
//	return 0;
//}


// 3.2 数组名 和 &数组名

// 数组名 - 数组首元素的地址

// &数组名 - 整个数组的地址，比如 int(*)[10]
// +1 跳过整个数组的大小


// 3.3 数组指针的使用

//void print_arr1(int arr[3][5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	
//	print_arr1(arr, 3, 5);
//	// 数组名arr，表示首元素的地址
//	
//	print_arr2(arr, 3, 5);
//	// 二维数组的首元素是二维数组的第一行
//	// 这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	// 可以用指针数组来接收
//	return 0;
//}


// 4. 数组参数、指针参数















