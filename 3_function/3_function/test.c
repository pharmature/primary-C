#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.������ʲô - �ӳ���


//2.�⺯��
//c���Եı������ṩ��һЩ�⺯��
//C���Ա�׼�涨�˺����������ܡ��������������ͣ���ôʵ�ֲ��ܣ���������������

//strcpy()
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//memset()
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}

//ʹ�ÿ⺯�����������ͷ�ļ�


//3.�Զ��庯�� - ���������������ͣ���������

//дһ���������������������ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = get_max(a, b);
//	printf("%d", m);
//	return 0;
//}

//дһ���������Խ����������ͱ���������
//void Swap(int* x,int* y)
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
////���������õ�ʱ��ʵ�δ����βΣ��β���ʵ�ε�һ����ʱ����
////���Զ��βε��޸ģ��ǲ�Ӱ��ʵ�ε�
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("����ǰ:a=%d b=%d", a, b);
//	Swap(&a, &b); //��ַ����
//	//Swap(a, b); ��ֵ����
//	printf("������:a=%d b=%d", a, b);
//	return 0;
//}



//4.��������
//ʵ�ʲ�����ʵ�Σ� - ��ʵ���������Ĳ���
//ʵ�ο����ǣ����������������ʽ��������
//����ʵ���Ǻ������͵������ڽ��к��������ǣ����Ƕ�������ȷ����ֵ��һ�߰���Щֵ�����͸��β�

//��ʽ���� - �������������еı���
//��ʽ����ֻ���ں��������õĹ����в�ʵ�����������ڴ浥Ԫ��
//��ʽ����������������ɺ���Զ������ˣ����ּ�ں�������Ч

//�β�ʵ����֮���൱��ʵ�ε�һ����ʱ����



//5.��������
//��ֵ���� - ���βε��޸Ĳ���Ӱ��ʵ��

//��ַ���� - �Ѻ����ⲿ�����������ڴ��ַ���ݸ���������
//�ú����ͺ����ⲿ�ı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı���



//6.������Ƕ�׵��ú���ʽ����
//Ƕ�׵���

//��ʽ����
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

//7.�����������Ͷ���
//int Add(int, int); //�������� - Ҫ��ʹ��֮ǰ
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int s = Add(a, b);
//	printf("%d", s);
//	return 0;
//}
//int Add(int x, int y) //��������
//{
//	return x + y;
//}


//VS2022�Ǳ���������ʵ�Ǽ��ɿ������� - IDE
//�༭��������������������������

//#include "Add.h"
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int s = Add(a, b);
//	printf("%d", s);
//	return 0;
//}



//8.�����ĵݹ�
//�ݹ� - �����������ı�̼���

//int main()
//{
//	printf("hehe\n");
//	main(); //��ѭ��
//	return 0;
//}
//ÿһ�κ������ö�����ջ�������ڴ�ռ� - ����ջ֡

//�ݹ��������Ҫ����
//1.���������������������������������ʱ�򣬵ݹ�㲻�ټ���
//2.û�εݹ����֮��Խ��Խ�ӽ������������

//��վ stackoverflow.com    github

//�ݹ��˼����ʽ - ���»�С

//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//void print(unsigned int n)
//{
//	if (n < 10)
//	{
//		printf("%d ", n);
//	}
//	else
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);//����˳���ӡnum��ÿһλ
//	return 0;
//}

//��д����������������ʱ���������ַ����ĳ���
//int my_strlen(char* str)
//{
//	int count = 0; //��������
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//�ݹ�
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); //++str ���Ƽ����и�����
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char arr[] = "abc";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}

//�ݹ������
//��n�Ľ׳�
//int Fac1(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * Fac(n - 1);
//	}
//}
////int Fac2(int n)
////{
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret = ret * i;
////	}
////	return ret;
////}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac1(n);
//	printf("%d\n", ret);
//	return 0;
//}


//쳲���������
//int Fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//��쳲��������в����õݹ�

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n",ret);
//
//	return 0;
//}





//9.����ջ֡�Ĵ���������








//��ϰ
//5.1.дһ�����������ж�һ�����ǲ�������
//#include <math.h>
//int is_primer(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_primer(i) == 1)
//		{
//			printf("%d ", i);
//		}			
//	}
//	return 0;
//}

//�����������д����ֵ������Ĭ�ϻ᷵��һ��ֵ
//��Щ�������Ϸ��ص��ǣ����һ��ָ������Ľ��

//5.2.дһ�������ж�һ���ǲ�������
//int is_leap_year(int year)
//{
//	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int is_leap_year(int year)
//{
//	return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//5.3.дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k)   //���鴫�ε�ʱ�򣬴�������Ԫ�صĵ�ַ����ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;//�ҵ���
//		}
//	}
//	return -1;//û�ҵ�
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 7;
//	//�ҵ��˷����±꣬�Ҳ�������-1
//	int ret = binary_search(arr, k, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//5.4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int* p)
//{
//	*p = *p + 1;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);	
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//8.1.��ŵ������


//8.2.������̨������



