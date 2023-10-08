#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.字符指针

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch; //pc就是字符指针
//	
//	const char* p = "abcdef"; //表达式的值是首字符的地址
//	//把字符串首字符的地址存放在p中
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}



//2.指针数组

//字符数组 --- 存放字符的数组
//整型数组 --- 存放整型的数组

//指针数组 --- 存放指针的数组
//存放字符指针的数组 - 字符指针数组
//char* arr[5];
//存放整型指针的数组 - 整型指针数组
//int* arr[6];

//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "qwer" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(arr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//3.数组指针 --- 指向数组的指针
// &arr - 取出的是数组的地址
// int arr[10];
// int (*pa)[10] = &arr;

// int* arr[5];
// int* (*p)[5] = &arr;

//int arr[10]
//arr 和 &arr 有什么区别
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//数组名是数组首元素的地址
//两个例外：
//1.sizeof(数组名) - 数组名表示的整个数组，计算得到的是数组的总大小
//2.&数组名 - 数组名表示整个数组，取出的是整个数组的地址，从地址值的角度来讲和数组首元素的地址是一样的，但是意义不一样

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//通过下标访问
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//通过指针访问
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//通过数组指针访问
//	int(*p)[10] = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}




//4.数组传参和指针传参
//4.1一维数组传参
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//4.2二维数组传参
//void test(int arr[3][5])
//{}
//void test(int arr[][]) //错误
//{}
//void test(int arr[][5])
//{}
////二位数组传参，函数形参的设计只能省略第一个[]的数字
////因为对一个二位数组，可以不知道有多少行，但是必须知道一行多少元素
////方便运算
//
//void test(int* arr) //错误
//{}
//void test(int* arr[5])  //错误
//{}
//void test(int (*arr)[5])
//{}
//void test(int **arr) //错误
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//二维数组传参
//参数可以是指针。也可以是数组
//如果是数组，行可以省略，列不能省略
//如果是指针，传过去的是第一行的地址，形参就是数组指针

//4.3一级指针传参
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//当一个函数的参数部分为一级指针的时候，函数能接收什么参数 --- &a, *p ,arr

//4.4二级指针传参
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//当函数的参数部分为二级指针的时候，函数能接收什么参数 --- 二级指针变量、一级指针变量的地址



//5.函数指针
//指向函数的指针
//函数名 和 &函数名 --- 得到函数的地址，没有区别
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = ADD; //函数的地址要存起来，就得放在[函数指针变量]中
//	// pf 是函数指针的名称
//
//	//通过指针调用函数
//	int ret = (*pf)(3, 5);
//	int ret1 = pf(3, 5);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}

//《C陷阱与缺陷》
// 代码1
//int main()
//{
//	//1.将0强制类型转换为 void(*)() 类型的函数指针
//	//2.0地址处存放一个函数，函数没参数，返回类型为 void
//	//3.调用0地址处的这个函数
//	(*( void(*)() ) 0)();
//
//	return 0;
//}

// 代码2
//typedef int* ptr_t;
//typedef void(*pf_t)(int); // 将void(*)(int)类型重新起个别名叫pf_t
//int main()
//{
//	//函数的声明
//	//函数的名字是signal
//	//signal函数的参数第一个是int，第二个是void(*)(int)类型的函数指针
//	//该函数指针指向的函数参数是int，返回类型是void
//
//	//signal函数的返回类型也是一个函数指针
//	//该函数指针指向的函数参数是int，返回类型是void
//	void ( * signal(int, void(*)(int)) )(int);
//
//	//简化
//	pf_t signal(int, pf_t);
//	//void(*)(int)(signal(int, void(*(int));
//	return 0;
//}



//6.函数指针数组
//数组的每个元素是一个函数指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//存放函数指针的数组
//	int (*pf[3])(int, int) = { Add, Sub, Div };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int ret = pf[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//应用 --- 转移表



//7.指向函数指针数组的指针 --- 一个 指针 指向一个 数组 ，数组的元素都是 函数指针。
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add; //函数指针
//	int (*pfarr[4])(int, int) = { Add, Sub };  //函数指针数组
//
//	int (*(*ppfarr)[4])(int, int) = &pfarr; //ppfarr是一个指向函数指针数组的指针变量
//	
//	return 0;
//}



//8.回调函数
//回调函数就是一个通过函数指针调用的函数。
//如果把函数的指针(地址)作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数时，就说这是回调函数
//回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。

//函数形参里的函数指针调用函数

//qsort()库函数的使用 - 快速排序

//void bubble_sort(int arr[], int sz) // 冒泡排序 - 只能排序固定类型的数据
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	
//	return 0;
//}

//qsort的好处 - 现成的库函数；可以排序任意类型的数据
//比较2个整数的大小， > < ==
//比较2个字符串，strcmp
//比较2个结构体数据，指定比较的标准 --- 拿什么比较

//void qsort(void* base, size_t num, size_t size, int(*cmp)(const void*, const void*))

// base - 指向了待排序数组的第一个元素
// num - 待排序的元素个数
// size - 每个元素的大小，单位是字节
// cmp - 指向一个函数，这个函数可以比较2个元素的大小(回调函数)

// qsort函数的使用者提供这个函数
//#include <stdlib.h>
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2; // 先强制类型转换
//}
//// void* - 无具体类型的指针，所以它可以接收任何类型的地址
//// void* 指针不能解引用
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 使用qsort来排序整型数组，要提供一个比较函数，这个比较函数能够比较2个整数的大小
//	// qsort 默认是升序排列
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
////测试qsort排序结构体数据
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 25}, {"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//按照年龄来排序
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//按照名字来排序
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}

// flag=1 假设已经有序，发现两个需要交换 flag=0



//9.指针和数组面试题

// 一维数组
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a)); //16
//	//sizeof(a)就是数组名单独放在sizeof内部，计算数组的总大小，单位是字节
//
//	printf("%d\n", sizeof(a + 0)); //4/8
//	//a+0 没有单独放在sizeof里，就是数组首元素的地址
//	
//	printf("%d\n", sizeof(*a)); //4 字节
//	//a是数组首元素的地址
//	//*a -> &a[0] -> a[0] 整型的大小
//
//	printf("%d\n", sizeof(a + 1)); //4/8
//	//a是数组首元素的地址
//	//a+1 跳过一个整型，是第二个元素的地址
//
//	printf("%d\n", sizeof(a[1])); //4
//	//整型的大小
//
//	printf("%d\n", sizeof(&a)); //4/8
//	//&a - 取出的是数组的地址，但是数组的地址也是地址。地址的大小是4/8
//
//	printf("%d\n", sizeof(*&a)); //16
//
//	printf("%d\n", sizeof(&a+1)); //4/8
//	//跳过一个数组的地址，还是地址，注意指针指向的位置
//
//	printf("%d\n", sizeof(&a[0])); // 4/8
//	//取出首元素的地址
//
//	printf("%d\n", sizeof(&a[0]+1)); // 4/8
//	//第二个元素的地址
//
//	return 0;
//}

//sizeof()计算的是占用内存空间的大小，单位是字节，不关注内存中到底存放的是什么
//sizeof不是函数，是操作符
//strlen()是函数
//strlen()是针对字符串的

// 字符数组
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr)); //6
//	
//	printf("%d\n", sizeof(arr+0)); //4/8
//	//首元素的地址
//	
//	printf("%d\n", sizeof(*arr)); //1
//	//首元素
//
//	printf("%d\n", sizeof(arr[1])); //1
//	//第二个元素
//
//	printf("%d\n", sizeof(&arr)); //4/8
//
//	printf("%d\n", sizeof(&arr + 1)); // 4/8
//	
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8
//
//
//	printf("%d\n", strlen(arr)); //随机值
//
//	printf("%d\n", strlen(arr + 0)); //随机值
//	
//	printf("%d\n", strlen(*arr)); //非法访问
//	//a的ASCII码 97
//	
//	printf("%d\n", strlen(arr[1])); //非法访问
//	//b的ASII码 98
//	
//	printf("%d\n", strlen(&arr)); //随机值 A
//	
//	printf("%d\n", strlen(&arr + 1)); //随机值 A-6
//	 
//	printf("%d\n", strlen(&arr[0] + 1)); //随机值 A-1
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	printf("%d\n", sizeof(arr + 0)); //7
//	printf("%d\n", sizeof(*arr)); //1
//	//首元素的大小
//	printf("%d\n", sizeof(arr[1])); // 1
//	printf("%d\n", sizeof(&arr)); //4/8
//	printf("%d\n", sizeof(&arr + 1));  //4/8
//	printf("%d\n", sizeof(&arr[0] + 1)); //4/8
//
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0)); //6
//	printf("%d\n", strlen(*arr)); //非法访问
//	//首元素a的ASII码 97
//	printf("%d\n", strlen(arr[1])); //非法访问
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //随机值
//	printf("%d\n", strlen(&arr[0] + 1)); //5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p)); // 4/8
//	printf("%d\n", sizeof(p + 1));  // 4/8
//	printf("%d\n", sizeof(*p));  // 1
//	printf("%d\n", sizeof(p[0])); // 1
//	printf("%d\n", sizeof(&p)); // 4/8
//	printf("%d\n", sizeof(&p + 1)); // 4/8
//	printf("%d\n", sizeof(&p[0] + 1)); // 4/8
//	return 0;
//}
