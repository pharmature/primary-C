#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.�ַ�ָ��

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch; //pc�����ַ�ָ��
//	
//	const char* p = "abcdef"; //���ʽ��ֵ�����ַ��ĵ�ַ
//	//���ַ������ַ��ĵ�ַ�����p��
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}



//2.ָ������

//�ַ����� --- ����ַ�������
//�������� --- ������͵�����

//ָ������ --- ���ָ�������
//����ַ�ָ������� - �ַ�ָ������
//char* arr[5];
//�������ָ������� - ����ָ������
//int* arr[6];

//int main()
//{
//	char* arr[] = { "abcdef", "hehe", "qwer" };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for(i=0;i<3;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//			//printf("%d ", *(arr[i]+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//3.����ָ�� --- ָ�������ָ��
// &arr - ȡ����������ĵ�ַ
// int arr[10];
// int (*pa)[10] = &arr;

// int* arr[5];
// int* (*p)[5] = &arr;

//int arr[10]
//arr �� &arr ��ʲô����
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}
//��������������Ԫ�صĵ�ַ
//�������⣺
//1.sizeof(������) - ��������ʾ���������飬����õ�����������ܴ�С
//2.&������ - ��������ʾ�������飬ȡ��������������ĵ�ַ���ӵ�ֵַ�ĽǶ�������������Ԫ�صĵ�ַ��һ���ģ��������岻һ��

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	//ͨ���±����
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//ͨ��ָ�����
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	//ͨ������ָ�����
//	int(*p)[10] = &arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}




//4.���鴫�κ�ָ�봫��
//4.1һά���鴫��
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int *arr)
//{}
//void test2(int *arr[20])
//{}
//void test2(int **arr)
//{}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

//4.2��ά���鴫��
//void test(int arr[3][5])
//{}
//void test(int arr[][]) //����
//{}
//void test(int arr[][5])
//{}
////��λ���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]������
////��Ϊ��һ����λ���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ��
////��������
//
//void test(int* arr) //����
//{}
//void test(int* arr[5])  //����
//{}
//void test(int (*arr)[5])
//{}
//void test(int **arr) //����
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

//��ά���鴫��
//����������ָ�롣Ҳ����������
//��������飬�п���ʡ�ԣ��в���ʡ��
//�����ָ�룬����ȥ���ǵ�һ�еĵ�ַ���βξ�������ָ��

//4.3һ��ָ�봫��
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	return 0;
//}

//��һ�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���ʲô���� --- &a, *p ,arr

//4.4����ָ�봫��
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}

//�������Ĳ�������Ϊ����ָ���ʱ�򣬺����ܽ���ʲô���� --- ����ָ�������һ��ָ������ĵ�ַ



//5.����ָ��
//ָ������ָ��
//������ �� &������ --- �õ������ĵ�ַ��û������
//int ADD(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = ADD; //�����ĵ�ַҪ���������͵÷���[����ָ�����]��
//	// pf �Ǻ���ָ�������
//
//	//ͨ��ָ����ú���
//	int ret = (*pf)(3, 5);
//	int ret1 = pf(3, 5);
//	printf("%d\n", ret);
//	printf("%d\n", ret1);
//	return 0;
//}

//��C������ȱ�ݡ�
// ����1
//int main()
//{
//	//1.��0ǿ������ת��Ϊ void(*)() ���͵ĺ���ָ��
//	//2.0��ַ�����һ������������û��������������Ϊ void
//	//3.����0��ַ�����������
//	(*( void(*)() ) 0)();
//
//	return 0;
//}

// ����2
//typedef int* ptr_t;
//typedef void(*pf_t)(int); // ��void(*)(int)�����������������pf_t
//int main()
//{
//	//����������
//	//������������signal
//	//signal�����Ĳ�����һ����int���ڶ�����void(*)(int)���͵ĺ���ָ��
//	//�ú���ָ��ָ��ĺ���������int������������void
//
//	//signal�����ķ�������Ҳ��һ������ָ��
//	//�ú���ָ��ָ��ĺ���������int������������void
//	void ( * signal(int, void(*)(int)) )(int);
//
//	//��
//	pf_t signal(int, pf_t);
//	//void(*)(int)(signal(int, void(*(int));
//	return 0;
//}



//6.����ָ������
//�����ÿ��Ԫ����һ������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	//��ź���ָ�������
//	int (*pf[3])(int, int) = { Add, Sub, Div };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int ret = pf[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}

//Ӧ�� --- ת�Ʊ�




//7.ָ����ָ�������ָ��




//8.�ص�����



//9.ָ����������������






