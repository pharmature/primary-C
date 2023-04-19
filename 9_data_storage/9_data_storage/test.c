#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.数据类型介绍

//整型家族：
//char - unsigned char / signed char
//short - unsigned short / signed short
//int - unsigned int / signed int
//long - unsigned long / signed long

//浮点型家族：
//float
//double

//构造类型：自定义类型
//数组类型
//结构体类型 struct
//枚举类型 enum
//联合类型 union

//指针类型
//int* pi
//char* pc
//float* pf
//void* pv

//空类型
//void表示空类型（无类型）
//通常应用与函数的返回类型、函数的参数、指针类型



//2.整型在内存中的存储：原码、反码、补码
//正数的原、反、补码都相同
//负数
//
int main()
{
	int a = 20;
	//00000000 00000000 00000000 00010100 - 原、反、补码

	int b = -10;
	//10000000 00000000 00000000 00001010 - 原码
	//11111111 11111111 11111111 11110101 - 反码
	//11111111 11111111 11111111 11110110 - 补码
	return 0;
}


//3.大小端字节序



//4.浮点型在内存中的存储解析





