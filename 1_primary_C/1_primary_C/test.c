#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.什么是C语言
//一门计算机语言：人和计算机交流的语言


//2.第一个C语言程序

//#include <stdio.h>
//main函数 - 主函数，是程序的入口，有且只有一个
//int main()
//{
//	printf("hello bit \n");
//	printf("he he\n");
//	return 0;
//}
//C语言中有一个约定：
//返回0标识正常返回
//返回的是非0，表示异常返回


//3.数据类型
//char        字符数据类型
//short       短整型
//int         整形
//long        长整型
//long long   更长的整形
//float       单精度浮点数
//double      双精度浮点数

//#include <stdio.h>
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


//4.变量、常量

//int age = 150;
//float weight = 45.5f;
//char ch = 'w';

//变量的命名
//只能由字母（包括大写和小写）、数字和下划线（ _ ）组成。
//不能以数字开头。
//长度不能超过63个字符
//变量名中区分大小写的
//变量名不能使用关键字

//int num = 1000;//全局变量
//int main()
//{
//	int num = 10;//局部变量
//	//局部优先
//	printf("%d", num);
//	return 0;
//}

//变量的使用
//int main()
//{
//	int age = 10;
//	age = age + 1;
//	printf("%d", age);
//	return 0;
//}

//两个整数相加
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//变量的作用域和生命周期
//int main()
//{
//	{
//		int a = 100;
//		printf("%d", a);
//	}
//	return 0;
//}

//声明外部符号 
//extern int a;

//常量
//int main()
//{
//	// - 字面常量
//	//30;
//	// 3.14;
//	// "abcdef";
//	// 'a';
//	
//	// - const修饰的常变量
//	//const int num = 100;
//	//num = 200;
//	//printf("%d", num);
//
//	//数组 - 存放一组数
//	//const int n = 10;
//	//int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//C99标准之前，不允许数组的大小使用变量指定
//	//int n = 10;
//	//int arr[n];//error
//	//C99标准中，引入了变长数组的概念
//	//int n = 10;
//	//int arr[n];//ok
//	// VS2022不支持C99中的边长数组
//	
//	return 0;
//}
// - #define定义的标识符常量

//#define MAX 1000
//int main()
//{
//	int a = MAX;
//	printf("%d", a);
//	int arr[MAX];
//
//	return 0;
//}

// - 枚举常量
//C语言支持我们创建枚举类型
//enum是枚举的关键字
//enum Sex
//{
//	//枚举类型中列举出的可能取值都是枚举常量
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	//枚举 - 一一列举
//	//性别 - 男、女、保密
//	//三原色 - R、G、B
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	return 0;
//}


//5.字符串+转义字符+注释
//字符 - 单引号''
//字符串 - 双引号""
//字符串的结束表示  \0 - 计算数组长度时不算长度
//注释 // /* */ 不支持嵌套注释


//6.选择语句
//if  switch
//int main()
//{
//	int input = 0;
//	printf("加入比特学习\n");
//	printf("你要好好学习吗？(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}


//7.循环语句
//for  while  do while 
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 20000)
//	{
//		printf("写代码\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer");
//	}
//	return 0;
//}


//8.函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//9.数组
//存放一组相同类型的数据
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 0 };//不完全初始化，生育的默认会初始化为0
//	char ch2[] = {'a','b','c'};
//	char ch3[] = { 0 };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d",&arr[i]);
//		i++;
//	}
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//10.操作符
//算数操作符 + - * / %
//int main()
//{
//	//  /（除号）两端的操作数如果是都是整数，执行的是整数除法，
//	//至少有一个操作数是浮点数，执行的才是浮点数的除法
//	//int a = 7 / 2;
//	//printf("%d\n", a);
//
//	//float f = 7 / 2;
//	//printf("%f", f);
//
//	float f = 7.0 / 2;
//	printf("%f", f);
//	return 0;
//}

//int main()
//{
//	// % 操作符，关注的是除法后的余数
//	//两个操作数必须是整数
//	int a = 7 % 2;
//	printf("%d", a);
//	return 0;
//}

//移位操作符 >>  <<  - 二进制位

//位操作符 & ^ |  - 二进制位

//赋值操作符 = += -= *= /= &= ^= |= >>= <<=

//单目操作符
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(a)); 
//	printf("%d\n", sizeof a);//变量名的括号可以省略
//	printf("%d\n", sizeof (int));//数据类型的括号不能省略
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", sizeof ch);
//	printf("%d\n", sizeof (char));
//	
//	printf("%d\n", sizeof (arr));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
//strlen是库函数，只能针对字符串，求字符串的长度，计算的字符串中\0之前的字符个数
//sizeof是操作符，计算所占内存空间的大小

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++，先++，后使用
//	printf("a=%d b=%d\n", a, b);//11
//
//	int c = a++;//后置++，先使用，后++
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}

//关系操作符 > >= < <= != ==
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//两个字符串不能使用== 来判断相等，使用strcmp
//	if (strcmp(arr1, arr2) == 0)
//		printf("==\n");
//	else
//		printf("!=\n");
//	return 0;
//}

//逻辑操作符 &&逻辑与 ||逻辑或

//条件操作符(三目操作符) exp1?exp2:exp3
//int main()
//{
//	int a = 5;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	(a > 5) ? (b = 3) : (b = -3);
//
//	b = (a > 5 ? 3 : -3);
//
//	printf("%d", b);
//	return 0;
//}

//逗号表达式 exp1,exp2,exp3, ...expN
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (a += 2, b = b - c + a, c = a + b);
//	//逗号表达式的特点：
//	//从左向右依次计算，整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//下标引用、函数调用和结构成员
//[]       ()        . ->  



//11.常见关键字
//auto 自动 - 自动变量的
//局部变量都是自动创建，自动销毁的，所以局部变量都是auto修饰的
//default - 默认
//自定义类型 - enum(枚举)  struct(结构体) union(联合体/共用体)
//extern(声明外部符号) 
//register - 寄存器关键字
//static - 静态
//typedef - 类型重定义
//volatile

//int main()
//{
//	//建议把10放在寄存器中
//	register int a = 10;
//	return 0;
//}

//typedef unsigned int unit;
//int main()
//{
//	unsigned int num1;
//	unit num2;
//	return 0;
//}

//void test()
//{
//	//普通的局部变量是放在内存的栈区上的，进入局部范围，变量创建，出了局部范围变量销毁
//	//当static修饰局部变量的时候，局部变量实在静态区开辟空间的，这时的局部变量，出了作用域变量不销毁，
//	//下次进去作用域，使用的是上一次遗留的数据
//	//改变了存储位置，由栈区->静态区，使得变量的生命周期发生了变化
//	static int a = 3;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//全局变量具有外部的链接属性，如果全局变量被static修饰，外部链接属性就变成了内部链接属性，其他源文件就没法通过链接找到这个符号
//static修饰的局部变量只能在自己所在的.c文件里使用

//函数是具有外部链接属性的，其他源文件想使用函数，只需要正确的声明就可以
//但是函数被static修饰，外部链接属性就变成了内部链接属性，这个时候函数只能在自己所在的.c文件内部使用，不能在外部使用



//12.define定义常量和宏

//1.定义常量
//#define MAX 1000
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	int arr[MAX] = { 0 };
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}

//2.定义宏
//#define ADD(x,y) ((x)+(y))
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	int d = MAX(a, b);
//	printf("%d", d);
//	return 0;
//}



//13.指针
//指针就是地址，地址就是内存单元的编号
//指针变量 - 存放指针的变量

//指针的大小
//指针变量是用来存放地址的，所以指针变量的大小取决于存储一个地址需要多大的空间
//int main()
//{
//	//sizeof计算的结果是无符号整数
//	//对应的打印格式是 - %zu
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}



//14.结构体
struct Stu
{
	char name[20];
	int age;
	float score;

};
void print(struct Stu* ps)
{
	//1.
	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	//2.结构体指针->结构体成员
	printf("%s %d %f\n", ps->name, ps->age, ps->score);
}
int main()
{
	struct Stu s = { "zhangsan",20,95.5f };
	struct Stu s2 = { "lisi",20,96.0f };
	//结构体变量.结构体成员
	printf("%s %d %f\n", s.name, s.age, s.score);
	//输入信息
	scanf("%s %d %f", s2.name, &(s2.age), &(s2.score));
	print(&s2);
	return 0;
}
