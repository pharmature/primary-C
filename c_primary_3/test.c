#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//除号两端的操作数如果都是整数，执行的是整数除法，结果也是整数
//至少有一个操作数是浮点数执行的才是浮点数的除法
//int main()
//{
//	int a = 9 / 2;
//	printf("%d\n", a);
//
//	float b = 9 / 2;
//	printf("%f\n", b);
//
//	float c = 9.0 / 2;
//	printf("%f\n", c);
//	return 0;
//}

//sizeof 是一个操作符，不是函数,计算所占内存空间的大小
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int arr[10] = { 0 };
//	printf("%zu\n", sizeof a);
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof c);
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int));
//
//	return 0;
//}

//strlen是库函数，只能针对字符串，求字符串的长度，计算的是字符串中\0之前的字符个数

//前置++ -- 和后置++ --的区别
//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++，后使用
//	printf("a=%d b=%d\n", a, b);
//
//	int c = 10;
//	int d = c++;//后置++，先使用，后++
//	printf("c=%d d=%d", c, d);
//	return 0;
//}

//结构体的创建和使用
struct Stu
{
	char name[20];
	int age;
	float score;
};
void Print(struct Stu* ps)
{
	//1.
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	//2.结构体指针->结构体成员
	printf("%s %d %f", ps->name, ps->age, ps->score);
}
int main()
{
	struct Stu s = { "zhangsan",20,95.5f };
	struct Stu s2 = { "lisi",20,96.5f };
	//结构体变量.结构体成员
	scanf("%s %d %f", s2.name, &(s2.age), &(s2.score));
	printf("%s %d %f", s.name, s.age, s.score);
	Print(&s2);
	return 0;
}












