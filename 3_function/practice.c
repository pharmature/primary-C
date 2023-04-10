#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//void multiple_list(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", j, i, j * i);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	multiple_list(n);
//	return 0;
//}



//实现一个函数来交换两个整数的内容。

//void change(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	change(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}



//实现函数判断year是不是润年。

//void is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}





//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

//#include <math.h>
//int is_primer(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	for (n = 100; n <= 200; n++)
//	{
//		ret = is_primer(n);
//		if (ret == 1)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}



//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归

//int Fac(int n)
//{
//	if (n > 1)
//	{
//		return n * Fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}




//非递归

//int Fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}





//递归方式实现打印一个整数的每一位
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//		printf("%d ",n % 10);
//	}
//	else
//		printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}



//编写一个函数实现n的k次方，使用递归实现。

//double Mul(int n, int k)
//{
//	if (k > 0)
//		return n * Mul(n, k - 1);
//	else if (k == 0)
//		return 1;
//	else
//		return 1.0/Mul(n,-k);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Mul(n, k);
//	printf("%lf", ret);
//	return 0;
//}





//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和

//int DigitSum(unsigned int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}




//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//void reverse_string(char* string)
//{
//	int len = my_strlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	//if (my_strlen(string + 1) > 1)
//	if (*(string+1) != '\0')
//	{
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//void reverse_string(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}





//strlen的模拟

//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}

//非递归
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}





//递归和非递归分别实现求第n个斐波那契数

//递归
//int Fib(int n)
//{
//	if (n >= 2)
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//	else
//	{
//		return 1;
//	}
//}

//非递归
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		b = c;
		a = b;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d\n", Fib(n));
	return 0;
}





