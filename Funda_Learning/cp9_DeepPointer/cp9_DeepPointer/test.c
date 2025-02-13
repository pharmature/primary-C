#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. 字符指针

//int main()
//{
//	char ch = 'b';
//	char* pc = &ch; // 字符指针
//
//	char arr[] = "hello world";
//	char* p3 = arr;
//	// p 指向的是数组的首元素
//	// 数组是可以修改的
//
//	char* p = "hello world";
//	// 把字符串的首字符的地址存放在 p 中
//	// 表达式的值是首字符的地址
//	// 字符串是常量表达式，值不能修改，下面的写法更规范
//	const char* p2 = "hello";
//
//	printf("%s\n", p);
//	return 0;
//}


// 创建数组的时候，会开辟单独的空间，首元素地址不同
// 创建字符指针，C/C++会把常量字符串存储到单独一个内存区域，
// 几个指针指向同一个字符串的时候，实际指向的是同一个内存地址

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//
//	char* arr3 = "hello world";
//	char* arr4 = "hello world";
//
//	if (arr1 == arr2)
//		printf("arr1 and arr2 are same.\n");
//	else
//		printf("arr1 and arr2 are not same.\n");
//
//	if(arr3 == arr4)
//		printf("arr3 and arr4 are same.\n");
//	else
//		printf("arr3 and arr4 are not same.\n");
//
//	return 0;
//}


// 2. 指针数组 - 存储指针的数组

// 模拟二维数组
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = { 6,7,8,9,0 };
//	int arr3[5] = { 11,12,13,14,15 };
//
//	int* pa[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



// 3. 数组指针 - 指向数组的指针

// 3.1 定义
//int main()
//{
//	int arr[10] = {0};
//
//	int (*pa)[10] = &arr; // &arr得到的是整个数组的地址
//	// * 表示 pa 是个指针，int [10] 是指向的数组大小
//  // [] 的优先级高于 * ，所以必须加上 () 来保证 p 先和 * 结合
//
//	char* arr2[3];
//	char* (*pa2)[3] = &arr2;
//	return 0;
//}


// 3.2 数组名 和 &数组名

// 数组名 - 数组首元素的地址

// &数组名 - 整个数组的地址，比如 int(*)[10]
// +1 跳过整个数组的大小


// 3.3 数组指针的使用

//void print_arr1(int arr[3][5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	
//	print_arr1(arr, 3, 5);
//	// 数组名arr，表示首元素的地址
//	
//	print_arr2(arr, 3, 5);
//	// 二维数组的首元素是二维数组的第一行
//	// 这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	// 可以用指针数组来接收
//	return 0;
//}


// 4. 数组参数、指针参数
// 4.1 一维数组传参

//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int* arr){}
//
//void test2(int* arr[20]){}
//void test2(int** arr){}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

// 4.2 二维数组传参

//void test(int arr[3][5]){}
//void test(int arr[][]){} // 错误，二维数组行可以省略，列不能省略
//void test(int arr[][5]){}
//
//void test(int (*arr)[5]){} // 推荐写法
//
//void test(int* arr){} // 错误,编译器自动修正
//void test(int*arr[5]){} // 错误
//void test(int** arr){} // 不推荐
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

// 4.3 一级指针传参
// 当一个函数的参数为一级指针的时候，函数能接收的参数：
// 数组名、&数组名[0]

// 4.4 二级指针传参
// *p = &ch -> **pp = &p


// 5. 函数指针
// 函数名本质上就是函数的地址
// 函数指针的返回值、参数类型要和函数相同
// &函数名 得到的就是函数的地址

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf就是函数指针
//	int (* pf)(int, int) = Add;//函数的地址要存起来，就得放在【函数指针变量】中
//	
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3, 5);
//	int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char* (*pt)(int, float*) = test;
//
//	return 0;
//}


// 练习1
//int main()
//{
//	(*( void (*)() )0)();
//	// 这是一次函数调用
//	// 1. (void(*)())0 是强制类型转换，将地址0强制转换为 void(*)() 类型的函数指针
//	// 2. 地址为 0 的地方存放着一个函数，函数没参数，返回类型是 void
//	// 3. (*...)() 是调用这个函数，没有参数，不需要返回值
//	return 0;
//}


// 练习2
//typedef void(*pf_t)(int);
//将void(*)(int)类型重新起个别名叫pf_t

//int main()
//{
//	void (* signal(int, void(*)(int) ) )(int);
//	// 是一个函数的声明
//	// 1. signal(int, void(*)(int) ) - 函数的名字是signal，signal函数的参数第一个是int类型，
//	// 第二个是void(*)(int)类型的函数指针，该函数指针指向的函数参数是int，返回类型是void
//	// 2. void(*...)(int) - signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//	
//	// 可以用类型重定义来理解
//	//pf_t signal(int, pf_t);
//
//	return 0;
//}

//typedef void(*pf_t2)(int);//pf_t2是类型名
//void(*pf)(int);//pf是函数指针变量的名字


// 6. 函数指针数组
// 数组的每个元素都是一个函数指针

//int main()
//{
//	int (*parr1[10])(int, int);
//	// parr1 先与 [] 结合，说明parr1是数组
//	// 数组的元素类型是 int(*)(int, int) 的函数指针
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////int main()
////{
////	//存放函数指针的数组 - 函数指针数组
////	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
////	//0 1 2 3
////	int i = 0;
////	for (i = 0; i < 4; i++)
////	{
////		int ret = pf[i](8, 4);
////		printf("%d\n", ret);
////	}
////
////	return 0;
////}
//
//
//// 计算器的模拟实现
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1.Add  2.Sub    ******\n");
//	printf("******   3.Mul  4.Div    ******\n");
//	printf("******   0.exit          ******\n");
//	printf("*******************************\n");
//
//}
//
//// 转移表 - 函数指针的数组
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*parr[])(int, int) = { NULL,Add,Sub,Mul,Div }; // 转移表
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		if (input == 0)
//			printf("关闭计算器\n");
//		else if (input >= 1 && input <= sizeof(parr) / sizeof(parr[1]))
//		{
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y); // 转移到对应的函数
//			printf("%d\n", ret);
//		}
//		else
//			printf("请重新选择\n");
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("关闭计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


// 7. 指向函数指针数组的指针
// 是一个指针
// 指向一个数组，数组的元素是函数指针

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
//	// 函数指针
//	int(*pf)(int, int) = Add; 
//
//	// 函数指针数组
//	int(*pfarr[])(int, int) = { Add,Sub };
//
//	// 指向函数指针数组的指针
//	int(*(*ppf)[])(int, int) = &pfarr;
//	return 0;
//}


// 8. 回调函数
// 是一个通过函数指针调用的函数。
// 如果把函数的指针(地址)作为参数传递给另一个函数，当这个指针被用来调用其所指向的函数的时候，我们就说这是回调函数

// 回调函数不是由该函数的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进行响应。

// 计算器的模拟实现

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1.Add  2.Sub    ******\n");
//	printf("******   3.Mul  4.Div    ******\n");
//	printf("******   0.exit          ******\n");
//	printf("*******************************\n");
//
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("关闭计算器\n");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


// qsort 的使用，quicksort 快速排序
//void qsort(void* base,  // 指向待排序数组的第一个元素
//			size_t num,  // 待排序的元素个数
//			size_t size,  // 每个元素的大小，单位是字节
//			int(*cmp)(const void* p1, const void* p2)); //指向一个比较函数，可以比较两个元素的大小


// qosrt排序整型数组
//#include <stdlib.h>
void print_arr(int* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int int_cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//int main()
//{
//	int arr[] = { 3,5,7,0,2,6,8,9,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz,sizeof(arr[0]),int_cmp);
//
//	print_arr(arr,sz);
//	return 0;
//}


// qsort 排序结构体
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

// 按照年龄排序
int cmp_by_age(const void* p1, const void* p2)
{
	return (((struct Stu*)p1)->age) - (((struct Stu*)p2)->age);
}

// 按照姓名排序
int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

//int main()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// 按照年龄比较
//	//qsort(s, sz, sizeof(s[0]), cmp_by_age);
//    qsort(s, sz, sizeof(s[0]), cmp_by_name);
//
//	return 0;
//}


// 按照冒泡排序的思想，实现qsort形式的bubble_sort()

void swap(char* p1, char* p2,size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 1; // 假设排序已经完成
		for (int j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				flag = 0;
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
			break;
	}
}

//int main()
//{
//	int arr[10] = { 3,6,4,5,8,1,2,9,0,7 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
//
//	print_arr(arr,sz);
//	return 0;
//}


int main()
{
	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17} };
	size_t sz = sizeof(s) / sizeof(s[0]);
	
	// 按照年龄比较
	//bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);

	// 按照姓名排序
	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
	return 0;
}






