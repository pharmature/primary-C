#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.debug��release
//Debug - ���԰汾������������Ϣ�������κ��Ż������ڳ���Ա���Գ���

//Release - �����汾�������˸����Ż���ʹ�ó����ڴ����С�������ٶ��϶������ŵģ��Ա��û��ܺõ�ʹ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//	}
//	return 0;
//}


//2.windows��������
//F5 - ��������,������һ���ϵ㴦
//F9 - ������ȡ���ϵ�
//F10 - �����
//F11 - ����䣬���Խ��뺯���ڲ�
//Ctrl+F5 - ��ʼ������



//3.���Ե�ʵ��
//ʵ�ִ��룺��1��+2��+3��+...+n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//
//		ret = ret * i;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯����strcpy

//void my_strcpy(char* dest,char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	//assert(dest !=NULL);//����
//	//assert(src != NULL);
//
//	//assert(dest);//����
//	//assert(src);
//
//	char* ret = dest;
//	assert(dest && src);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//
//	//strcpy(arr1, arr2);
//	
//	//my_strcpy(arr1, arr2);
//	//printf("%s\n", arr1);
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//const����ָ�룬����*����ߣ���ʾ����ָ��ָ������ݲ���ͨ��ָ�����޸ģ�����ָ�����������޸�
//const����ָ�룬����*���ұߣ���ʾ����ָ������������޸ģ�����ָ��ָ������ݿ���ͨ��ָ�����޸�
//int main()
//{
//	const int num = 10;
//	//num = 20; //err
//	int ret = 100;
//
//	int* const p = &num;
//	*p = 20;
//	//p = &ret;
//
//	printf("%d\n", num);
//	printf("%d\n", *p);
//	return 0;
//}

//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

