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

int main()
{
	//开辟
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	// 使用


	//释放
	free(p);
	p = NULL;
	return 0;
}