#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.�ַ�ָ��

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch; //pc�����ַ�ָ��
//	
//	const char* p = "abcdef"; //���ʽ��ֵ�����ַ��ĵ�ַ
//	//���ַ������ַ��ĵ�ַ�����p��
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



//2.ָ������

//�ַ����� --- ����ַ�������
//�������� --- ������͵�����

//ָ������ --- ���ָ�������
//����ַ�ָ������� - �ַ�ָ������
//char* arr[5];
//�������ָ������� - ����ָ������
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



//3.����ָ�� --- ָ�������ָ��
//&arr - ȡ����������ĵ�ַ
// int arr[10];
//int(*pa)[10] = &arr;

//int* arr[5];
//int* (*p)[5] = &arr;


//4.���鴫�κ�ָ�봫��


//5.����ָ��


//6.����ָ������


//7.ָ����ָ�������ָ��


//8.�ص�����


//9.ָ����������������





