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



//7.ָ����ָ�������ָ�� --- һ�� ָ�� ָ��һ�� ���� �������Ԫ�ض��� ����ָ�롣
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add; //����ָ��
//	int (*pfarr[4])(int, int) = { Add, Sub };  //����ָ������
//
//	int (*(*ppfarr)[4])(int, int) = &pfarr; //ppfarr��һ��ָ����ָ�������ָ�����
//	
//	return 0;
//}



//8.�ص�����
//�ص���������һ��ͨ������ָ����õĺ�����
//����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ���ʱ����˵���ǻص�����
//�ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��

//�����β���ĺ���ָ����ú���

//qsort()�⺯����ʹ�� - ��������

//void bubble_sort(int arr[], int sz) // ð������ - ֻ������̶����͵�����
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	
//	return 0;
//}

//qsort�ĺô� - �ֳɵĿ⺯�������������������͵�����
//�Ƚ�2�������Ĵ�С�� > < ==
//�Ƚ�2���ַ�����strcmp
//�Ƚ�2���ṹ�����ݣ�ָ���Ƚϵı�׼ --- ��ʲô�Ƚ�

//void qsort(void* base, size_t num, size_t size, int(*cmp)(const void*, const void*))

// base - ָ���˴���������ĵ�һ��Ԫ��
// num - �������Ԫ�ظ���
// size - ÿ��Ԫ�صĴ�С����λ���ֽ�
// cmp - ָ��һ������������������ԱȽ�2��Ԫ�صĴ�С(�ص�����)

// qsort������ʹ�����ṩ�������
//#include <stdlib.h>
//
//int cmp_int(const void* p1, const void* p2)
//{
//	return *(int*)p1 - *(int*)p2; // ��ǿ������ת��
//}
//// void* - �޾������͵�ָ�룬���������Խ����κ����͵ĵ�ַ
//// void* ָ�벻�ܽ�����
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ʹ��qsort�������������飬Ҫ�ṩһ���ȽϺ���������ȽϺ����ܹ��Ƚ�2�������Ĵ�С
//	// qsort Ĭ������������
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//}
//
////����qsort����ṹ������
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_age(const void* p1, const void* p2)
//{
//	return ((struct Stu*)p1)->age - ((struct Stu*)p2)->age;
//}
//
//int cmp_stu_by_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
//}
//void test2()
//{
//	struct Stu s[] = { {"zhangsan", 20}, {"lisi", 25}, {"wangwu", 50} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//��������������
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//��������������
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//
//int main()
//{
//	test1();
//	test2();
//
//	return 0;
//}

// flag=1 �����Ѿ����򣬷���������Ҫ���� flag=0



//9.ָ�������������

// һά����
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a)); //16
//	//sizeof(a)������������������sizeof�ڲ�������������ܴ�С����λ���ֽ�
//
//	printf("%d\n", sizeof(a + 0)); //4/8
//	//a+0 û�е�������sizeof�����������Ԫ�صĵ�ַ
//	
//	printf("%d\n", sizeof(*a)); //4 �ֽ�
//	//a��������Ԫ�صĵ�ַ
//	//*a -> &a[0] -> a[0] ���͵Ĵ�С
//
//	printf("%d\n", sizeof(a + 1)); //4/8
//	//a��������Ԫ�صĵ�ַ
//	//a+1 ����һ�����ͣ��ǵڶ���Ԫ�صĵ�ַ
//
//	printf("%d\n", sizeof(a[1])); //4
//	//���͵Ĵ�С
//
//	printf("%d\n", sizeof(&a)); //4/8
//	//&a - ȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С��4/8
//
//	printf("%d\n", sizeof(*&a)); //16
//
//	printf("%d\n", sizeof(&a+1)); //4/8
//	//����һ������ĵ�ַ�����ǵ�ַ��ע��ָ��ָ���λ��
//
//	printf("%d\n", sizeof(&a[0])); // 4/8
//	//ȡ����Ԫ�صĵ�ַ
//
//	printf("%d\n", sizeof(&a[0]+1)); // 4/8
//	//�ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}

//sizeof()�������ռ���ڴ�ռ�Ĵ�С����λ���ֽڣ�����ע�ڴ��е��״�ŵ���ʲô
//sizeof���Ǻ������ǲ�����
//strlen()�Ǻ���
//strlen()������ַ�����

// �ַ�����
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr)); //6
//	
//	printf("%d\n", sizeof(arr+0)); //4/8
//	//��Ԫ�صĵ�ַ
//	
//	printf("%d\n", sizeof(*arr)); //1
//	//��Ԫ��
//
//	printf("%d\n", sizeof(arr[1])); //1
//	//�ڶ���Ԫ��
//
//	printf("%d\n", sizeof(&arr)); //4/8
//
//	printf("%d\n", sizeof(&arr + 1)); // 4/8
//	
//	printf("%d\n", sizeof(&arr[0] + 1)); // 4/8
//
//
//	printf("%d\n", strlen(arr)); //���ֵ
//
//	printf("%d\n", strlen(arr + 0)); //���ֵ
//	
//	printf("%d\n", strlen(*arr)); //�Ƿ�����
//	//a��ASCII�� 97
//	
//	printf("%d\n", strlen(arr[1])); //�Ƿ�����
//	//b��ASII�� 98
//	
//	printf("%d\n", strlen(&arr)); //���ֵ A
//	
//	printf("%d\n", strlen(&arr + 1)); //���ֵ A-6
//	 
//	printf("%d\n", strlen(&arr[0] + 1)); //���ֵ A-1
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr)); //7
//	printf("%d\n", sizeof(arr + 0)); //7
//	printf("%d\n", sizeof(*arr)); //1
//	//��Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1])); // 1
//	printf("%d\n", sizeof(&arr)); //4/8
//	printf("%d\n", sizeof(&arr + 1));  //4/8
//	printf("%d\n", sizeof(&arr[0] + 1)); //4/8
//
//	printf("%d\n", strlen(arr)); //6
//	printf("%d\n", strlen(arr + 0)); //6
//	printf("%d\n", strlen(*arr)); //�Ƿ�����
//	//��Ԫ��a��ASII�� 97
//	printf("%d\n", strlen(arr[1])); //�Ƿ�����
//	printf("%d\n", strlen(&arr)); //6
//	printf("%d\n", strlen(&arr + 1)); //���ֵ
//	printf("%d\n", strlen(&arr[0] + 1)); //5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p)); // 4/8
//	printf("%d\n", sizeof(p + 1));  // 4/8
//	printf("%d\n", sizeof(*p));  // 1
//	printf("%d\n", sizeof(p[0])); // 1
//	printf("%d\n", sizeof(&p)); // 4/8
//	printf("%d\n", sizeof(&p + 1)); // 4/8
//	printf("%d\n", sizeof(&p[0] + 1)); // 4/8
//	return 0;
//}
