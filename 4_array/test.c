#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.һά����Ĵ����ͳ�ʼ��
//���� - һ����ͬ����Ԫ�صļ���
//int main()
//{
//	int arr[10];
//	char arr2[10];
//	return 0;
//}

//��ʼ�� - �ڴ��������ͬʱ�����������һЩ������ʼֵ����ʼ������
//int main()
//{
//	//int arr[10] = { 1 };//����ȫ��ʼ������һ��Ԫ�س�ʼ��Ϊ1�������Ԫ��Ĭ��Ϊ0
//	//int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//char ch[10] = { 'a','b','c' };
//	//char ch2[10] = "abc";
//
//	//int arr3[] = { 1,2,3,4 };//��ָ�������С��ʱ��һ��Ҫ��ʼ��
//	//char ch3[] = { 'a','b','c' };
//	//char ch4[] = "abc";
//	//char ch5[10] = "abc";
//
//	//char arr[] = ""; //������ʱ��û��ָ����С��Ҳû�г�ʼ��
//	//scanf("%s", arr);
//	//printf("%s\n", arr);
//
//	int arr[] = { 0 }; //ֻ��һ��Ԫ�أ�����ʹ���������
//	
//	return 0;
//}

//C99�������˱䳤����ĸ���
//�䳤���鲻������ĳ��ȿ��Ա仯����������Ĵ�С�����ñ�����ָ��
//int main()
//{
//	//֧��C99�ı�����
//	int n = 10;
//	int arr[n];
//	return 0;
//}


//2.һά�����ʹ��
//�±����ò����� [] ���±��0��ʼ
//�������ڴ��������洢

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//3.һά�������ڴ��еĴ洢
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}
//�������ڴ����������
//���������±���������ڴ��ַ�ɵ͵���

//0 - ����0��ASCLL��ֵ��0
//'\0' - ת���ַ�0��ASCLL��ֵ��0
//'0' - �ַ�0��ASCLL��ֵ��48



//4.��ά����Ĵ����ͳ�ʼ��
//int main()
//{
//	int arr[3][4]; //[��][��]
//	double arr2[4][5];
//	return 0;
//}

//��ʼ��

//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int arr2[3][4] = { {1,2},{3,4},{5} };
//
//	//��ά�����ʼ��������ʡ���У�����ʡ����
//	int arr3[][4] = { 1,2,3,4,5, };
//
//	return 0;
//}



//5.��ά�����ʹ��
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//6.��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr[3][4] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%p ", &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���ڴ����������



//7.����Խ��
//������±����з�Χ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		printf("%d ", arr[i]); //i=10ʱ,����Խ��
//	}
//	return 0;
//}
//C���Ա����ǲ��������±��Խ���飬
//������Ҳ��һ�����������Ǳ�������������������ζ�ų��������ȷ�ģ�
//����Աд����ʱ���Լ���Խ��ļ��



//8.������Ϊ��������

//ð�������˼�룺
//�������ڵ�Ԫ�ؽ��бȽ�
//void bubble_sort(int arr[],int sz)
////void bubble_sort(int *arr,int sz)
//{
//	//�������Ԫ�ظ���
//	//int sz = sizeof(arr) / sizeof(arr[0]); error
//	//ð�����������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�����������������
//	//ð������
//	bubble_sort(arr,sz);
//	//���鴫�Σ�д��������������������������Ԫ�صĵ�ַ
//	//���ε�ʱ�򣬴��ݵľ���������Ԫ�صĵ�ַ
//	//�������βξ�Ӧ����ָ�����������
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p = %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//����������Ԫ�صĵ�ַ
//�������⣺
//1.sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&����������������ʾ�������飬ȡ��������������ĵ�ַ
//����֮�⣬����������������������Ԫ�صĵ�ַ

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}















