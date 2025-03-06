#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 在屏幕上输出9*9乘法口诀表

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d × %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 求10 个整数中最大值

//int main()
//{
//	int arr[10] = { 15,20,32,11,53,23,26,71,65,17 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//
//	printf("%d\n", max);
//	return 0;
//}


// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


// 编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)
//			count++;
//		if (i % 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}


// 编写代码在一个整形有序数组中查找具体的某个数
// 要求：找到了就打印数字所在的下标，找不到则输出：找不到。

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 6;
//
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid]==k)
//		{
//			printf("找到了，下标是:>%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}


// 猜数字游戏

//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int n = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < n)
//			printf("猜小了\n");
//		else if (guess > n)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("***************************\n");
//	printf("*******    1.play    ******\n");
//	printf("*******    0.exit    ******\n");
//	printf("***************************\n");
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void Print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d×%-2d= %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	Print(n);
//	return 0;
//}


//实现一个函数来交换两个整数的内容。

//void Swap(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	return 0;
//}


// 实现函数判断year是不是润年。

//void is_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		printf("是闰年");
//	else
//		printf("不是闰年");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_year(year);
//	return 0;
//}


// 实现一个函数is_prime，判断一个数是不是素数。
// 利用上面实现的is_prime函数，打印100到200之间的素数。

//#include <math.h>

//void is_prime(int i)
//{
//	int flag = 1;
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//			flag = 0;
//	}
//	if (flag == 1)
//	{
//		printf("%d ", i);
//	}
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		is_prime(i);
//	}
//	return 0;
//}


// 编写一个函数实现n的k次方，使用递归实现。

//double Pow(int n, int k)
//{
//	if (k > 0)
//		return n * Pow(n, k - 1);
//	else if (k == 0)
//		return 1.0;
//	else
//		return 1.0 / Pow(n, -k);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%lf\n", Pow(n, k));
//	return 0;
//}


// 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
// 例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
// 输入：1729，输出：19

//int DigitSum(int n)
//{
//	if (n > 9)
//		return DigitSum(n / 10) + n % 10;
//	else
//		return n;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}


// 递归和非递归分别实现strlen

// 非递归
//int my_strlen(char* str)
//{
//	int len = 0;
//	while (*str !='\0')
//	{
//		len++;
//		str++;
//	}
//	return len;
//}

// 递归实现
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



// 递归方式实现打印一个整数的每一位

//void Print(int n)
//{
//	if (n > 9)
//		Print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}


// 递归和非递归分别实现求第n个斐波那契数

// 非递归实现
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}

// 递归实现
//int Fib(int n)
//{
//	if (n > 2)
//		return Fib(n - 1) + Fib(n - 2);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int fib = Fib(n);
//	printf("%d\n", fib);
//	return 0;
//}


// 编写一个函数 reverse_string(char * string)（递归实现）
// 实现：将参数字符串中的字符反向排列，不是逆序打印。
// 要求：不能使用C函数库中的字符串操作函数。

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	return 0;
//}
//
//void reverse_string(char* string)
//{
//	char tmp = *string;
//	int sz = my_strlen(string);
//	*string = *(string + sz - 1);
//	*(string + sz - 1) = '\0';
//	if (sz > 2)
//		reverse_string(string + 1);
//	*(string + sz - 1) = tmp;
//
//}
//int main()
//{
//	char str[] = "abcdefg";
//	printf("反转前:>%s\n", str);
//	reverse_string(str);
//	printf("反转后:>%s\n", str);
//
//	return 0;
//}


// 递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//// 非递归实现
//int Fab(int n)
//{
//	int m = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		m *= i;
//	}
//	return m;
//}

// 递归实现
//int Fab(int n)
//{
//	if (n > 1)
//		return n * Fab(n - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fab(n);
//	printf("%d\n", sum);
//	return 0;
//}



// 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = {6,7,8,9,0};
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


// 创建一个整形数组，完成对数组的操作
// 实现函数init() 初始化数组为全0
// 实现print()  打印数组的每个元素
// 实现reverse()  函数完成数组元素的逆置。

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void init(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp = 0;
//
//	while (left < right)
//	{
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	
//	reverse(arr, sz);
//	print(arr, sz);
//	
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}


// 实现一个对整形数组的冒泡排序

//void bubble_sort(int* arr,int sz)
//{
//	int tmp = 0;
//	for (int i = 0; i < sz - 1; i++)
//	{
//		for (int j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 10,3,2,6,8,1,4,7,9,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前:> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	bubble_sort(arr,sz);
//
//	printf("排序后:> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


// 不允许创建临时变量，交换两个整数的内容

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前:> %d %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("交换后:> %d %d\n", a, b);
//	return 0;
//}


// strlen的模拟实现

//#include <assert.h>
//int my_strlen(const char* arr)
//{
//	assert(arr);
//	int count = 0;
//	while (*arr)
//	{
//		count++ ;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



// strcpy的模拟实现

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 }; // 预留足够的空间
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


// 求两个整数的最小公倍数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int m = 1;
//	for (int i = 1; i <= b; i++)
//	{
//		m = a * i;
//		if (m % b == 0)
//		{
//			break;
//		}
//	}
//	printf("%d\n", m);
//	return 0;
//}


// 将一句话进行倒置，标点不倒置

//int main()
//{
//	char
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 31; i >=1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}



// 写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//void Print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	return 0;
//}


// 用C语言在屏幕上打印菱形

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	// 上半部分
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		// 空格
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		// ‘*’
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		// 换行
//		printf("\n");
//	}
//	// 下半部分
//	for (i = n - 1; i >= 1; i--)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 求出0～100000之间的所有“水仙花数”并输出。
// 水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// 先求是几位数
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//
//		int sum = 0;
//		int m = 0;
//		tmp = i;
//		while (tmp)
//		{
//			m = tmp % 10;
//			sum += pow(m, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


// 求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
// 例如：2 + 22 + 222 + 2222 + 22222

//#include <math.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int sn = 0;
//	int cur = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cur += a * pow(10, i);
//		sn += cur;
//	}
//	printf("%d\n", sn);
//	printf("%d\n", 2 + 22 + 222 + 2222 + 22222);
//	return 0;
//}


// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）。

//int main()
//{
//	int money = 20;
//	int count = money;
//	int tmp = money;
//
//	while (tmp / 2)
//	{
//		count += tmp / 2;
//		tmp = tmp / 2 + tmp % 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}


// 调整数组使奇数全部都位于偶数前面。
// 题目：输入一个整数数组，实现一个函数，来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
// 所有偶数位于数组的后半部分。

//void Fun(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			for (int j = i; j < sz-1; j++)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		else
//		{
//			for (int j = i; j > 0; j--)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j - 1];
//				arr[j - 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Fun(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


// VS开发环境调试下面的代码，画图解释下面代码的问题

//#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}



// 模拟实现库函数strcpy

//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello world！";
//	char arr2[20] = { 0 };
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


// 模拟实现库函数strlen

//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	char* start = str;
//	while (*str)
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	char arr[] = "hello world!";
//
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (a * b * c * d * e == 120)
//						{
//							if ((b == 2) + (a == 3) == 1
//								&& (b == 2) + (e == 4) == 1
//								&& (c == 1) + (d == 2) == 1
//								&& (c == 5) + (d == 3) == 1
//								&& (e == 4) + (a == 1) == 1)
//							{
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。

//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}



// 在屏幕上打印杨辉三角。

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			// 第一列全为1,正对角线全为1
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//
//			//填充其余数字
//			if (i > 1 && j > 0 && j < i)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%-3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//int is_exist(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = is_exist(arr,3,3, k);
//	if (1 == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//#include <assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_move(char* str, int k)
//{
//	//暴力移动
//	//int len = strlen(str);
//	//k %= len;
//	//while (k > 0)
//	//{
//	//	//每次移动一个字符
//	//	char tmp = str[0];
//	//	//转移其余字符
//	//	for (int j = 1; j < len; j++)
//	//	{
//	//		str[j - 1] = str[j];
//	//	}
//	//	//填充最后一个
//	//	str[len - 1] = tmp;
//	//	
//	//	k--;
//	//}
//
//	//三次倒置
//	int len = strlen(str);
//	k %= len;
//	reverse(str, str + k - 1);
//	reverse(str + k, str + len-1);
//	reverse(str, str + len - 1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	printf("%s\n", arr);
//	left_move(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

//int is_left_move(char* s1, char* s2)
//{
//	//暴力查找
//	/*int len = strlen(s1);
//	for (int i = 0; i < len - 1; i++)
//	{
//		char tmp = s1[0];
//		for (int j = 1; j < len; j++)
//		{
//			s1[j - 1] = s1[j];
//		}
//		s1[len - 1] = tmp;
//
//		if (0 == strcmp(s1, s2))
//			return 1;
//	}
//	return 0;*/
//
//	//拼接后查找
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//		return 0;
//
//	strncat(s1, s1, len1);
//	if (strstr(s1, s2))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char s1[20] = "ABCDEF";
//	char s2[] = "CDEFA";
//	int ret = is_left_move(s1, s2);
//
//	if (1 == ret)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}



//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}


//练习使用库函数，qsort排序各种类型的数据
//void qsort(void* base,  // 指向待排序数组的第一个元素
//			size_t num,  // 待排序的元素个数
//			size_t size,  // 每个元素的大小，单位是字节
//			int(*cmp)(const void* p1, const void* p2)); //指向一个比较函数，可以比较两个元素的大小

//排序整型数组
//#include <stdlib.h>
//int int_cmp(const void* p1, const void* p2)
//{
//	return (*(int*)p1) - (*(int*)p2);
//}
//int main()
//{
//	int arr[] = { 7,3,6,2,8,1,9,4,5,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), int_cmp);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//排序字符数组
//#include <stdlib.h>
//int char_tmp(const void* p1, const void* p2)
//{
//	return (*(char*)p1) - (*(char*)p2);
//}
//int main()
//{
//	char str[] = "kjhysgb";
//	int len = strlen(str);
//	qsort(str, len, sizeof(str[0]), char_tmp);
//	printf("%s\n", str);
//	return 0;
//}


//排序结构体
//#include <stdlib.h>
//
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}stu;
//
//int stru_cmp(const void* p1, const void* p2)
//{
//	return strcmp(((stu*)p1)->name, ((stu*)p2)->name);
//}
//
//int main()
//{
//	stu arr[] = { {"zhangsan",15},{"lisi",14}, {"wangwu",16} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//按姓名排序
//	qsort(arr, sz, sizeof(arr[0]), stru_cmp);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", (arr + i)->name, (arr + i)->age);
//	}
//	return 0;
//}


//模仿qsort的功能实现一个通用的冒泡排序
//typedef struct Stu
//{
//	char name[20];
//	int age;
//}stu;
//
//int stru_cmp(const void* p1, const void* p2)
//{
//	return strcmp(((stu*)p1)->name, ((stu*)p2)->name);
//}
//
//void swap(char* ps1, char* ps2, size_t size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		char tmp = *ps1;
//		*ps1 = *ps2;
//		*ps2 = tmp;
//		ps1++;
//		ps2++;
//	}
//}
//
//void bubble_qsort(void* base, size_t num, size_t size, int (*cmp)(const void* p1, const void* p2))
//{
//	for (int i = 0; i < num-1; i++)
//	{
//		int flag = 1; //假设排序已经完成
//		for (int j = 0; j < num - i - 1; j++)
//		{
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				flag = 0;
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//		if (1 == flag)
//			break;
//	}
//}
//
//int main()
//{
//	stu arr[] = { {"zhangsan",15},{"lisi",14}, {"wangwu",16} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//按姓名排序
//	bubble_qsort(arr, sz, sizeof(arr[0]), stru_cmp);
//
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", (arr + i)->name, (arr + i)->age);
//	}
//	return 0;
//}


//模拟实现strlen

//计数器
//int my_strlen(char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//指针减法
//int my_strlen(char* str)
//{
//	assert(str);
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}

//递归 - 不创建临时变量
//int my_strlen(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	char arr[] = "hello world!";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


//模拟实现strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	while (*dest = *src)
//	{
//		dest++;
//		src++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "hello world!";
//	char str2[20] = { 0 };
//
//	printf("%s\n", my_strcpy(str2, str1));
//	return 0;
//}


//模拟实现strcmp

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
//	char str1[] = "abcde";
//	char str2[] = "abcdd";
//
//	printf("%d\n", my_strcmp(str1, str2));
//	return 0;
//}



//模拟实现strcat

//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1 != '\0')
//	{
//		str1++;
//	}
//	while (*str1 = *str2)
//	{
//		str1++;
//		str2++;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[20] = "hello ";
//	char str2[] = "world!";
//
//	printf("%s\n", my_strcat(str1, str2));
//	return 0;
//}


//模拟实现strstr

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;

	while (*str1)
	{
		s1 = (char*)str1;
		s2 = (char*)str2;
		while (*s1 && *s2 && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return str1;
		str1++;
	}
	return NULL;
}

int main()
{
	char str1[] = "abbbcdef";
	char str2[] = "bcdf";

	char* p = my_strstr(str1, str2);
	printf("%s\n", p);
	return 0;
}







