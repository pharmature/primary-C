#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.一维数组的创建和初始化
//数组 - 一组相同类型元素的集合
//int main()
//{
//	int arr[10];
//	char arr2[10];
//	return 0;
//}

//初始化 - 在创建数组的同时给数组的内容一些合理初始值（初始化）。
//int main()
//{
//	//int arr[10] = { 1 };//不完全初始化，第一个元素初始化为1，其余的元素默认为0
//	//int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char ch[10] = { 'a','b','c' };
//	//char ch2[10] = "abc";
//
//	//int arr3[] = { 1,2,3,4 };//不指定数组大小的时候一定要初始化
//	//char ch3[] = { 'a','b','c' };
//	//char ch4[] = "abc";
//	//char ch5[10] = "abc";
//
//	//char arr[] = ""; //创建的时候没有指定大小，也没有初始化
//	//scanf("%s", arr);
//	//printf("%s\n", arr);
//
//	int arr[] = { 0 }; //只有一个元素，后续使用容易溢出
//	
//	return 0;
//}

//C99中引入了变长数组的概念
//变长数组不是数组的长度可以变化，而是数组的大小可以用变量来指定
//int main()
//{
//	//支持C99的编译器
//	int n = 10;
//	int arr[n];
//	return 0;
//}


//2.一维数组的使用
//下标引用操作符 [] ，下标从0开始
//数组在内存中连续存储

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//3.一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}
//数组在内存中连续存放
//随着数组下标的增长，内存地址由低到高

//0 - 数字0，ASCLL码值是0
//'\0' - 转义字符0，ASCLL码值是0
//'0' - 字符0，ASCLL码值是48



//4.二维数组的创建和初始化
//int main()
//{
//	int arr[3][4]; //[行][列]
//	double arr2[4][5];
//	return 0;
//}

//初始化

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2},{3,4},{5} };
//
//	//二维数组初始化，可以省略行，不能省略列
//	int arr3[][4] = { 1,2,3,4,5, };
//
//	return 0;
//}



//5.二维数组的使用
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//6.二维数组在内存中的存储
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//在内存中连续存放



//7.数组越界
//数组的下标是有范围的

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]); //i=10时,数组越界
//	}
//	return 0;
//}
//C语言本身是不做数组下标的越界检查，
//编译器也不一定报错，但是编译器不报错，并不意味着程序就是正确的，
//程序员写代码时，自己做越界的检查



//8.数组作为函数参数

//冒泡排序的思想：
//两两相邻的元素进行比较
//void bubble_sort(int arr[],int sz)
////void bubble_sort(int *arr,int sz)
//{
//	//求数组的元素个数
//	//int sz = sizeof(arr) / sizeof(arr[0]); error
//	//冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对数组进行升序排序
//	//冒泡排序
//	bubble_sort(arr,sz);
//	//数组传参，写的是数组名，本质上是数组首元素的地址
//	//传参的时候，传递的就是数组首元素的地址
//	//函数的形参就应该是指针变量来接收
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//数组名是首元素的地址
//两个例外：
//1.sizeof(数组名)，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出的是整个数组的地址
//除此之外，遇到的数组名都是数组首元素的地址

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}
















