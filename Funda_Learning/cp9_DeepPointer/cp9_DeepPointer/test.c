#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. �ַ�ָ��

//int main()
//{
//	char ch = 'b';
//	char* pc = &ch; // �ַ�ָ��
//
//	char arr[] = "hello world";
//	char* p3 = arr;
//	// p ָ������������Ԫ��
//	// �����ǿ����޸ĵ�
//
//	char* p = "hello world";
//	// ���ַ��������ַ��ĵ�ַ����� p ��
//	// ���ʽ��ֵ�����ַ��ĵ�ַ
//	// �ַ����ǳ������ʽ��ֵ�����޸ģ������д�����淶
//	const char* p2 = "hello";
//
//	printf("%s\n", p);
//	return 0;
//}


// ���������ʱ�򣬻Ὺ�ٵ����Ŀռ䣬��Ԫ�ص�ַ��ͬ
// �����ַ�ָ�룬C/C++��ѳ����ַ����洢������һ���ڴ�����
// ����ָ��ָ��ͬһ���ַ�����ʱ��ʵ��ָ�����ͬһ���ڴ��ַ

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


// 2. ָ������ - �洢ָ�������

// ģ���ά����
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



// 3. ����ָ�� - ָ�������ָ��

// 3.1 ����
//int main()
//{
//	int arr[10] = {0};
//
//	int (*pa)[10] = &arr; // &arr�õ�������������ĵ�ַ
//	// * ��ʾ pa �Ǹ�ָ�룬int [10] ��ָ��������С
//  // [] �����ȼ����� * �����Ա������ () ����֤ p �Ⱥ� * ���
//
//	char* arr2[3];
//	char* (*pa2)[3] = &arr2;
//	return 0;
//}


// 3.2 ������ �� &������

// ������ - ������Ԫ�صĵ�ַ

// &������ - ��������ĵ�ַ������ int(*)[10]
// +1 ������������Ĵ�С


// 3.3 ����ָ���ʹ��

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
//	// ������arr����ʾ��Ԫ�صĵ�ַ
//	
//	print_arr2(arr, 3, 5);
//	// ��ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	// ���ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	// ������ָ������������
//	return 0;
//}


// 4. ���������ָ�����















