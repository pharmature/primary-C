#define _CRT_SECURE_NO_WARNINGS 1

//����ĳ��ĳ���ж����죬����ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣

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



//�ж�������ַ��ǲ�����ĸ������ʵ�֡�

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
//		getchar();//���������ж����\n
//	}
//	return 0;
//}


//�����ĸ��Сдת������һ���ַ����ж����Ƿ�Ϊ��д��ĸ������ǣ�����ת����Сд��ĸ����֮��ת��Ϊ��д��ĸ��
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



//KiKi�ǳ�ϲ����������һ�ҵ�����������һ���·������˽⵽����������ǡ�˫11����11��11�գ�������·���7�ۣ���˫12��
//��12��12�գ�������·���8�ۣ�������Ż�ȯ���Զ����50Ԫ���Ż�ȯֻ����˫11��˫12ʹ�ã�����KiKi����������Ǯ����

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



//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣

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




//��һ���ַ���str�����ݵߵ��������������

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



//��C��������Ļ��������Σ�

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




//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ���������:153��1^3��5^3��3^3����153��һ����ˮ�ɻ�������

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



//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�

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




