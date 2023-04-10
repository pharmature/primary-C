#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//1.分支语句 

//1.1 if语句

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 0)
//		if (b == 2)
//			printf("hehe\n");
//	else
//		printf("haha\n");//if和else就近结合
//	return 0;
//}

//1.2 switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch的表达式必须是整型表达式
//	{
//	case 1://case后必须是整型常量表达式
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default://默认
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}


//2.循环语句

//2.1 while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//跳过本次循环后边的代码，直接去判断部分判断
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//返回字符的ASCII码值
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//多组输入
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码:>");
//	scanf("%s", password);
//
//	//清理 \n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认密码(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//2.2 for 
//int main()
//{
//	int i = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//
//	return 0;
//}

//2.3 do while()
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	} while (i < 11);
//	return 0;
//}

//练习
//1.n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//2.计算 1!+2!+3!+......+n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int mul = 1;
//		for (j = 1; j < i; j++)
//		{
//			mul = mul * j;
//		}
//		sum = sum + mul;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//3.在有序数组中查找某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 7;
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - right) / 2;
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
//			printf("找到了，下表是%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//4.编写代码，演示多个字符从两端移动，向中间汇聚
//#include <Windows.h>
//#include <stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		
//		Sleep(1000);//windows下sleep函数参数单位是毫秒
//		system("cls");
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.编写代码实现，模拟用户登录情景，并且只能登录三次
//只允许输入三次密码，如果密码正确则提示登录成功，如果三次均输入错误，则退出程序
//c语言中有字符串吗？- 有 ""
//c语言中有字符串类型吗？- 没有
//string - c++
//int main()
//{
//	int i = 0;
//	char password[] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//判断密码正确性
//		if (strcmp(password, "bitbit") == 0)//假设密码“bitbit”
//			//strcmp的返回值
//			//>0
//			//<0
//			//==0
//		{
//			printf("密码正确，登录成功！\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序\n");
//	}
//	return 0;
//}



//3.猜数字游戏实现
//电脑随机生成一个1~100之间的数字
//猜数字
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1.play *********\n");
//	printf("******* 0.exit *********\n");
//	printf("************************\n");
//}
////rand函数可以生成随机数
////返回一个0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.生成随机数
//	int ret = rand() % 100 + 1;//0~99 -> 1~100
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
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
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//
//	//设置一个随机数生成器，整个程序只需要一个就行
//	srand((unsigned int)time(NULL));
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
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("请重新选择\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}




//4.goto语句 - 在本函数内部进行跳转
//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;//死循环
//
//	return 0;
//}

//写一个关机程序，只要程序运行起来，电脑在1分钟内关机，如果输入：我是猪，就取消关机
//shutdown -s -t 60
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//		printf("关机取消\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}






