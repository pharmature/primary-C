#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

// 1. C���Եĺ�����
// һ�δ���飬�������ĳ���ض������񣬾߱���ԵĶ����ԡ�
// ������ ���� �� ����ֵ�����̷�װ��ϸ�����أ�����Ϊ����⡣

// 2.�����ķ���
// 2.1 �⺯��
// C���ԵĻ������о��ṩ��һϵ�к���������д�����Ĺ��ܡ�
// ���õ��У�IO�������ַ��������������ַ������������ڴ����������ʱ��/���ں�������ѧ����
// ʹ�ÿ⺯��������Ԥ����ָ�� #include ������Ӧ��ͷ�ļ�

// strcpy() - �ַ�������
//char* strcpy(char* destination, const char* source)��
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[20] = { 0 }; //Ҫ��֤Ŀ���������㹻���ڴ�ռ�
//	printf("%s\n", arr2);
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

// memset() - �ڴ�����
//void* memset(void* ptr, int value, size_t num);
//#include <memory.h>
//int main()
//{
//	char arr1[] = "hello world!";
//	printf("%s\n", arr1);
//	memset(arr1, 'x', 5); //�滻��"ֵ"���滻��"����"���ܸ��˳��
//	printf("%s\n", arr1);
//	return 0;
//}


// 2.2 �Զ��庯��
// ����Ա�Լ�д�Ķ���ĺ���
// ����������ֵ���͡�������������

// дһ�����������ҵ��������������ֵ
//int get_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

// 3. �����Ĳ���
// 3.1ʵ�� -- ʵ�ʲ�������ʵ���ݸ������Ĳ���
// ���������������ʽ��������
// ���к�������ʱ��������ȷ����ֵ���ſ��԰���Щֵ���ݸ��βΡ�

// 3.2 �β� -- ��ʽ�����������������еı���
// ��ʽ����ּ�ں��������õĹ����в�ʵ�����������ڴ�
// �����������֮����ʽ�����Զ����٣�������ʽ����ֻ�ں�������Ч

// ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��
// ��Ҫ�޸ģ�ʹ��ָ�롣

// дһ���������Խ����������α�����ֵ
//void swap(int* pa,int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	printf("�޸�ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("�޸ĺ�a=%d b=%d\n", a, b);
//	return 0;
//}

// �޸�ָ��Ŀ�����������ı�ָ��ָ�������
//void swap(int* pa,int* pb)
//{
//	int* tmp = pa;
//	pa = pb;
//	pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	printf("�޸�ǰ��a=%d b=%d\n", a, b);
//	swap(&a, &b);
//	printf("�޸ĺ�a=%d b=%d\n", a, b);
//	return 0;
//}

// 4. �����ĵ���
// 4.1 ��ֵ����
// �������βκ�ʵ�ηֱ�ռ�в�ͬ���ڴ�飬���βε��޸Ĳ���Ӱ��ʵ�Σ�

// 4.2 ��ַ����
// �Ѻ����ⲿ�����ı������ڴ���ʴ��ݸ����������ĵ��÷�ʽ
// �����ú����ͺ�����ߵı�����������������ϵ��Ҳ���Ǻ����ڲ�����ֱ�Ӳ��������ⲿ�ı�����

// дһ�������ж�һ�����ǲ�������
//int is_leap_year(int y)
//{
//	/*if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	return 0;*/
//	
//	return ((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0);
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//			printf("%d ", year);
//
//	}
//	return 0;
//}

// дһ�������ж�һ�����ǲ�������
//#include <math.h>
//int is_prime(int a)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(a); i++) // �����2��ʼ�����ܴ�1��ʼ
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int a = 0;
//	for (a = 101; a <= 200; a++)
//	{
//		if (is_prime(a))
//			printf("%d ", a);
//	}
//	return 0;
//}

// дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left);
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//			return mid;
//	}
//
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	while (1)
//	{
//		scanf("%d", &k);
//		if (-1 == binary_search(arr, k, sz))
//			printf("�Ҳ���");
//		else
//		{
//			k = binary_search(arr, k, sz);
//			printf("�ҵ��ˣ��±���:>%d\n", k);
//			break;
//		}
//	}
//
//	return 0;
//}

// дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void add(int* a)
//{
//	//*a = *a + 1;
//	//*a += 1;
//	(*a)++;
//}
//int main()
//{
//	int num = 0;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		add(&num);
//		printf("%d ", num);
//	}
//	return 0;
//}

// 5. ������Ƕ�׵��ú���ʽ����
// 5.1 Ƕ�׵��� -- �����ͺ���֮����Ը���ʵ�ʵ���������໥����

//void print()
//{
//	printf("welcome home!\n");
//}
//void Print()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		print();
//	}
//}
//int main()
//{
//	Print();
//	return 0;
//}

// ��������Ƕ�׵��ã����ǲ�����Ƕ�׶���
//void Print()
//{
//	void print();
//}

// 5.2 ��ʽ���� -- ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	// printf() -- ����ֵ�Ǵ�ӡ���ַ��ĸ���
//	return 0;
//}


// 6. �����������Ͷ���
// 6.1 �������� 
// ���߱�������һ����������������ֵ���ͣ����������������ͣ����Ǿ����ǲ��Ǵ��ڣ����������������ˡ�
// ����������Ҫ�ں���ʹ��֮ǰ����֤��������ʹ��
// ����������һ�����ͷ�ļ���

// 6.2 �������� -- �����ľ���ʵ�֣����������ľ��幦��

//#include "add.h"
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	
//	int ret = add(a, b);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


// 7. �����ݹ�
// 7.1 �ݹ� -- �����������
// һ�����̻��ߺ������䶨���˵������ֱ�ӻ��ӵ�������
// ��������һ�����͸��ӵ�������ת��Ϊһ����ԭ�������ƵĹ�ģ��С����������� -- �Ѵ��»�С
// �ŵ㣺�����ĳ���Ϳ������������������Ҫ�Ķ���ظ����㣬��������˳���Ĵ�������

// 7.2 �ݹ��������Ҫ����
// a. ����������������������������������ݹ�Ͳ��ټ�����
// b. ÿ�εݹ����֮��Խ��Խ�ӽ�������ơ�

// ����һ���޷������ͣ�����˳���ӡ����ÿһλ

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10); // �ݹ�
//	}
//	printf("%d ", n % 10); // ��ӡ��λ������
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num); // %u -- �޷�������
//	print(num);
//	return 0;
//}


// ��д���������ַ����ĳ���

//int my_strlen(char* str)
//{
//	int count = 0; 
//	while (*str != '\0')  // ѭ��ʵ��
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1); // �ݹ�ʵ��
//		// �ݹ鵱�У�ʹ��str++û��Ч����ʹ��++str��ı������ֵ������һ�㲻����ǰ�û����++
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "hello world!";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}


// 7.3 �ݹ������(ѭ��)

// ��n�Ľ׳�
//unsigned int fab(unsigned int n)
//{
//	if (n >= 2)
//	{
//		return n * fab(n - 1);
//	}
//	return 1;
//}

//unsigned int fab(unsigned int n)
//{
//	int res = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++) // ѭ������
//	{
//		res = res * i;
//	}
//	return res;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	unsigned int ret = fab(n);
//	printf("%u", ret);
//	return 0;
//}

// ���n��쳲��������������������
//unsigned int fib(unsigned int n)
//{
//	if (n > 2)
//	{
//		return fib(n - 1) + fib(n - 2);  //�ݹ�
//	}
//	return 1;
//}

unsigned int fib(unsigned int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n >= 3) // ѭ������
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	unsigned int n = 0;
	while (1)
	{
		scanf("%u", &n);
		unsigned int ret = fib(n);
		printf("%u\n", ret);
	}
	return 0;
}

// stack overflow -- ջ���
// ϵͳ����������ջ�ռ������޵ģ����������ѭ�����������ݹ飬���ܵ���һֱ����ջ�ռ䣬���յ���ջ�ռ�ľ�


// ��������Եݹ����ʽ���ͣ�����Ϊ���ȷǵݹ����ʽ��Ϊ������
// ������Щ����ĵ���ʵ�ֱȵݹ�ʵ��Ч�ʸ��ߣ���Ȼ����Ŀɶ��Խϲ
// ��һ�������൱���ӣ������õ���ʵ��ʱ���ݹ�ļ���Կ��Բ����������������п�����



