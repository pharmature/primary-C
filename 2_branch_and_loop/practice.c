#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//if 语句
//int main()
//{
//	int age = 16;
//	if (age < 18)
//	{
//		printf("未成年\n");
//	}
//	else
//	{
//		printf("成年\n");
//		printf("适量饮酒\n");
//	}
//	return 0;
//}


//switch 语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch(day) //必须是整型表达式
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day) //必须是整型表达式
//	{
//	case 1://case 后必须是整型常量表达式
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	}
//	return 0;
//}

//switch允许嵌套使用
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d n = %d\n", m, n);
//	return 0;
//}


//写一个代码打印1~100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		//判断i是否是3的倍数
//		if (i % 3 == 0)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i += 3)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//写代码将三个整数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int t = 0;
//	if (a < b)
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	if (a < c)
//	{
//		t = a;
//		a = c;
//		c = t;
//	}
//	if (b < c)
//	{
//		t = b;
//		b = c;
//		c = t;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//写一个代码，打印100~200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d", count);
//	return 0;
//}

//i = m*n
//m和n中至少有一个是 <= 开平方i的
//2~开平方i之间找一个i的因子
//库函数sqrt - 开平方
//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//打印1000~2000年之间的闰年
//闰年判断的规则
//1.能被4整除，不能被100整除，是闰年
//2.能被400整除，是闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//判断y是不是闰年
//		//if ((y % 4 == 0) && (y % 100 != 0))
//		//{
//		//	printf("%d ", y);
//		//}
//		//if (y % 400 == 0)
//		//{
//		//	printf("%d ", y);
//		//}
//		if ((y % 4 == 0) && (y % 100 != 0) || (y % 400) == 0)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}

//给定两个数，求这两个数的最大公约数

//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int min = (m < n ? m : n);
//	while (1)
//	{
//		if (m % min == 0 && n % min == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min--;
//	}
//	return 0;
//}

//辗转相除法

//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d %d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//在屏幕上输出9*9惩罚口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求10个整数中的最大值
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int i = 0;
//	for (i =0;i<9;i++)
//	{
//		if (arr[i+1]>arr[i])
//		{
//			arr[i] = arr[i + 1];
//		}
//	}
//	printf("%d\n", arr[0]);
//	return 0;
//}





//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}



//编写程序数一下 1到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}



//猜数字游戏

//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1.play *********\n");
//	printf("******* 0.exit *********\n");
//	printf("************************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
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
//			printf("请重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}




//编写代码在一个整形有序数组中查找具体的某个数
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 7;
	while (left <= right)
	{
		int mid = left + (right - right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}



