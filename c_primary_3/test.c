#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//�������˵Ĳ������������������ִ�е����������������Ҳ������
//������һ���������Ǹ�����ִ�еĲ��Ǹ������ĳ���
//int main()
//{
//	int a = 9 / 2;
//	printf("%d\n", a);
//
//	float b = 9 / 2;
//	printf("%f\n", b);
//
//	float c = 9.0 / 2;
//	printf("%f\n", c);
//	return 0;
//}

//sizeof ��һ�������������Ǻ���,������ռ�ڴ�ռ�Ĵ�С
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	char c = 'w';
//	int arr[10] = { 0 };
//	printf("%zu\n", sizeof a);
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof c);
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(arr));
//	printf("%zu\n", sizeof(int));
//
//	return 0;
//}

//strlen�ǿ⺯����ֻ������ַ��������ַ����ĳ��ȣ���������ַ�����\0֮ǰ���ַ�����

//ǰ��++ -- �ͺ���++ --������
//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a=%d b=%d\n", a, b);
//
//	int c = 10;
//	int d = c++;//����++����ʹ�ã���++
//	printf("c=%d d=%d", c, d);
//	return 0;
//}

//�ṹ��Ĵ�����ʹ��
struct Stu
{
	char name[20];
	int age;
	float score;
};
void Print(struct Stu* ps)
{
	//1.
	printf("%s %d %f", (*ps).name, (*ps).age, (*ps).score);
	//2.�ṹ��ָ��->�ṹ���Ա
	printf("%s %d %f", ps->name, ps->age, ps->score);
}
int main()
{
	struct Stu s = { "zhangsan",20,95.5f };
	struct Stu s2 = { "lisi",20,96.5f };
	//�ṹ�����.�ṹ���Ա
	scanf("%s %d %f", s2.name, &(s2.age), &(s2.score));
	printf("%s %d %f", s.name, s.age, s.score);
	Print(&s2);
	return 0;
}












