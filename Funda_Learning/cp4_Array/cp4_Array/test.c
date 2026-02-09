#define _CRT_SECURE_NO_WARNINGS 1
# include <stdio.h>

// 1. 一维数组的创建和初始化

// 1.1 一维数组的创建
// 数组 -- 一组相同类型元素的集合
// 数组的创建方式 -- type_t arr_name [const_n]
// type_t 数组元素的类型；const_n 常量表达式，指定数组的大小；

//int main()
//{
//	int arr1[10];
//
//	int count = 10;
//	int arr2[count];
//	// C99之前的版本，不支持变长数组，只能是变量；
//	// C99标准支持了变长数组，数组的大小可以用变量指定，VS编译器不支持
//	// 但是变长数组不能初始化
//
//	double arr3[3 + 5];
//	char arr4[5];
//	return 0;
//}


// 1.2 数组的初始化
// -- 在创建数组的时候给数组的内容一些合理初始值
// 数组在创建的时候如果想不指定数组的确定的大小就得初始化。数组的元素个数根据初始化的内容来确定

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; // 完全初始化
//	int arr2[10] = { 1,2,3,4 }; // 不完全初始化
//	// 不完全初始化，剩余的空间会默认初始化为 0 
//
//	// 数组初始化了，但不指定数组的大小，数组的大小根据初始化的内容来确定
//	char arr3[] = "welcome!";
//	char arr4[] = {'w','e','l','c','o','m','e','!'};
//	printf("%s\n", arr3);
//	printf("%s\n", arr4);
//	return 0;
//}


// 1.3 一维数组的使用
// [] - 下标引用操作符，就是数组访问的操作符
// 数组的使用是通过下标来访问的，下标是从 0 开始
// 数组的大小可以通过计算得到

//int main()
//{
//	int arr1[10] = { 0 };
//	printf("%d\n", arr1[9]);
//
//	int sz = sizeof(arr1) / sizeof(arr1[0]); // 求数组的大小
//	printf("%d\n", sz);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//
//	int a = 0; // 变量a的类型是 int，数组的类型是什么呢？
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(int[10]));
//	// 数组的类型就是 元素类型+数组大小
//	return 0;
//}


// 1.4 一维数组在内存中的存储
// 数组在内存中是连续存放的，随着下标的增长，元素的递质也在递增，按照元素类型的大小

//int main()
//{
//	int arr1[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr1[i]);
//	}
//	return 0;
//}

// 可以用指针代替数组和下标
//int main()
//{
//	int arr1[10] = { 0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int i = 0;
//
//	int* p = arr1;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%p = %p\n", p + i, &arr1[i]);
//		printf("arr[%d] = %d\n", i, *(p + i));
//	}
//	return 0;
//}


// 2. 二维数组的创建和初始化

// 2.1 二维数组的创建
//int main()
//{
//	int arr1[3][4];
//	char ch[3][5];
//	double arr2[2][4];
//	return 0;
//}


// 2.2 二维数组的初始化
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int arr2[3][4] = { {1,2,},{3,4},{5.6} };
//	// 二维数组不完全初始化，行可以省略，列不能省略
//	int arr3[][4] = { {1,2,},{3,4},{5.6} };
//	
//	return 0;
//}


// 2.3 二维数组的使用 - 下标引用
//int main()
//{
//	int arr1[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	printf("%d\n", arr1[1][2]);
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%2d ", arr1[i][j]); // %2d 尾对齐 %-2d 首对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 2.4 二维数组的内存
// 和一维数组一样，在内存中连续存储
//int main()
//{
//	int arr[3][4] = { 0 };
//	
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//	return 0;
//}


// 3. 数组的越界
// 数组的下标是有范围的，从 0 开始，n个元素的数组，最后一个下标就是 n-1
// 数组的下标如果 小于0 或 大于n-1，就是数组越界访问了，超出数组合法空间的地址
// C语言本身不做数组下标的越界检查，编辑器不一定报警
// 要求：做好数组越界的检查

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++) // i = 10 数组越界
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// 4. 数组作为函数参数

// 4.1 数组名是什么
// 数组名是数组元素首元素的地址
// 2个例外：
// (1)sizeof(数组名) - 计算整个数组的大小，sizeof()内部单独放一个数组名，数组名表示的是整个数组
// (2)&数组名 - 取出的是整个数组的地址，数组名表示整个数组

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//printf("%d\n", sizeof(arr));//40
//	return 0;
//}


// 4.2 冒泡排序
void bubble_sort(int arr[], int sz)
{
	//int sz = sizeof(arr) / sizeof(arr[0]);

	// 计算冒泡排序要走多少趟
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// 一趟冒泡的过程
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}

int main()
{
	int arr[10] = { 3,5,8,6,9,2,0,1,4,7 };

	int sz = sizeof(arr) / sizeof(arr[0]);

	printf("修改前：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}

	bubble_sort(arr, sz); 
	// 数组名传递给函数的时候，传递的是数组首元素的地址
	// 使用函数地址，不能在函数内部计算出数组的大小
	// 所以要把数组的大小也传递给函数

	printf("\n修改后：");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}









