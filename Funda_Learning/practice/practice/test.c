#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// ����Ļ�����9*9�˷��ھ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d �� %d = %-2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ��10 �����������ֵ

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


// ����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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


// ��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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


// ��д������һ���������������в��Ҿ����ĳ����
// Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

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
//			printf("�ҵ��ˣ��±���:>%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}


// ��������Ϸ

//#include <stdlib.h>
//#include <time.h>
//
//void game()
//{
//	int n = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < n)
//			printf("��С��\n");
//		else if (guess > n)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//void Print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d��%-2d= %-2d ", i, j, i * j);
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


//ʵ��һ�������������������������ݡ�

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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	return 0;
//}


// ʵ�ֺ����ж�year�ǲ������ꡣ

//void is_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		printf("������");
//	else
//		printf("��������");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	is_year(year);
//	return 0;
//}


// ʵ��һ������is_prime���ж�һ�����ǲ���������
// ��������ʵ�ֵ�is_prime��������ӡ100��200֮���������

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


// ��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�

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


// дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
// ���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
// ���룺1729�������19

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


// �ݹ�ͷǵݹ�ֱ�ʵ��strlen

// �ǵݹ�
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

// �ݹ�ʵ��
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



// �ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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


// �ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

// �ǵݹ�ʵ��
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

// �ݹ�ʵ��
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


// ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
// ʵ�֣��������ַ����е��ַ��������У����������ӡ��
// Ҫ�󣺲���ʹ��C�������е��ַ�������������

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
//	printf("��תǰ:>%s\n", str);
//	reverse_string(str);
//	printf("��ת��:>%s\n", str);
//
//	return 0;
//}


// �ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//// �ǵݹ�ʵ��
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

// �ݹ�ʵ��
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



// ������A�е����ݺ�����B�е����ݽ��н�����������һ����
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


// ����һ���������飬��ɶ�����Ĳ���
// ʵ�ֺ���init() ��ʼ������Ϊȫ0
// ʵ��print()  ��ӡ�����ÿ��Ԫ��
// ʵ��reverse()  �����������Ԫ�ص����á�

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


// ʵ��һ�������������ð������

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
//	printf("����ǰ:> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	
//	bubble_sort(arr,sz);
//
//	printf("�����:> ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


// ����������ʱ������������������������

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ:> %d %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("������:> %d %d\n", a, b);
//	return 0;
//}


// strlen��ģ��ʵ��

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



// strcpy��ģ��ʵ��

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
//	char arr2[20] = { 0 }; // Ԥ���㹻�Ŀռ�
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}


// ��������������С������

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


// ��һ�仰���е��ã���㲻����

//int main()
//{
//	char
//	return 0;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

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



// дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

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


// ��C��������Ļ�ϴ�ӡ����

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	// �ϰ벿��
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		// �ո�
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		// ��*��
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		// ����
//		printf("\n");
//	}
//	// �°벿��
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


// ���0��100000֮������С�ˮ�ɻ������������
// ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������

//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		// �����Ǽ�λ��
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


// ��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
// ���磺2 + 22 + 222 + 2222 + 22222

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


// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣���

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


// ��������ʹ����ȫ����λ��ż��ǰ�档
// ��Ŀ������һ���������飬ʵ��һ�������������������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
// ����ż��λ������ĺ�벿�֡�

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


// VS����������������Ĵ��룬��ͼ����������������

#include <stdio.h>
int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}















