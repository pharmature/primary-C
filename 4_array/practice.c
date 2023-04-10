#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
 
//int main()
//{
//	int arr_A[5] = { 1,2,3,4,5 };
//	int arr_B[5] = { 6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr_A[i];
//		arr_A[i] = arr_B[i];
//		arr_B[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr_A[i]);
//	}
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。

//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}




//实现一个对整形数组的冒泡排序
//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
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
//	int arr[] = { 4,5,9,8,2,3,6,7,1,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
