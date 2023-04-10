#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.debug和release
//Debug - 调试版本，包含调试信息，不做任何优化，便于程序员调试程序

//Release - 发布版本，进行了各种优化，使得程序在代码大小和运行速度上都是最优的，以便用户很好地使用

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


//2.windows环境调试
//F5 - 启动调试,跳到下一个断点处
//F9 - 创建和取消断点
//F10 - 逐过程
//F11 - 逐语句，可以进入函数内部
//Ctrl+F5 - 开始不调试



//3.调试的实例
//实现代码：求1！+2！+3！+...+n!
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

//模拟实现库函数：strcpy

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
//	//assert(dest !=NULL);//断言
//	//assert(src != NULL);
//
//	//assert(dest);//断言
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

//const修饰指针，放在*的左边，表示的是指针指向的内容不能通过指针来修改，但是指针变量本身可修改
//const修饰指针，放在*的右边，表示的是指针变量本身不能修改，但是指针指向的内容可以通过指针来修改
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

