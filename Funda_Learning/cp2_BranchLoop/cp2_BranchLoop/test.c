#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 1.什么是语句

// C语句分为五类：
// (1)表达式语句
// (2)函数调用语句
// (3)控制语句
// (4)复合语句
// (5)空语句

// 控制语句
// 用于控制程序的执行流程，以实现程序的各种结构方式（C语言的三种结构：顺序结构、选择结构、循环结构）
// 它们由特定的语句定义符组成，C语言有九种控制语句

// C语言的九种控制语句
// 分支语句(条件判断语句)：if, switch
// 循环语句：while, for, do...while,
// 转向语句：break, continue, return, goto


// 2.分支语句 - 选择结构

// 2.1 if语句

//int main()
//{
	// 1. if()
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}*/

	// 2. if() else
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}
	else
	{
		printf("成年\n");
	}*/
	
	// 3. if() else if() else
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("未成年\n");
	else if (age >= 18 && age < 30)
		printf("青年\n");
	else if (age >= 30 && age < 50)
		printf("中年\n");
	else
		printf("老年\n");*/

	//return 0;
//}

// 如果表达式的结果为真，则语句执行
// 在C语言当中，0表示假，非0表示真

// 悬空else默认和它最近的if匹配
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (1 == a)  // 变量和常量比较，常量要写在左边 - 推荐
//		if (2 == b)
//			printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

// 代码风格 - 适当的使用 {代码块} 可以使代码的逻辑更加清楚
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (2 == a)
//	{
//		if (2 == b)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}


// 案例：判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a % 2 == 1)
//		printf("奇数\n");
//	return 0;
//}

// 案例：输出1~100范围内的奇数
//int main()
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if (a % 2 == 1)
//			printf("%d", a);
//		a++;
//	}
//	return 0;
//}


// 2.2 switch语句
// 格式：
// switch(整形表达式） 
//     case 整形常量表达式: 
//     default: 
//         break; 

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("周一\n");
//		break;
//	case 2:
//		printf("周二\n");
//		break;
//	case 3:
//		printf("周三\n");
//		break;
//	case 4:
//		printf("周四\n");
//		break;
//	case 5:
//		printf("周五\n");
//		break;
//	case 6:
//		printf("周六\n");
//		break;
//	case 7:
//		printf("周日\n");
//		break; 
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}

// 在switch语句中，我们没办法直接实现分支，搭配break使用才能实现真正的分支

// break语句用于划分不同的分支，否则代码会一直执行下去。
// break不是语法错误，只会影响代码逻辑
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
// 编程好习惯：在最后一个case语句的后面加上一条break语句。
// 避免出现在以前的最后一个case语句后面忘了添加break语句

// default子句
// default可以写在任何一个case标签可以出现的位置。
// default语句表示默认执行，如果每一个case都不匹配，就执行default子句。
// 编程好习惯：每一个switch语句中都放一个default子句，后面加一个break；

// 练习题：输出的m和n是多少
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n) // switch语句可以嵌套
//		{
//		case 1:
//			n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);
//	return 0;
//}


// 3. 循环语句

// 3.1 while循环

// 在屏幕上打印1-10
//int main()
//{
//	int a = 1;
//	while (a <= 10)
//	{
//		printf("%d ", a);
//		a += 1;
//	}
//	return 0;
//}

// while循环中的 break 和 continue
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (5 == i)
//			//break;
//			continue;
//
//		printf("%d\n", i);
//		i += 1;
//	}
//	return 0;
//}
// break终止后面的所有循环，直接终止循环；
// continue终止本次循环，直接跳转到while语句的判断部分，进行下一次循环的入口判断。


// getchar()读取一个字符，返回的是读取到的字符的ASCII码值，读取失败返回的是EOF，ASCII 1~127
// EOF - end if file，-1 - 文件结束标志,
// putchar()输出一个字符

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

// 输出键盘的输入
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}

// 只能输出0~9
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9') // 注意这里的是字符'0'和字符'9',比较的是ASCII码值
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

// 案例：可以用来清理缓冲区
//int main()
//{
//	printf("请输入密码:>");
//	char passsword[20] = {0};
//	scanf("%s", passsword);
//	// 清理缓冲区
//	while(getchar() != '\n')  // 处理'\n'
//	{
//		;
//	}
//
//	printf("请确认密码:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！\n");
//	}
//	else
//	{
//		printf("确认失败!\n");
//	}
//
//	return 0;
//}
// getchar()、scanf()这样的输入函数，不是直接从键盘取得输入，而是从缓冲区取得

// scanf()函数默认输入到空格
//#include <stdio.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	//scanf("%s", password); // 遇到空格时停止输入
//	scanf("%[^\n]", password);
//	printf("%s", password);
//	return 0;
//}


// 3.2 for循环
// for(初始化; 条件判断; 调整)

// 打印1~10
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

// for(int i = 0; ; )是C++风格的，C11也支持

// for 和 while 对比：
// while循环当中，初始化、判断、调整三个语句离得很远，查找修改不够集中和方便
// 所以，for循环的风格更好，使用的频率也更高

// break 和 continue：和while循环中一样

// for语句的循环控制变量
// (1) 不可以在for循环体内修改循环变量，防止 for 循环失去控制
// (2) for 循环的控制变量的取值尽量采用"前闭后开"区间 - for(i=0;i<10;i++)

// for循环的变种
// for循环中的初始化部分，判断部分，调整部分都是可以省略的，但是不建议初学时省略，容易导致问题
//int main()
//{
//	/*for (;;)
//	{
//		printf("hehe\n"); // 死循环
//	}*/
//
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (; j < 10; j++) // 没有初始化，陷入死循环
//		{
//			printf("hehe\n"); 
//		}
//	}
//
//	return 0;
//}

// 使用多余一个变量控制循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++);
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

// 笔试题：请问循环要循环多少次
int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++) // = 是赋值
	{
		k++;
	}
	return 0;
}


// 3.3 do...while()循环
// do
//     循环语句;
// while(表达式);

// 循环至少执行一次
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			//break;
//			continue;
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//	return 0;
//}

// break和continue:
// break使用：while for do...while switch
// continue使用：while for do


// 3.4 练习

// 计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("n的阶乘是:> %d", ret);
//	return 0;
//}

// 计算1！+2！+3!+...+10!
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		// 计算每个数的阶乘
//		int ret = 1; // 每次计算阶乘都要将ret重置为 1.
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		// 阶乘求和
//		sum += ret;
//		
//	}
//	printf("%d ", sum);
//	return 0;
//}

// 代码优化：
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n; // n的阶乘不需要每次都从1开始计算，直接继承n-1的阶乘
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}

// 在一个 有序 数组中查找具体的某个数字
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			flag = 1;
//			printf("找到了！下标是:>%d", i);
//			break;
//		}
//	}
//	if (0 == flag)
//	{
//		printf("没找到！");
//	}
//	return 0;
//}

// 代码优化：二分查找 ---> 二分查找的前提是数组【有序】。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6,7,8,9,10 };
//	int  k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int flag = 0;
//	int left = 0;
//	int right = sz - 1; // 下标比数组长度-1
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2; // 可能存在left+right超过整型范围的情况
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			flag = 1;
//			printf("找到了，下标是:>%d", mid);
//			break;
//		}
//	}
//	if (0 == flag)
//	{
//		printf("没找到\n");
//	}
//	return 0;
//}

// 编写代码，演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	char src[] = "welcome to world!!!";
//	char des[] = "*******************";
//
//	int left = 0;
//	int right = strlen(src) - 1;
//	while (left <= right)
//	{
//		des[left] = src[left];
//		des[right] = src[right];
//		left++;
//		right--;
//		printf("%s\n", des);
//		Sleep(1000); // 暂停一秒
//		system("cls"); // 清空屏幕
//	}
//	printf("%s\n", des);
//
//	return 0;
//}

// 使用for循环
//int main()
//{
//	char src[] = "welcome to world!!!";
//	char des[] = "*******************";
//
//	int left = 0;
//	int right = 0;
//	for (left = 0, right = strlen(src) - 1; left <= right; left++,right--)
//	{
//		des[left] = src[left];
//		des[right] = src[right];
//		printf("%s\n", des);
//		Sleep(1000); 
//		system("cls"); 
//	}
//	printf("%s\n", des);
//
//	return 0;
//}

// 编写代码实现，模拟用户登录情景，并且只能登录三次。
// 只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序。
//int main()
//{
//	char password[] = "123456";
//	char input[20] = { 0 };
//
//	int i = 0;
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", input);
//
//		if (strcmp(input, password) == 0) // strcmp()比较两个字符串是否相同，相同则返回0，不相同返回其他值
//		{
//			flag = 1;
//			printf("密码正确！");
//			break;
//		}
//		else
//		{
//			printf("密码错误！");
//		}
//	}
//	if (0 == flag)
//	{
//		printf("三次机会结束,手机被锁定\n");
//	}
//	return 0;
//}

// 猜数字游戏
//void menu()
//{
//	printf("********************\n");
//	printf("*****  1.play  *****\n");
//	printf("*****  0.exit  *****\n");
//	printf("********************\n");
//}
//
//void game()
//{
//	// 1.生成随机数
//	int ret = rand() % 100 + 1;
//	// rand()包含在stdlib.h中，生成一个0~32767范围的随机数
//	// 2.猜数字
//	printf("请猜数字:>");
//	int guess = 0;
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
// 
// #include <time.h>
//int main()
//{
//	int input = 0;
//
//	// 设置随机种子
//	srand((unsigned int)time(NULL));
//	// time()包含在time.h中，参数是一个指针，返回时间戳
//	// srand()包含在stdlib.h中，要在rand()之前使用，设置随机数生成种子，参数是unsigned int
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("选择错误！\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

// 4. goto语句
// C语言中提供了可以随意滥用的goto语句和标记跳转的标号。
// 直接跳转到标记的标号

// 理论上goto语句是没有必要的
// 某些场合下goto语句用得着 - 终止程序在某些深度嵌套的结构的处理过程。
// 例如：一次跳出两层或多层循环，break是做不到的，它只能从最内层循环退出上一层的循环。

// 一个关机程序
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在一分钟内关机，输入“我是猪”取消关机\n");
//	scanf("%s", arr1);
//	if (strcmp(arr1, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("取消关机");
//	}
//	else
//	{
//		printf("输入错误，请重新输入\n");
//		goto again;
//	}
//	return 0;
//}

// goto语句不常用
// 主要的使用场景：挑出二层以上的深层次循环

// 用循环代替goto语句
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//	char arr1[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("电脑将在一分钟内关机，输入“我是猪”取消关机\n");
//		scanf("%s", arr1);
//		if (strcmp(arr1, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			printf("取消关机");
//			break;
//		}
//		else
//		{
//			printf("输入错误");
//		}
//	}
//	
//	return 0;
//}
