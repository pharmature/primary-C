#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 1. strlen() -- 求字符串长度
// size_t strlen(const char* str){}
// 字符串以'\0'为结束标志，strlen函数返回的是在'\0'前面出现的字符个数，不包含'\0'
// 参数指向的字符串必须以'\0'结束
// 注意函数的返回值是size_t，是无符号的

// 模拟实现
// 1.1 计数器

//int my_strlen(const char* str) // 返回值类型用int，方便计算
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

// 1.2 递归 - 不创建临时变量

//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

// 1.3 指针 - 指针

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
//	// 结果是 > ,strlen库函数的返回值类型是 size_t
//
//
//	char arr[] = "hello world";
//	printf("%zd\n", strlen(arr));
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


// 2. strcpy() -- 字符串拷贝
// char* strcpy(char* dest, const char* src)
// 源字符串必须以'\0'结束
// 会将源字符串中的'\0'拷贝到目标空间
// 目标空间必须足够大，以确保能存放源字符串
// 目标空间必须可变

// 模拟实现
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


// 3. strcat() -- 字符串追加
// 源字符串必须以'\0'结束
// 目标空间必须足够大，能容纳下源字符串的内容
// 目标空间必须可以修改

// 模拟实现

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
	char arr1[20] = "hello "; // 目标空间必须足够大
	char arr2[] = "world";

	//strcat(arr1, arr2);
	/*my_strcat(arr1, arr2);
	printf("%s\n", arr1);*/

	//printf("%s\n", my_strcat(arr1, arr2));

	// 字符串自己给自己追加
	printf("%s\n", my_strcat(arr1, arr1));
	
	return 0;
}















