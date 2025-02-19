#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. 算数操作符
// + - * / %
// 除了 % 以外的操作符都能作用于整型和浮点型
// 除法 / 如果两个操作数都是整型，结果也是整型，有一个浮点型，结果就是浮点数
// % 操作符的两个操作数必须是整型


// 2. 移位操作符
// 移位操作符的操作数必须是整型
// 不赋值，不会改变原变量的值


// 2.1 左移操作符 <<
// 左边抛弃，右边补 0
//int main()
//{
//	int a = 3;
//	int b = a << 1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

// 2.2 右移操作符
// 逻辑移位
// 左边补 0，右边丢弃

// 算数移位
// 左边用符号位填充，右边丢弃
// 取决于编译器


// 3. 位操作符
// & - 按位与，| - 按位或，^ - 按位异或(相同为0，不同为1)
// 操作数必须是整数，操控的是二进制位

// 实现两个数的变换
// 按位异或满足交换律，即：
// a ^ a = 0;
// 0 ^ a = a;

//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前:a = %d,b=%d\n", a, b);
//
//	// 按位异或
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	// 不创建第三个变量
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	// 创建第三个变量
//	/*int tmp = a;
//	a = b;
//	b = tmp;*/
//
//	printf("交换后:a = %d,b=%d\n", a, b);
//	return 0;
//}


// 求一个整数存储在内存中的二进制中 1 的个数


// 4. 赋值操作符 = 
// 复合赋值符 +=，-=，*=，\=，%=，>>= <<= &= |= ^=


// 5. 单目操作符
// ! 逻辑反操作 
// - 负值
// + 正值
// & 取地址
// sizeof 求类型的大小
// ~ 二进制按位取反
// -- 前置、后置--
// ++ 前置、后置++
// * 解引用操作符(间接访问操作符)
// (类型) 强制类型转换

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	//00000000000000000000000000000011
//	//00000000000000000000000000001000
//	a |= (1 << 3);
//	printf("%d\n", a);
//
//	//00000000000000000000000000001011
//	//11111111111111111111111111110111
//	a &= (~(1 << 3));
//	printf("%d\n", a);
//
//	return 0;
//}

//问题代码
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a) + (++a);
//	printf("%d\n", b);
//	return 0;
//}

// 6. 关系操作符
// > >= < <= != ==
// 注意 赋值= 和 判断相等== 



// 7. 逻辑操作符
// && 逻辑与  || 逻辑或
// 计算的结果是 1 或 0 
// && 表达式中有一个为 0 ，后面的不再计算
// || 表达式中有一个为 1 ，后面的不在计算

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
//
//	//i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//
//	return 0;
//}


// 8. 条件操作符
// exp1 ? exp2 : exp3

// 判断两个数的大小
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}


// 9. 逗号表达式
// exp1, exp2, ..., expn
// 从左向右依次执行，整个表达式的结果是最后一个表达式的结果

//a = get_val();
//count_val(a);
//while (a > 0)
//{
//	a = get_val();
//	count_val();
//}

// 可以简化成

//int a = 0;
//while (a = get_val(), count_val(a), a > 0)
//{
//
//}


// 10. 下标引用、函数调用、结构成员
// 10.1 下标引用操作符 []
// 操作数：一个数组名 + 一个索引值

// 10.2 函数调用操作符 ()
// 第一个操作数是函数名，剩余的操作数就是传递给函数的参数

// 10.3 结构成员访问
// 结构变量名.结构成员
// 结构指针变量->结构成员


// 11. 表达式求值
// 表达式求值的顺序一部分是由操作粗的优先级和结合性决定
// 有些表达式的操作数在求值的过程中可能需要转换为其它类型

// 11.1 隐式类型转换 -- 整型提升
// C语言的整型算数总是以缺省型类型的精度来进行的
// 为了获得这个精度，表达式中的 字符 和 短整型 操作数在使用之前被转换为普通整型 -> 整型提升

// 整型提升的意义：
// 表达式的整型运算要在CPU相应运算器件内执行，CPU内整型运算器ALU的操作数的字节长度一般就是 int 的字节长度，同时也是CPU的通用寄存器的长度
// 两个 char 类型的相加，在CPU执行时时加上要先转换为CPU内整型操作数的标准长度。

// 通用CPU是难以直接实现两个8bit位直接相加运算，虽然机器指令中可能由这种字节相加指令。
// 所以，表达式中各种长度小于 int 长度的短整型，都必须先转换为 int 或 unsigned int，然后才能被送入CPU执行运算。

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//}

// 整型提升是按照变量的数据类型的符号位来提升的：
// 正数：高位补充 0 
// 负数：高位补充 1
// 无符号整型提升，高位补充 0

//int main()
//{
//	char c = 1;
//	printf("%d\n", sizeof(c));
//	printf("%d\n", sizeof(+c));
//	printf("%d\n", sizeof(-c));
//
//	return 0;
//}
// 只要参与表达式运算，就会发生整型提升，所以 sizeof 的结果也会转变为 int 的大小


// 11.2 算数转换
// 某个操作符的各个操作数属于不同的类型，那么其中一个操作数会转换为另一个操作数的类型
// 寻常类型转换的优先级：
// long double 
// double
// float
// unsigned long
// long
// unsigned int
// int

// 某个操作数的优先级比较低，要先转换为优先级较高的类型


// 11.3 操作符的属性
// 影响表达式的三个因素：
// 1. 操作符的优先级
// 2. 操作做夫的结合性
// 3. 是否控制求值顺序

int main()
{
	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("%d\n", i);
	return 0;
}


