#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.ָ����ʲô
//ָ�����ڴ���һ����С��Ԫ�ı�ţ�Ҳ���ǵ�ַ
//ͨ��ָ����ָ���������������ڴ��ַ�ı���

//int main()
//{
//	int a = 10;
//	char ch;
//	int* pa = &a;
//	char* pc = &ch;
//	printf("%p\n", &a);
//	return 0;
//}

//ָ�����������������ŵ�ַ�ı����������ָ���е�ֵ���������ڴ��ַ����



//2.ָ���ָ������

//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pf));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}
//ָ�����;����ˣ�ָ����н����ò�����ʱ�򣬷��ʼ����ֽڣ�Ȩ�ޣ�
//char* ��ָ������÷���1���ֽ�
//int*  ��ָ������÷���4���ֽ�

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	
//	printf("pa=%p\n", pa);
//	printf("pc=%p\n", pc);
//	
//	printf("pa+1=%p\n", pa + 1);
//	printf("pc+1=%p\n", pc + 1);
//	return 0;
//}
//ָ�����;�����ָ��Ĳ�������ǰ/�����һ�������룩
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p = i + 1;
//	//	p++;
//	//}
//	return 0;
//}



//3.Ұָ��
//Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�

//ָ��δ��ʼ��
//int main()
//{
//	int* p;//p����Ұָ��
//	*p = 20;
//	return 0;
//}

//ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i <= sz; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int num = 100;
//	return &num;
//}
//int main()
//{
//	int*p = test();
//	*p = 200;
//	return 0;
//}

//��α���Ұָ��
//1.ָ���ʼ��
//2.С��ָ��Խ��
//3.ָ��ָ��ռ��ͷţ���ʱ��NULL
//4.���ⷵ�ؾֲ������ĵ�ַ�����ⷵ��ջ�ռ�ĵ�ַ
//5.ָ��ʹ��֮ǰ�����Ч��
//int main()
//{
//	int a = 10;
//	//int* p = NULL;
//	int* p = &a;
//	if (p != NULL)
//	{
//		printf("%d\n", *p);
//	}
//	return 0;
//}



//4.ָ������
//ָ��+-����
//int main()
//{
//	double arr[10] = { 0 };
//	double* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%lf ", *(p + i));
//	}
//	return 0;
//}

//ָ��-ָ�� - ָ��֮��Ԫ�صĸ���
//int main()
//{
//	//����ָ�������ǰ���ǣ�ָ��ָ��ͬһ��ռ�
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str)
//		str++;
//	return str - start;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//ָ��Ĺ�ϵ���� - ָ��Ƚϴ�С
//��׼�涨������ָ������Ԫ�ص�ָ����ָ�����һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
//���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽ�



//5.ָ�������
//����������������Ԫ�صĵ�ַ
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//
//	return 0;
//}



//6.����ָ��
//int main()
//{
//	int a = 10;
//	int* p = &a;//p����ָ�������һ��ָ��
//	int** pp = &p;//pp���Ƕ���ָ��
//
//	//*p = 20;
//	//*(*pp) = 200;
//	**pp = 300;
//	printf("%d\n", a);
//	return 0;
//}



//7.ָ������
//ָ������������ - ���ָ�������
//int main()
//{
//	int* arr[5];//�������ָ�������
//	char* arr2[6];//����ַ�ָ�������
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int e = 50;
//
//	int* arr[5] = { &a,&b,&c,&d,&e };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	//��һά����ģ��һ����ά����
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int arr4[] = { 4,5,6,7,8 };
//
//	int* arr[4] = { arr1,arr2,arr3,arr4 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr + i) + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}


