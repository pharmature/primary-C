#define _CRT_SECURE_NO_WARNINGS 1

// C语言的九种控制语句
// 分支语句(判断语句)：if, switch
// 循环语句：while, for, do...while,
// 转向语句：break, continue, return, goto

// 分支语句
// 1.if
//int main()
//{
	//1. if
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("未成年\n");
	}*/

	// 2. if esle
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
	
	// if elseif else
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

	// 悬空else默认和它最近的if匹配
	//int a = 0;
	//int b = 2;
	//if (1 == a)  // 变量和常量比较，常量要写在左边
	//	if (2 == b)
	//		printf("hehe\n");
	//else
	//	printf("haha\n");

	// 在C语言当中，0表示假，非0表示真

	// 判断一个数是否为奇数
	/*int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("奇数\n");*/

	// 输出1~100范围内的奇数
	/*int a = 1;
	while(a <= 100)
	{
		if(a % 2 ==1)
			printf("%d ", a);
		a++;
	}*/

	//return 0;
//}


// 2. switch语句
// 格式：switch(整形表达式） case(整形常量表达式) default break; 
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

// break语句用于划分不同的分支，否则代码会一直执行下去。
// default语句表示默认执行，如果每一个case都不匹配，就执行default子句。
// 每一个switch语句中都放一个default子句，后面加一个break；


// 循环语句
// 1. while()
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

// 2. break和continue
//#include <stdio.h>
//
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
// break终止后面的所有循环，直接挑出循环；
// continue终止本次循环，直接跳转到while语句，再次判断。

// getchar()读取一个字符，返回的是读取到的字符的ASCII码值，读取失败返回的是EOF-->-1, ASCII 1~127
// putchar()输出一个字符

//#include <stdio.h>

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while (ch != EOF)
//	{
//		ch = getchar();
//		putchar(ch);
//	}
//	return 0;
//}
//

// 可以用来清理缓冲区
//int main()
//{
//	printf("请输入密码:>");
//	char passsword[20] = {0};
//	scanf("%s", passsword);
//	// 清理缓冲区
//	while(getchar() != '\n')
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

//#include <stdio.h>
//int main()
//{
//	int ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue; // 只能输出0~9
//		putchar(ch);
//	}
//	return 0;
//}

// 2. for(初始化; 判断; 调整)
// 打印1~10
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


// for 和 while 对比：
// while循环当中，初始化、判断、调整三个语句离得很远，查找修改不够集中和方便
// for循环的风格更好，使用的频率也更高

// break 和 continue:和while循环中一样

// for语句的循环控制变量
// 1. 不可以在for循环体内修改循环变量，防止 for 循环失去控制
// 2. for 循环的控制变量的取值尽量采用“前闭后开”区间

// 3. do...while()
// 循环至少执行一次
//#include <stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i += 1;
//	} while (i<=10);
//	return 0;
//}

// break使用：while for do...while switch
// continue使用：while for do

// 计算n的阶乘
//#include<stdio.h>
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
#include <stdio.h>
//int main()
//{
//	int n = 0;
//
//	int i = 0;
//	
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
//#include <stdio.h>
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

// 在一个有序数组最终查找具体的某个数字
//#include <stdio.h>
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
//#include <stdio.h>
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
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
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
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
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
//#include <stdio.h>
//#include <string.h>
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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	printf("********************\n");
	printf("*****  1.play  *****\n");
	printf("*****  0.exit  *****\n");
	printf("********************\n");
}

void game()
{
	// 1.生成随机数
	int ret = rand() % 100 + 1;
	// rand()包含在stdlib.h中，生成一个0~32767范围的随机数
	// 2.猜数字
	printf("请猜数字:>");
	int guess = 0;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;

	// 设置随机种子
	srand((unsigned int)time(NULL));
	// time()包含在time.h中，参数是一个指针，返回时间戳
	// srand()包含在stdlib.h中，要在rand()之前使用，设置随机数生成种子，参数是unsigned int

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误！\n");
			break;
		}
	} while (input);
	return 0;
}
