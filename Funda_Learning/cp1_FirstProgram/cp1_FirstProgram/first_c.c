#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// ��һ��C���Գ���
//	printf("hello world!!");
//	return 0;
//
//	// C���Ե���������
//	printf("%d\n", sizeof(char)); // �ַ�
//	printf("%d\n", sizeof(short)); // ������
//	printf("%d\n", sizeof(int)); // ����
//	printf("%d\n", sizeof(long)); // ������
//	printf("%d\n", sizeof(long long)); // ����������
//	printf("%d\n", sizeof(float)); // �����ȸ�����
//	printf("%d\n", sizeof(double)); // ˫���ȸ�����
//	//C����û���ַ�������
//}


// ����
// �ֲ����� - ȫ�ֱ���
// ���������������֡���ĸ���»��ߣ����������ֿ�ͷ�����ִ�Сд��

// ����
// �ַ�����
// const���εĳ�����
// #define����ĳ���
// enumö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


// �ַ���
// ������־ʱ \0 ת���ַ��������ַ������ȵ�ʱ��\0ʱ������־�������ַ������ݡ�

// ת���ַ�
// \n - ����
// \t - �Ʊ��
// \b - �˸��
// \r - �س�
// \a - ���Խ�
// \ddd - �˽������֣����ܴ���8
// \xdd - ʮ����������


// дһ�������ӡ1-100֮������3�ı���������
//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

// д���뽫�������������Ӵ�С�����
//#include <stdio.h>
//
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (c > b)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int n = 0;
//	
//	for (n = 101; n <= 200; n++)
//	{
//		int flag = 1; // �ȼ���������
//		int j = 0;
//		for (j = 2; j <= sqrt(n); j++)
//		{
//			if (n % j == 0)
//			{
//				flag = 0; // ��������
//				break;
//			}
//		}
//		if (1 == flag)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}


// ��ӡ1000�굽2000��֮�������
// ���꣺�ܱ�4���������ܱ�100�����������ܱ�400����
//#include <stdio.h>
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}


// ���������������������������Լ��
#include <stdio.h>

int main()
{
	int m = 0;
	int n = 0;
	int k = 0;
	scanf("%d %d", &m, &n);
	while (k = m % n) // շת�����
	{
		m = n;
		n = k;
	}
	printf("%d", n);
	return 0;
}


