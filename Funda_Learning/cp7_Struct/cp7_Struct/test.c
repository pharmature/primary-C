#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 1. �ṹ�������

// 1.1 ���壺һЩֵ�ļ��ϣ���Щֵ��Ϊ��Ա������ÿ����Ա�����ǲ�ͬ���͵ı���

// 1.2 �ṹ�������

//struct Book
//{
//	char name[20];
//	int price;
//}b1, b2, b3; // ����ֱ�Ӵ�������ȫ�ֱ���

// ����ʹ�� typedef

//typedef struct Book
//{
//	char name[20];
//	int price;
//}Book;
//
//int main()
//{
//	struct Book b4;
//	struct Book b5; // �����ֲ�����
//
//	Book b4;
//	Book b5; // typedef�ض���֮�󣬴�����������
//	return 0;
//}


// 1.3 ��Ա����������
// �����Ǳ��������顢ָ�룬�����������ṹ��

// 1.4 �ṹ��ĳ�ʼ��

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10,{4,5},NULL }; // �ṹ��Ƕ�׳�ʼ��
//
//int main()
//{
//	struct Stu s1 = { "zhangsan", 20 };
//
//	struct Node n2 = { 20,{5,6}, NULL };  // Ƕ�׳�ʼ��
//	return 0;
//}


// 2. �ṹ���Ա�ķ���
// �ṹ�����.��Ա����
// �ṹ��ָ��->��Ա����

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20 };
//	printf("%s %d\n", s.name, s.age);
//
//	struct Stu* ps = &s;
//	printf("%s %d\n", ps->name, ps->age);
//
//	return 0;
//}


// 3. �ṹ�崫��
// ���Դ������� - ��ֵ����
// Ҳ���Դ������ĵ�ַ - ��ַ����

struct S
{
	int data[100];
	int num;
};

void print1(struct S s)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", s.data[i]);
	}
	printf("\n%d\n", s.num);
}

void print2(struct S* ps)
{
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", ps->data[i]);
	}
	printf("\n%d\n", ps->num);
}

int main()
{
	struct S s = { {1,2,3,4},100 };

	print1(s);
	print2(&s);
	
	return 0;
}

// ��ѡ��ַ����
// �������ε�ʱ�򣬲�������Ҫѹջ��
// ����һ�����ṹ����󣬽ṹ����󣬲���ѹջ��ϵͳ�����Ƚϴ󣬻ᵼ�������½� - �����Ż�







