#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//1.�ṹ�������
//ѧ��
//����+����+�Ա�+���
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int hight;
//}s1,s2,s3;//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s4;//�ֲ�����
//	return 0;
//}

//struct Point
//{
//	int x;
//	int y;
//};
//struct S
//{
//	char c;
//	struct Point p;
//	double d;
//	char str[20];
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	int hight;
//};
//int main()
//{
//	struct S ss = { 'x',{100,200},3.14,"hehe" };
//  struct S ss= { .d=3.14,.c='x',.p.x=100 };
//	printf("%c %d %d %lf %s\n", ss.c, ss.p.x, ss.p.y, ss.d, ss.str);
//
//	struct Point p = { 10,20 };
//	struct Stu s = { "zhangsan",20,"��",180 };
//	printf("x=%d y=%d\n", p.x, p.y);
//	printf("%s %d %s %d\n", s.name, s.age, s.sex, s.hight);
//	return 0;
//}



//2.�ṹ���Ա�ķ���
//struct S
//{
//	char name[20];
//	int age;
//};
//int main()
//{
//	struct S s = { .age = 20,.name = "zhangsan" };
//	printf("%s %d\n", s.name, s.age);
//	s.age = 30;
//	//s.name = "zhangsanfeng";//err
//	strcpy(s.name, "zhangsanfeng");
//	return 0;
//}



//3.�ṹ�崫��
//struct S
//{
//	int data[1000];
//	char buf[100];
//};
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%s\n", ss.buf);
//}
//void print2(struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%s\n", ps->buf);
//}
//int main()
//{
//	struct S s = { {1,2,3},"hehe" };
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}

//�������ε�ʱ�򣬲�������Ҫѹջ�ġ�
//�������һ���ṹ������ʱ�򣬽ṹ����󣬲���ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�����ܵ��½���

//�ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��