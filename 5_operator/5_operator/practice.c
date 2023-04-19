#define _CRT_SECURE_NO_WARNINGS 1



//交换两个变量（不创建临时变量）
//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}



//写一个函数返回参数二进制中 1 的个数。
//int count_bit(int m)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((m >> i)&1))
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int count_bit(int m)
//{
//	int count = 0;
//	while (m)
//	{
//		m = m & (m - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int num = count_bit(n);
//	printf("%d\n", num);
//	return 0;
//}



//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？

//int count_diff_bit(int m, int n)
//{
//	int ret = m ^ n;
//	int count = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count = count_diff_bit(m, n);
//	printf("%d\n", count);
//	return 0;
//}



//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}



//一个n阶方矩是否为上三角矩阵，请编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。

//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n][n];
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d ", &arr[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i = 1; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (0 != arr[i][j])
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 0)
//	{
//		printf("NO\n");
//	}
//	else
//	{
//		printf("YES\n");
//	}
//	return 0;
//}


//输入一个正整数n(1 ≤ n ≤ 109)输出一行，为正整数n表示为六进制的结果

//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	while (n)
//	{
//		arr[i] = n % 6;
//		n /= 6;
//		i++;
//	}
//	for (--i; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
//数据范围：序列长度和序列中的值都满足 1≤n≤50
#include <stdio.h>

int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	int del = 0;
	scanf("%d", &del);
	int j = 0;
	for (i = 0; i < n; i++)
	{
		if (arr[i] != del)
		{
			arr[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < j; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}



//求两个正整数的最大公约数与最小公倍数之和
//#include <stdio.h>
//
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%d %d", &n, &m);
//	long long n2 = n;
//	long long m2 = m;
//
//	long long r = 0;
//	while (r = n2 % m2)
//	{
//		n2 = m2;
//		m2 = r;
//	}
//	printf("%lld", m * n / m2 + m2);
//
//	return 0;
//}


//需要走n阶台阶，每次可以选择走一阶或者走两阶，一共有多少种走法？
//#include <stdio.h>
//
//int walk(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return walk(n - 1) + walk(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = walk(n);
//	printf("%d\n", ret);
//	return 0;
//}



