#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. �ַ�ָ��

//int main()
//{
//	char ch = 'b';
//	char* pc = &ch; // �ַ�ָ��
//
//	char arr[] = "hello world";
//	char* p3 = arr;
//	// p ָ������������Ԫ��
//	// �����ǿ����޸ĵ�
//
//	char* p = "hello world";
//	// ���ַ��������ַ��ĵ�ַ����� p ��
//	// ���ʽ��ֵ�����ַ��ĵ�ַ
//	// �ַ����ǳ������ʽ��ֵ�����޸ģ������д�����淶
//	const char* p2 = "hello";
//
//	printf("%s\n", p);
//	return 0;
//}


// ���������ʱ�򣬻Ὺ�ٵ����Ŀռ䣬��Ԫ�ص�ַ��ͬ
// �����ַ�ָ�룬C/C++��ѳ����ַ����洢������һ���ڴ�����
// ����ָ��ָ��ͬһ���ַ�����ʱ��ʵ��ָ�����ͬһ���ڴ��ַ

//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//
//	char* arr3 = "hello world";
//	char* arr4 = "hello world";
//
//	if (arr1 == arr2)
//		printf("arr1 and arr2 are same.\n");
//	else
//		printf("arr1 and arr2 are not same.\n");
//
//	if(arr3 == arr4)
//		printf("arr3 and arr4 are same.\n");
//	else
//		printf("arr3 and arr4 are not same.\n");
//
//	return 0;
//}


// 2. ָ������ - �洢ָ�������

// ģ���ά����
//int main()
//{
//	int arr1[5] = {1,2,3,4,5};
//	int arr2[5] = { 6,7,8,9,0 };
//	int arr3[5] = { 11,12,13,14,15 };
//
//	int* pa[3] = { arr1,arr2,arr3 };
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			//printf("%d ", pa[i][j]);
//			printf("%d ", *(pa[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



// 3. ����ָ�� - ָ�������ָ��

// 3.1 ����
//int main()
//{
//	int arr[10] = {0};
//
//	int (*pa)[10] = &arr; // &arr�õ�������������ĵ�ַ
//	// * ��ʾ pa �Ǹ�ָ�룬int [10] ��ָ��������С
//  // [] �����ȼ����� * �����Ա������ () ����֤ p �Ⱥ� * ���
//
//	char* arr2[3];
//	char* (*pa2)[3] = &arr2;
//	return 0;
//}


// 3.2 ������ �� &������

// ������ - ������Ԫ�صĵ�ַ

// &������ - ��������ĵ�ַ������ int(*)[10]
// +1 ������������Ĵ�С


// 3.3 ����ָ���ʹ��

//void print_arr1(int arr[3][5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print_arr2(int (*arr)[5], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	
//	print_arr1(arr, 3, 5);
//	// ������arr����ʾ��Ԫ�صĵ�ַ
//	
//	print_arr2(arr, 3, 5);
//	// ��ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	// ���ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	// ������ָ������������
//	return 0;
//}


// 4. ���������ָ�����
// 4.1 һά���鴫��

//void test(int arr[]){}
//void test(int arr[10]){}
//void test(int* arr){}
//
//void test2(int* arr[20]){}
//void test2(int** arr){}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}

// 4.2 ��ά���鴫��

//void test(int arr[3][5]){}
//void test(int arr[][]){} // ���󣬶�ά�����п���ʡ�ԣ��в���ʡ��
//void test(int arr[][5]){}
//
//void test(int (*arr)[5]){} // �Ƽ�д��
//
//void test(int* arr){} // ����,�������Զ�����
//void test(int*arr[5]){} // ����
//void test(int** arr){} // ���Ƽ�
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}

// 4.3 һ��ָ�봫��
// ��һ�������Ĳ���Ϊһ��ָ���ʱ�򣬺����ܽ��յĲ�����
// ��������&������[0]

// 4.4 ����ָ�봫��
// *p = &ch -> **pp = &p


// 5. ����ָ��
// �����������Ͼ��Ǻ����ĵ�ַ
// ����ָ��ķ���ֵ����������Ҫ�ͺ�����ͬ
// &������ �õ��ľ��Ǻ����ĵ�ַ

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//pf���Ǻ���ָ��
//	int (* pf)(int, int) = Add;//�����ĵ�ַҪ���������͵÷��ڡ�����ָ���������
//	
//	//int ret = (*pf)(3, 5);
//	//int ret = Add(3, 5);
//	int ret = pf(3, 5);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//char* test(int c, float* pf)
//{
//
//}
//int main()
//{
//	char* (*pt)(int, float*) = test;
//
//	return 0;
//}


// ��ϰ1
//int main()
//{
//	(*( void (*)() )0)();
//	// ����һ�κ�������
//	// 1. (void(*)())0 ��ǿ������ת��������ַ0ǿ��ת��Ϊ void(*)() ���͵ĺ���ָ��
//	// 2. ��ַΪ 0 �ĵط������һ������������û���������������� void
//	// 3. (*...)() �ǵ������������û�в���������Ҫ����ֵ
//	return 0;
//}


// ��ϰ2
//typedef void(*pf_t)(int);
//��void(*)(int)�����������������pf_t

//int main()
//{
//	void (* signal(int, void(*)(int) ) )(int);
//	// ��һ������������
//	// 1. signal(int, void(*)(int) ) - ������������signal��signal�����Ĳ�����һ����int���ͣ�
//	// �ڶ�����void(*)(int)���͵ĺ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//	// 2. void(*...)(int) - signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//	
//	// �����������ض��������
//	//pf_t signal(int, pf_t);
//
//	return 0;
//}

//typedef void(*pf_t2)(int);//pf_t2��������
//void(*pf)(int);//pf�Ǻ���ָ�����������


// 6. ����ָ������
// �����ÿ��Ԫ�ض���һ������ָ��

//int main()
//{
//	int (*parr1[10])(int, int);
//	// parr1 ���� [] ��ϣ�˵��parr1������
//	// �����Ԫ�������� int(*)(int, int) �ĺ���ָ��
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
////int main()
////{
////	//��ź���ָ������� - ����ָ������
////	int (* pf[4])(int, int) = {Add, Sub, Mul, Div};
////	//0 1 2 3
////	int i = 0;
////	for (i = 0; i < 4; i++)
////	{
////		int ret = pf[i](8, 4);
////		printf("%d\n", ret);
////	}
////
////	return 0;
////}
//
//
//// ��������ģ��ʵ��
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1.Add  2.Sub    ******\n");
//	printf("******   3.Mul  4.Div    ******\n");
//	printf("******   0.exit          ******\n");
//	printf("*******************************\n");
//
//}
//
//// ת�Ʊ� - ����ָ�������
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	int (*parr[])(int, int) = { NULL,Add,Sub,Mul,Div }; // ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		if (input == 0)
//			printf("�رռ�����\n");
//		else if (input >= 1 && input <= sizeof(parr) / sizeof(parr[1]))
//		{
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			int ret = parr[input](x, y); // ת�Ƶ���Ӧ�ĺ���
//			printf("%d\n", ret);
//		}
//		else
//			printf("������ѡ��\n");
//	} while (input);
//	
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("�����������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�رռ�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


// 7. ָ����ָ�������ָ��
// ��һ��ָ��
// ָ��һ�����飬�����Ԫ���Ǻ���ָ��

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
//	// ����ָ��
//	int(*pf)(int, int) = Add; 
//
//	// ����ָ������
//	int(*pfarr[])(int, int) = { Add,Sub };
//
//	// ָ����ָ�������ָ��
//	int(*(*ppf)[])(int, int) = &pfarr;
//	return 0;
//}


// 8. �ص�����
// ��һ��ͨ������ָ����õĺ�����
// ����Ѻ�����ָ��(��ַ)��Ϊ�������ݸ���һ�������������ָ�뱻������������ָ��ĺ�����ʱ�����Ǿ�˵���ǻص�����

// �ص����������ɸú�����ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼�������������Ӧ��

// ��������ģ��ʵ��

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void menu()
//{
//	printf("*******************************\n");
//	printf("******   1.Add  2.Sub    ******\n");
//	printf("******   3.Mul  4.Div    ******\n");
//	printf("******   0.exit          ******\n");
//	printf("*******************************\n");
//
//}
//
//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("�����������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�رռ�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}


// qsort ��ʹ�ã�quicksort ��������
//void qsort(void* base,  // ָ�����������ĵ�һ��Ԫ��
//			size_t num,  // �������Ԫ�ظ���
//			size_t size,  // ÿ��Ԫ�صĴ�С����λ���ֽ�
//			int(*cmp)(const void* p1, const void* p2)); //ָ��һ���ȽϺ��������ԱȽ�����Ԫ�صĴ�С


// qosrt������������
//#include <stdlib.h>
void print_arr(int* arr,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int int_cmp(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//int main()
//{
//	int arr[] = { 3,5,7,0,2,6,8,9,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, sz,sizeof(arr[0]),int_cmp);
//
//	print_arr(arr,sz);
//	return 0;
//}


// qsort ����ṹ��
#include <stdlib.h>
#include <string.h>

struct Stu
{
	char name[20];
	int age;
};

// ������������
int cmp_by_age(const void* p1, const void* p2)
{
	return (((struct Stu*)p1)->age) - (((struct Stu*)p2)->age);
}

// ������������
int cmp_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

//int main()
//{
//	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	// ��������Ƚ�
//	//qsort(s, sz, sizeof(s[0]), cmp_by_age);
//    qsort(s, sz, sizeof(s[0]), cmp_by_name);
//
//	return 0;
//}


// ����ð�������˼�룬ʵ��qsort��ʽ��bubble_sort()

void swap(char* p1, char* p2,size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void bubble_sort(void* base, size_t num, size_t width, int (*cmp)(const void* p1, const void* p2))
{
	for (int i = 0; i < num - 1; i++)
	{
		int flag = 1; // ���������Ѿ����
		for (int j = 0; j < num - i - 1; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				flag = 0;
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
		if (flag == 1)
			break;
	}
}

//int main()
//{
//	int arr[10] = { 3,6,4,5,8,1,2,9,0,7 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr, sz, sizeof(arr[0]), int_cmp);
//
//	print_arr(arr,sz);
//	return 0;
//}


int main()
{
	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"wangwu",17} };
	size_t sz = sizeof(s) / sizeof(s[0]);
	
	// ��������Ƚ�
	//bubble_sort(s, sz, sizeof(s[0]), cmp_by_age);

	// ������������
	bubble_sort(s, sz, sizeof(s[0]), cmp_by_name);
	return 0;
}






