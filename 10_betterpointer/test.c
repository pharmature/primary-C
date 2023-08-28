#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.字符指针

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch; //pc就是字符指针
//	
//	const char* p = "abcdef"; //表达式的值是首字符的地址
//	//把字符串首字符的地址存放在p中
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}



//2.指针数组

//字符数组 --- 存放字符的数组
//整型数组 --- 存放整型的数组

//指针数组 --- 存放指针的数组
//存放字符指针的数组 - 字符指针数组
//char* arr[5];
//存放整型指针的数组 - 整型指针数组
//int* arr[6];

//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "qwer" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(arr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//3.数组指针 --- 指向数组的指针
//&arr - 取出的是数组的地址
// int arr[10];
//int(*pa)[10] = &arr;

//int* arr[5];
//int* (*p)[5] = &arr;


//4.数组传参和指针传参


//5.函数指针


//6.函数指针数组


//7.指向函数指针数组的指针


//8.回调函数


//9.指针和数组面试题解析





