#define _CRT_SECURE_NO_WARNINGS 1

// C���Եľ��ֿ������
// ��֧���(�ж����)��if, switch
// ѭ����䣺while, for, do...while,
// ת����䣺break, continue, return, goto

// ��֧���
// 1.if
//int main()
//{
	//1. if
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����\n");
	}*/

	// 2. if esle
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
	{
		printf("δ����\n");
	}
	else
	{
		printf("����\n");
	}*/
	
	// if elseif else
	/*int age = 0;
	scanf("%d", &age);
	if (age < 18)
		printf("δ����\n");
	else if (age >= 18 && age < 30)
		printf("����\n");
	else if (age >= 30 && age < 50)
		printf("����\n");
	else
		printf("����\n");*/

	// ����elseĬ�Ϻ��������ifƥ��
	//int a = 0;
	//int b = 2;
	//if (1 == a)  // �����ͳ����Ƚϣ�����Ҫд�����
	//	if (2 == b)
	//		printf("hehe\n");
	//else
	//	printf("haha\n");

	// ��C���Ե��У�0��ʾ�٣���0��ʾ��

	// �ж�һ�����Ƿ�Ϊ����
	/*int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("����\n");*/

	// ���1~100��Χ�ڵ�����
	/*int a = 1;
	while(a <= 100)
	{
		if(a % 2 ==1)
			printf("%d ", a);
		a++;
	}*/

	//return 0;
//}


// 2. switch���
// ��ʽ��switch(���α��ʽ�� case(���γ������ʽ) default break; 
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 1:
//		printf("��һ\n");
//		break;
//	case 2:
//		printf("�ܶ�\n");
//		break;
//	case 3:
//		printf("����\n");
//		break;
//	case 4:
//		printf("����\n");
//		break;
//	case 5:
//		printf("����\n");
//		break;
//	case 6:
//		printf("����\n");
//		break;
//	case 7:
//		printf("����\n");
//		break; 
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}

// break������ڻ��ֲ�ͬ�ķ�֧����������һֱִ����ȥ��
// default����ʾĬ��ִ�У����ÿһ��case����ƥ�䣬��ִ��default�Ӿ䡣
// ÿһ��switch����ж���һ��default�Ӿ䣬�����һ��break��


// ѭ�����
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

// 2. break��continue
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
// break��ֹ���������ѭ����ֱ������ѭ����
// continue��ֹ����ѭ����ֱ����ת��while��䣬�ٴ��жϡ�

// getchar()��ȡһ���ַ������ص��Ƕ�ȡ�����ַ���ASCII��ֵ����ȡʧ�ܷ��ص���EOF-->-1, ASCII 1~127
// putchar()���һ���ַ�

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

// ����������������
//int main()
//{
//	printf("����������:>");
//	char passsword[20] = {0};
//	scanf("%s", passsword);
//	// ��������
//	while(getchar() != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������:>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��!\n");
//	}
//
//	return 0;
//}

// scanf()����Ĭ�����뵽�ո�
//#include <stdio.h>
//
//int main()
//{
//	char password[20] = { 0 };
//	//scanf("%s", password); // �����ո�ʱֹͣ����
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
//			continue; // ֻ�����0~9
//		putchar(ch);
//	}
//	return 0;
//}

// 2. for(��ʼ��; �ж�; ����)
// ��ӡ1~10
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


// for �� while �Աȣ�
// whileѭ�����У���ʼ�����жϡ��������������ú�Զ�������޸Ĳ������кͷ���
// forѭ���ķ����ã�ʹ�õ�Ƶ��Ҳ����

// break �� continue:��whileѭ����һ��

// for����ѭ�����Ʊ���
// 1. ��������forѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ����
// 2. for ѭ���Ŀ��Ʊ�����ȡֵ�������á�ǰ�պ󿪡�����

// 3. do...while()
// ѭ������ִ��һ��
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

// breakʹ�ã�while for do...while switch
// continueʹ�ã�while for do

// ����n�Ľ׳�
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
//	printf("n�Ľ׳���:> %d", ret);
//	return 0;
//}

// ����1��+2��+3!+...+10!
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
//		// ����ÿ�����Ľ׳�
//		int ret = 1; // ÿ�μ���׳˶�Ҫ��ret����Ϊ 1.
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		// �׳����
//		sum += ret;
//		
//	}
//	printf("%d ", sum);
//	return 0;
//}

// �����Ż���
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		ret *= n; // n�Ľ׳˲���Ҫÿ�ζ���1��ʼ���㣬ֱ�Ӽ̳�n-1�Ľ׳�
//		sum += ret;
//	}
//	printf("%d ", sum);
//	return 0;
//}

// ��һ�������������ղ��Ҿ����ĳ������
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
//			printf("�ҵ��ˣ��±���:>%d", i);
//			break;
//		}
//	}
//	if (0 == flag)
//	{
//		printf("û�ҵ���");
//	}
//	return 0;
//}

// �����Ż������ֲ��� ---> ���ֲ��ҵ�ǰ�������顾���򡿡�
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6,7,8,9,10 };
//	int  k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int flag = 0;
//	int left = 0;
//	int right = sz - 1; // �±�����鳤��-1
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2; // ���ܴ���left+right�������ͷ�Χ�����
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
//			printf("�ҵ��ˣ��±���:>%d", mid);
//			break;
//		}
//	}
//	if (0 == flag)
//	{
//		printf("û�ҵ�\n");
//	}
//	return 0;
//}

// ��д���룬��ʾ����ַ��������ƶ������м��ۡ�
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
//		Sleep(1000); // ��ͣһ��
//		system("cls"); // �����Ļ
//	}
//	printf("%s\n", des);
//
//	return 0;
//}

// ʹ��forѭ��
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

// ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�
// ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
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
//		printf("���������룺");
//		scanf("%s", input);
//
//		if (strcmp(input, password) == 0) // strcmp()�Ƚ������ַ����Ƿ���ͬ����ͬ�򷵻�0������ͬ��������ֵ
//		{
//			flag = 1;
//			printf("������ȷ��");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (0 == flag)
//	{
//		printf("���λ������,�ֻ�������\n");
//	}
//	return 0;
//}

// ��������Ϸ
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
	// 1.���������
	int ret = rand() % 100 + 1;
	// rand()������stdlib.h�У�����һ��0~32767��Χ�������
	// 2.������
	printf("�������:>");
	int guess = 0;
	while (1)
	{
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int input = 0;

	// �����������
	srand((unsigned int)time(NULL));
	// time()������time.h�У�������һ��ָ�룬����ʱ���
	// srand()������stdlib.h�У�Ҫ��rand()֮ǰʹ�ã�����������������ӣ�������unsigned int

	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}
