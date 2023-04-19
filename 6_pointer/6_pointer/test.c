#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.指针是什么
//指针是内存中一个最小单元的编号，也就是地址
//通常指的是指针变量，用来存放内存地址的变量

//int main()
//{
//	int a = 10;
//	char ch;
//	int* pa = &a;
//	char* pc = &ch;
//	printf("%p\n", &a);
//	return 0;
//}

//指针变量，就是用来存放地址的变量，存放在指针中的值都被当成内存地址处理



//2.指针和指针类型

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//指针类型决定了，指针进行解引用操作的时候，访问几个字节（权限）
//char* 的指针解引用访问1个字节
//int*  的指针解引用访问4个字节

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//	
//	printf("pa+1=%p\n", pa + 1);
//	printf("pc+1=%p\n", pc + 1);
//	return 0;
//}
//指针类型决定了指针的步长（向前/向后，走一步多大距离）
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;
//	//	p++;
//	//}
//	return 0;
//}



//3.野指针
//野指针就是指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）

//指针未初始化
//int main()
//{
//	int* p;//p就是野指针
//	*p = 20;
//	return 0;
//}

//指针越界访问
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//指针指向的空间释放
//int* test()
//{
//	int num = 100;
//	return &num;
//}
//int main()
//{
//	int*p = test();
//	*p = 200;
//	return 0;
//}

//如何避免野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放，及时置NULL
//4.避免返回局部变量的地址，避免返回栈空间的地址
//5.指针使用之前检查有效性
//int main()
//{
//	int a = 10;
//	//int* p = NULL;
//	int* p = &a;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}



//4.指针运算
//指针+-整数
//int main()
//{
//	double arr[10] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//	return 0;
//}

//指针-指针 - 指针之间元素的个数
//int main()
//{
//	//两个指针相减的前提是：指针指向同一块空间
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//指针的关系运算 - 指针比较大小
//标准规定，允许指向数组元素的指针与指向最后一个元素后面的那个内存位置的指针比较，
//但是不允许与指向第一个元素之前的那个内存位置的指针进行比较



//5.指针和数组
//数组名就是数组首元素的地址
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}



//6.二级指针
//int main()
//{
//	int a = 10;
//	int* p = &a;//p就是指针变量，一级指针
//	int** pp = &p;//pp就是二级指针
//
//	//*p = 20;
//	//*(*pp) = 200;
//	**pp = 300;
//	printf("%d\n", a);
//	return 0;
//}



//7.指针数组
//指针数组是数组 - 存放指针的数组
//int main()
//{
//	int* arr[5];//存放整型指针的数组
//	char* arr2[6];//存放字符指针的数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr[5] = { &a,&b,&c,&d,&e };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	//用一维数组模拟一个二维数组
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


