#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//1.��֧��� 

//1.1 if���

//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
//		printf("����\n");
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
//		printf("haha\n");//if��else�ͽ����
//	return 0;
//}

//1.2 switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//switch�ı��ʽ���������ͱ��ʽ
//	{
//	case 1://case����������ͳ������ʽ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default://Ĭ��
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}


//2.ѭ�����

//2.1 while
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//��������ѭ����ߵĴ��룬ֱ��ȥ�жϲ����ж�
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();//�����ַ���ASCII��ֵ
//	putchar(ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//��������
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	printf("����������:>");
//	scanf("%s", password);
//
//	//���� \n
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ������(Y/N):");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
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

//��ϰ
//1.n�Ľ׳�
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

//2.���� 1!+2!+3!+......+n!
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

//3.�����������в���ĳ������n
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//4.��д���룬��ʾ����ַ��������ƶ������м���
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
//		Sleep(1000);//windows��sleep����������λ�Ǻ���
//		system("cls");
//		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
//c���������ַ�����- �� ""
//c���������ַ���������- û��
//string - c++
//int main()
//{
//	int i = 0;
//	char password[] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�ж�������ȷ��
//		if (strcmp(password, "bitbit") == 0)//�������롰bitbit��
//			//strcmp�ķ���ֵ
//			//>0
//			//<0
//			//==0
//		{
//			printf("������ȷ����¼�ɹ���\n");
//			break;
//		}
//		else
//		{
//			printf("�������!\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������˳�����\n");
//	}
//	return 0;
//}



//3.��������Ϸʵ��
//�����������һ��1~100֮�������
//������
//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//	printf("************************\n");
//	printf("******* 1.play *********\n");
//	printf("******* 0.exit *********\n");
//	printf("************************\n");
//}
////rand�����������������
////����һ��0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.���������
//	int ret = rand() % 100 + 1;//0~99 -> 1~100
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//
//	//����һ�����������������������ֻ��Ҫһ������
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("������ѡ��\n");
//			break;
//		}
//
//	} while (input);
//	return 0;
//}




//4.goto��� - �ڱ������ڲ�������ת
//int main()
//{
//flag:
//	printf("hehe\n");
//	goto flag;//��ѭ��
//
//	return 0;
//}

//дһ���ػ�����ֻҪ��������������������1�����ڹػ���������룺��������ȡ���ػ�
//shutdown -s -t 60
//#include <stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//		printf("�ػ�ȡ��\n");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}






