#define _CRT_SECURE_NO_WARNINGS 1

//想获得某年某月有多少天，请编程实现。输入年份和月份，计算这一年这个月有多少天。

//#include <stdio.h>
//
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d%d", &y, &m) == 2)
//	{
//		int day = days[m];
//		if (is_leap_year(y) && m == 2)
//		{
//			day++;
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}



//判断输入的字符是不是字母，请编程实现。

//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("%c is an alphabet.\n", ch);
//		else
//			printf("%c is not an alphabet.\n", ch);
//
//		getchar();//处理缓冲区中多余的\n
//	}
//	return 0;
//}


//完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//#include <stdio.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//		else if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		getchar();
//	}
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isupper(ch))
//		{
//			printf("%c\n", tolower(ch));
//		}
//		else if (islower(ch))
//		{
//			printf("%c\n", toupper(ch));
//		}
//		getchar();
//	}
//	return 0;
//}



//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12”
//（12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。

//#include <stdio.h>
//
//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//
//	if (price < 0.0)
//	{
//		price = 0.0;
//	}
//	printf("%.2lf\n", price);
//	return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针。

//#include <stdio.h>
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}




//将一个字符串str的内容颠倒过来，并输出。

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char arr[10001] = { 0 };
//	gets(arr);
//	//scanf("%{^\n}", arr);
//	
//	int len = strlen(arr);
//	int left = 0;
//	int right = len - 1;
//
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//用C语言在屏幕上输出菱形：

//#include <stdio.h>
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}




//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”。

//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，

//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//
//	int sum = 0;
//	int k = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//	return 0;
//}




