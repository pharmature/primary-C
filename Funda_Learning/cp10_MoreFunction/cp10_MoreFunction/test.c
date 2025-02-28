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
//	char arr1[20] = "hello "; // 目标空间必须足够大
//	char arr2[] = "world";
//
//	//strcat(arr1, arr2);
//	/*my_strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	// 字符串自己给自己追加 -- 死循环
//	printf("%s\n", my_strcat(arr1, arr1));
//	
//	return 0;
//}


// 4. strcmp() - 字符串比较
// int strcmp(const char* str1, const char* str2)
// str1 大于 str2，返回大于0的数字
// str1 等于 str2，返回0
// str1 小于 str2，返回小于0的数字

// 模拟实现
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


// 以上都是长度不受限制的字符串函数，还有几个限制长度的函数
// strncpy(char* dest, const char* src, size_t num)
// 拷贝 num 个字符从源字符串到目标空间
// 如果源字符串的长度小于num，则拷贝完之后，在目标的后面追加0，直到num个

// strncat(char* dest, const char* src, size_t num)
// 追加 num 个字符从源字符串到目标空间
// 如果源字符串的长度小于num，不会追加0

// strncmp(const char* str1, const char* str2, size_t num)
// 比较到出现另个字符不一样，或者一个字符串结束，或者num个字符全部比较完


// 5. strstr() - 寻找字符串
// 在第一个字符串中寻找第二个字符串第一次出现的位置，没有则返回NULL

// 模拟实现 - 暴力查找算法
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







