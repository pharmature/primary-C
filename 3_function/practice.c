#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

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



//ʵ��һ�������������������������ݡ�

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



//ʵ�ֺ����ж�year�ǲ������ꡣ

//void is_leap_year(int n)
//{
//	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_leap_year(year);
//	return 0;
//}





//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

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



//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�

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




//�ǵݹ�

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





//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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



//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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





//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

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




//��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//Ҫ�󣺲���ʹ��C�������е��ַ�������������

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





//strlen��ģ��

//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}

//�ǵݹ�
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





//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//�ݹ�
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

//�ǵݹ�
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





