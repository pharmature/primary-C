#define _CRT_SECURE_NO_WARNINGS 1



//����������������������ʱ������
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



//дһ���������ز����������� 1 �ĸ�����
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



//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��

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



//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

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



//һ��n�׷����Ƿ�Ϊ�����Ǿ��������ж��������Ǿ������Խ������µ�Ԫ�ض�Ϊ0�ľ������Խ���Ϊ�Ӿ�������Ͻ������½ǵ����ߡ�

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


//����һ��������n(1 �� n �� 109)���һ�У�Ϊ������n��ʾΪ�����ƵĽ��

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

//��һ���������У��������ظ�������������ɾ��ָ����ĳһ�����������ɾ��ָ������֮������У�������δ��ɾ�����ֵ�ǰ��λ��û�з����ı䡣
//���ݷ�Χ�����г��Ⱥ������е�ֵ������ 1��n��50
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



//�����������������Լ������С������֮��
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


//��Ҫ��n��̨�ף�ÿ�ο���ѡ����һ�׻��������ף�һ���ж������߷���
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



