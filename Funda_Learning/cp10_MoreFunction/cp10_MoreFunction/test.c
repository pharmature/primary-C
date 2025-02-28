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

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello "; // Ŀ��ռ�����㹻��
//	char arr2[] = "world";
//
//	//strcat(arr1, arr2);
//	/*my_strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	// �ַ����Լ����Լ�׷�� -- ��ѭ��
//	printf("%s\n", my_strcat(arr1, arr1));
//	
//	return 0;
//}


// 4. strcmp() - �ַ����Ƚ�
// int strcmp(const char* str1, const char* str2)
// str1 ���� str2�����ش���0������
// str1 ���� str2������0
// str1 С�� str2������С��0������

// ģ��ʵ��
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abb";
//	
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//
//	printf("%d\n", ret);
//	return 0;
//}


// ���϶��ǳ��Ȳ������Ƶ��ַ������������м������Ƴ��ȵĺ���
// strncpy(char* dest, const char* src, size_t num)
// ���� num ���ַ���Դ�ַ�����Ŀ��ռ�
// ���Դ�ַ����ĳ���С��num���򿽱���֮����Ŀ��ĺ���׷��0��ֱ��num��

// strncat(char* dest, const char* src, size_t num)
// ׷�� num ���ַ���Դ�ַ�����Ŀ��ռ�
// ���Դ�ַ����ĳ���С��num������׷��0

// strncmp(const char* str1, const char* str2, size_t num)
// �Ƚϵ���������ַ���һ��������һ���ַ�������������num���ַ�ȫ���Ƚ���


// 5. strstr() - Ѱ���ַ���
// �ڵ�һ���ַ�����Ѱ�ҵڶ����ַ�����һ�γ��ֵ�λ�ã�û���򷵻�NULL

// ģ��ʵ�� - ���������㷨
char* my_strstr(const char* str1, const char* str2)
{
	char* s1 = NULL;
	char* s2 = NULL;

	while (str1)
	{
		s1 = (char*)str1;
		s2 = (char*)str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (char*)str1;
		str1++;
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbbbcdef";
	char arr2[] = "bcd";

	//char* p = strstr(arr1, arr2);
	char* p = my_strstr(arr1, arr2);

	printf("%s\n", p);
	return 0;
}







