#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//第一个C语言程序
//int main()
//{
//	printf("Hello world!\n");
//	return 0;
//}

//不同数据类型的大小
//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    printf("%d\n", sizeof(long double));
//    return 0;
//}

//两个整数相加
int main()
{
	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d\n", sum);
	return 0;
}







