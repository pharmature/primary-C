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
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	while (str1)
//	{
//		s1 = (char*)str1;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)str1;
//		str1++;
//	}
//	return NULL;
//}
//// 还有更优算法 - KMP
//
//int main()
//{
//	char arr1[] = "abbbbcdef";
//	char arr2[] = "bcd";
//
//	//char* p = strstr(arr1, arr2);
//	char* p = my_strstr(arr1, arr2);
//
//	printf("%s\n", p);
//	return 0;
//}


// 6. strtok() - 分割字符串
// char* strtok(char* str, const char* sep)
// sep参数是一个字符串，定义了用作分隔符的字符合集
// 第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记
// strtok()函数找到str中的下一个标记，并将其用'\0'结尾，返回一个指向这个标记的指针
// 注：strtok()函数会改变被操作的字符串，所以使用strtok()函数切的分字符串一般都是临时拷贝的内容并且可修改
// strtok()函数的第一个参数不为NULL，函数找到str中第一个标记，strtok函数将保存它在字符串中的位置
// strtok()函数的第一个参数为NULL，函数将在同一个字符串中被保存的位置开始，查找下一个标记
// 如果字符串中不存在更多的标记，则返回 NULL 指针

//int main()
//{
//	//char arr[] = "pharmature@foxmail.com";
//	char arr[] = "192.163.255.255";
//	char cup[30] = { 0 };
//	strcpy(cup, arr); // 临时拷贝
//
//	//char* sep = "@.";
//	char* sep = ".";
//
//	char* str = NULL;
//	for (str = strtok(cup, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}


// 7. strerror() - 获取错误信息
// char* strerror(int errnum)
// 返回错误码所对应的错误信息

//int main()
//{
//	char* p = strerror(0);
//	printf("%s\n", p);
//
//	p = strerror(1);
//	printf("%s\n", p);
//
//	p = strerror(2);
//	printf("%s\n", p);
//
//	p = strerror(3);
//	printf("%s\n", p);
//	return 0;
//}

// C语言的库函数在调用失败的时候，会将错误码存放在一个叫 errno 的变量中
// 当我们想知道调用库函数的时候发生了什么错误，就可以将errno的错误码翻译成错误信息
//#include <errno.h>
//int main()
//{
//	// 打开文件
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		printf("文件打开失败，错误信息：%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 读写文件
//
//	// 关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// perror() - 打印错误信息
//#include <errno.h>
//int main()
//{
//	// 打开文件
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("文件打开失败"); - 自带冒号
//		return 1;
//	}
//
//	// 读写文件
//
//	// 关闭文件
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// 8. memcpy() - 内存拷贝
// void* memcpy(void* dest, const void* src, size_t num);
// 从src的位置向后复制num个字节的数据到dest的内存位置
// 这个函数在遇到'\0'的时候并不会停下来
// 使用 void* 的原因是作者不知道具体拷贝的是什么类型的数据

// 如果src和dest有任何的重叠，复制的结果是未定义的

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//把arr1中的前5个数据拷贝到arr2中
//	memcpy(arr2, arr1, 20);
//	return 0;
//}

// 模拟实现
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//
//	// 发生重叠的情况
//	//my_memcpy(arr1 + 2, arr1, 20); //error
//	memcpy(arr1 + 2, arr1, 20); // VS环境下可以使用，但是其它环境下结果未知
//
//	return 0;
//}
// C语言规定：memcpy()拷贝不重叠的内存
// VS环境下可以使用


// 9. memmove() - 重叠的内存拷贝
// void* memmove(void* dest, const void* src, size_t num);
// 和memcpy的差别就是memmove函数处理的源内存块和目标内存块是可以重叠的

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	memmove(arr1 + 2, arr1, 20);
//
//	return 0;
//}

// 模拟实现

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	// 从前 -> 后
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	// 从后 -> 前
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

// 10. memcmp() - 内存比较
//void* memcmp(const void* ptr1, const void* ptr2, size_t num);
//比较从ptr1和ptr2指针开始的num个字节
//返回值和strcmp()、strncmp()函数相同

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//	printf("%d\n", memcmp(arr1, arr2, 17));
//	return 0;
//}

// 11. memset() - 内存设置
//void* memset(void* ptr, int value, size_t num)
//从ptr开始，将num个字节的内存设置为value

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


// 字符分类函数
//iscntrl - 任何控制字符
//isspace - 空白字符：空格' ',换页'\f'，换行'\n',回车'\r'，制表符'\t'，垂直制表符'\v'
//isdigit - 十进制数字0~9
//isxdigit - 十六进制数字，包括十进制数字，小写字母a~f,大写字母A~F
//islower - 小写字母a~z
//isupper - 大写字母A~Z
//isalpha - 字母a~z或则A~Z
//isalnum - 字母或者数字，a~z,A~Z,0~9,
//ispunct - 标点符号，任何不属于数字或者字母的图形字符(可打印)
//isgraph - 任何图形字符
//isprint - 任何可打印字符，包括图形字符和空白字符


// 字符转换
//tolower - 转换成小写
//toupper - 转换成大写

#include <ctype.h>
int main()
{
	char arr[30] = { 0 };
	gets(arr);

	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}


