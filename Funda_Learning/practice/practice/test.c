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













