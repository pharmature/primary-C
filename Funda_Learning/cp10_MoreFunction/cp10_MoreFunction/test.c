#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 1. strlen() -- ���ַ�������
// size_t strlen(const char* str){}
// �ַ�����'\0'Ϊ������־��strlen�������ص�����'\0'ǰ����ֵ��ַ�������������'\0'
// ����ָ����ַ���������'\0'����
// ע�⺯���ķ���ֵ��size_t�����޷��ŵ�

// ģ��ʵ��
// 1.1 ������

//int my_strlen(const char* str) // ����ֵ������int���������
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// 1.2 �ݹ� - ��������ʱ����

//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

// 1.3 ָ�� - ָ��

//int my_strlen(const char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	/*const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}*/
//	// ����� > ,strlen�⺯���ķ���ֵ������ size_t
//
//
//	char arr[] = "hello world";
//	printf("%zd\n", strlen(arr));
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


// 2. strcpy() -- �ַ�������
// char* strcpy(char* dest, const char* src)
// Դ�ַ���������'\0'����
// �ὫԴ�ַ����е�'\0'������Ŀ��ռ�
// Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
// Ŀ��ռ����ɱ�

// ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//
//	/*strcpy(arr2, arr1); 
//	printf("%s\n", arr2);*/
//
//	//printf("%s\n", strcpy(arr2, arr1));
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}


// 3. strcat() -- �ַ���׷��
// Դ�ַ���������'\0'����
// Ŀ��ռ�����㹻����������Դ�ַ���������
// Ŀ��ռ��������޸�

// ģ��ʵ��

char* my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);
	while (*dest != '\0')
	{
		dest++;
	}
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = "hello "; // Ŀ��ռ�����㹻��
	char arr2[] = "world";

	//strcat(arr1, arr2);
	/*my_strcat(arr1, arr2);
	printf("%s\n", arr1);*/

	//printf("%s\n", my_strcat(arr1, arr2));

	// �ַ����Լ����Լ�׷��
	printf("%s\n", my_strcat(arr1, arr1));
	
	return 0;
}















