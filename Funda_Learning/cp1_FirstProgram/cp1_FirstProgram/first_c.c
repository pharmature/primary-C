#include <stdio.h>

int main()
{
	// 第一个C语言程序
	printf("hello world!!");
	return 0;

	// C语言的数据类型
	printf("%d\n", sizeof(char)); // 字符
	printf("%d\n", sizeof(short)); // 短整型
	printf("%d\n", sizeof(int)); // 整型
	printf("%d\n", sizeof(long)); // 长整型
	printf("%d\n", sizeof(long long)); // 更长的整形
	printf("%d\n", sizeof(float)); // 单精度浮点数
	printf("%d\n", sizeof(double)); // 双精度浮点数
	//C语言没有字符串类型
}


// 变量
// 局部变量 - 全局变量
// 变量的命名：数字、字母、下划线，不可以数字开头，区分大小写；

// 常量
// 字符常量
// const修饰的常变量
// #define定义的常量
// enum枚举常量
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


// 字符串
// 结束标志时 \0 转义字符，计算字符串长度的时候\0时结束标志，不是字符串内容。

// 转义字符
// \n - 换行
// \t - 制表符
// \b - 退格符
// \r - 回车
// \a - 电脑叫
// \ddd - 八进制数字，不能大于8
// \xdd - 十六进制数字