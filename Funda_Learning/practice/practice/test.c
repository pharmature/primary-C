#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

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

#include <math.h>

void is_prime(int i)
{
	int flag = 1;
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
			flag = 0;
	}
	if (flag == 1)
	{
		printf("%d ", i);
	}
}
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		is_prime(i);
	}
	return 0;
}













