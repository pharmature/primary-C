#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//if ���
//int main()
//{
//	int age = 16;
//	if (age < 18)
//	{
//		printf("δ����\n");
//	}
//	else
//	{
//		printf("����\n");
//		printf("��������\n");
//	}
//	return 0;
//}


//switch ���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch(day) //���������ͱ��ʽ
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	int n = 1;
//	switch (day) //���������ͱ��ʽ
//	{
//	case 1://case ����������ͳ������ʽ
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	}
//	return 0;
//}

//switch����Ƕ��ʹ��
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


//дһ�������ӡ1~100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		//�ж�i�Ƿ���3�ı���
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

//д���뽫���������Ӵ�С���
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

//дһ�����룬��ӡ100~200֮�������
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
//m��n��������һ���� <= ��ƽ��i��
//2~��ƽ��i֮����һ��i������
//�⺯��sqrt - ��ƽ��
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

//��ӡ1000~2000��֮�������
//�����жϵĹ���
//1.�ܱ�4���������ܱ�100������������
//2.�ܱ�400������������
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		//�ж�y�ǲ�������
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

//���������������������������Լ��

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

//շת�����

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

//����Ļ�����9*9�ͷ��ھ���
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


//��10�������е����ֵ
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





//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����

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



//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

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



//��������Ϸ

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
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//			printf("������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}




//��д������һ���������������в��Ҿ����ĳ����
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

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
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}



