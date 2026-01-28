#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//动态内存管理

//1. 为什么需要动态内存管理
//之前的内存开辟方式 - 数组
//开辟的空间大小是固定的
//数组在申明的时候，必须指定数组的长度，它所需要的内存在编译时分配


//2. 动态内存函数
// 
//2.1 malloc
//void* malloc(size_t size)
//1. 如果开辟成功，则返回一个指向开辟好的空间的指针。
//2. 如果开辟失败，则返回一个 NULL 指针，因此malloc的返回值一定要做检查
//3. 返回值的类型是 void*,所以 malloc 函数并不知道开辟空间的类型，具体在使用的时候使用者自己来决定
//4. 如果参数size为0，malloc的行为是标准未定义的，取决于编译器

//2.2 free
//void free(void* ptr)
//释放动态开辟的内存
//1. 如果参数ptr指向的空间不是动态开辟的，那么free函数的行为是未定义的
//2. 如果参数ptr是NULL指针，则函数什么都不做

//int main()
//{
//	//开辟
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	// 使用
//
//
//	//释放
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.3 calloc()
//void* calloc(size_t num, size_t size)
//为num个大小为size的元素开辟一块空间，并且把空间的每个字节初始化为0
//与函数malloc的区别：calloc会在返回地址之前把审清的空间的每个字节初始化为全0

//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	free(p);
//	p = NULL;
//	return 0;
//}

//如果对申请的内存空间的内容要求初始化，那么可以很方便的使用calloc函数来完成函数


//2.4 realloc
//void* realloc(void* ptr, size_t size)
//ptr - 是要调整的内存位置
//size - 调整之后的新大小
//返回值为调整之后的内存起始位置
//这个函数调整原内存空间的大小的基础上，还会将原来内存中的数据转移到新的空间

//realloc 在调整内存空间时存在两种情况
//1. 原有空间之后有足够大的空间
//扩展内存就直接在原有内存之后直接追加空间，原来空间的数据不发生改变
//2. 原有空间之后没有足够大的空间
//在堆空间上另找一个合适大小的连续空间来使用，这样函数返回的是一个新的内存空间

//注意：realloc申请函数存在申请失败的情况

//int main()
//{
//	//申请
//	int* ptr = (int*)malloc(40);
//	if (ptr == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	//调整
//	int* p = NULL;
//	p = (int*)realloc(ptr, 80); //存在申请失败的情况，返回值是NULL
//	if (p != NULL)
//	{
//		ptr = p;
//	}
//
//	//释放
//	free(ptr);
//	ptr = NULL;
//	return 0;
//}


//3. 常见的动态内存错误
//3.1 对NULL指针的解引用操作

//int main()
//{
//	int* p = (int*)malloc(40000000000);
//	//...
//	*p = 20; //如果申请失败，返回值是NULL，error
//
//	free(p);
//	p = NULL;
//	return 0;
//}


//3.2 对动态开辟空间的越界访问

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	for (int i = 0; i < 10; i++) // 越界访问
//	{
//		*(p + i) = i + 1;
//	}
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.3 对非动态开辟的内存使用free释放

//int main()
//{
//	/*int arr[10] = { 0 };
//	free(arr);*/
//
//	int a = 10;
//	int* p = &a;
//	free(p);
//	return 0;
//}


//3.4 使用free释放动态开辟内存的一部分

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	int i = 2;
//	while (i--)
//	{
//		*p = i;
//		p++; //指针指向的地址改变
//	}
//
//
//	free(p); //只释放了一部分内存
//	p = NULL;
//	return 0;
//}


//3.5 对同一块动态内存多次释放

//int main()
//{
//	int* p = (int*)malloc(20);
//	free(p);
//	free(p);
//	return 0;
//}


//3.6 动态开辟内存忘记释放 - 内存泄露

//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		perror(errno);
//		return 1;
//	}
//
//	//忘记释放
//
//	/*free(p);
//	p = NULL;*/
//	return 0;
//}


//4. 笔试题
//4.1 
void GetMemory1(char* p)
{
	p = (char*)malloc(100);
}

void test1()
{
	char* str = NULL;
	GetMemory1(str);
	strcpy(str, "hello world");
	printf(str);
}
//程序崩溃
//1. 调用GetMemory1函数的时候，str传参为值传递，p是str的临时拷贝，所以在GetMemory1函数的内部将动态开辟的内存的地址存放在p中的时候
// 不会影响str，所以GetMemory1函数返回之后，str中依然是NULL指针。
// strcpy函数会调用失败，原因是对NULL的解引用操作，程序会崩溃

//2. GetMemory函数开辟的内存没有机会释放，内存泄露


//4.2 
char* GetMemory2()
{
	char p[] = "hello world";
	return p;
}

void test2()
{
	char* str = NULL;
	str = GetMemory2();
	printf(str);
}
//1. GetMemory2()函数内部创建的数组是临时的，虽然返回了数组的起始地址给str,但是数组的内存出了GetMemory()函数就被回收了，
// 而str依然保存了数组的起始地址，这时如果使用str，str就是野指针


//4.3 
void GetMemory3(char** p, int num)
{
	*p = (char*)malloc(num);
}

void test3()
{
	char* str = NULL;
	GetMemory3(&str, 100);
	strcpy(str, "hello");
	printf(str);
}

//1. 动态开辟的内存未释放


//4.4 
void test4()
{
	char* str = (char*)malloc(100);
	strcpy(str, "hello ");
	
	free(str);
	//str = NULL;

	if (str != NULL)  //str已经释放了，非法访问
	{
		strcpy(str, "world");
		printf(str);
	}
}



//5. C/C++程序的内存开辟









