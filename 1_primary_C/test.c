#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//1.ʲô��C����
//һ�ż�������ԣ��˺ͼ��������������


//2.��һ��C���Գ���

//#include <stdio.h>
//main���� - ���������ǳ������ڣ�����ֻ��һ��
//int main()
//{
//	printf("hello bit \n");
//	printf("he he\n");
//	return 0;
//}
//C��������һ��Լ����
//����0��ʶ��������
//���ص��Ƿ�0����ʾ�쳣����


//3.��������
//char        �ַ���������
//short       ������
//int         ����
//long        ������
//long long   ����������
//float       �����ȸ�����
//double      ˫���ȸ�����

//#include <stdio.h>
//int main()
//{
//    printf("%d\n", sizeof(char));
//    printf("%d\n", sizeof(short));
//    printf("%d\n", sizeof(int));
//    printf("%d\n", sizeof(long));
//    printf("%d\n", sizeof(long long));
//    printf("%d\n", sizeof(float));
//    printf("%d\n", sizeof(double));
//    printf("%d\n", sizeof(long double));
//    return 0;
//}


//4.����������

//int age = 150;
//float weight = 45.5f;
//char ch = 'w';

//����������
//ֻ������ĸ��������д��Сд�������ֺ��»��ߣ� _ ����ɡ�
//���������ֿ�ͷ��
//���Ȳ��ܳ���63���ַ�
//�����������ִ�Сд��
//����������ʹ�ùؼ���

//int num = 1000;//ȫ�ֱ���
//int main()
//{
//	int num = 10;//�ֲ�����
//	//�ֲ�����
//	printf("%d", num);
//	return 0;
//}

//������ʹ��
//int main()
//{
//	int age = 10;
//	age = age + 1;
//	printf("%d", age);
//	return 0;
//}

//�����������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("%d", sum);
//	return 0;
//}

//���������������������
//int main()
//{
//	{
//		int a = 100;
//		printf("%d", a);
//	}
//	return 0;
//}

//�����ⲿ���� 
//extern int a;

//����
//int main()
//{
//	// - ���泣��
//	//30;
//	// 3.14;
//	// "abcdef";
//	// 'a';
//	
//	// - const���εĳ�����
//	//const int num = 100;
//	//num = 200;
//	//printf("%d", num);
//
//	//���� - ���һ����
//	//const int n = 10;
//	//int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
//	
//	//C99��׼֮ǰ������������Ĵ�Сʹ�ñ���ָ��
//	//int n = 10;
//	//int arr[n];//error
//	//C99��׼�У������˱䳤����ĸ���
//	//int n = 10;
//	//int arr[n];//ok
//	// VS2022��֧��C99�еı߳�����
//	
//	return 0;
//}
// - #define����ı�ʶ������

//#define MAX 1000
//int main()
//{
//	int a = MAX;
//	printf("%d", a);
//	int arr[MAX];
//
//	return 0;
//}

// - ö�ٳ���
//C����֧�����Ǵ���ö������
//enum��ö�ٵĹؼ���
//enum Sex
//{
//	//ö���������оٳ��Ŀ���ȡֵ����ö�ٳ���
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	//ö�� - һһ�о�
//	//�Ա� - �С�Ů������
//	//��ԭɫ - R��G��B
//	enum Sex s = MALE;
//	enum Sex s2 = FEMALE;
//	printf("%d %d %d", MALE, FEMALE, SECRET);
//	return 0;
//}


//5.�ַ���+ת���ַ�+ע��
//�ַ� - ������''
//�ַ��� - ˫����""
//�ַ����Ľ�����ʾ  \0 - �������鳤��ʱ���㳤��
//ע�� // /* */ ��֧��Ƕ��ע��


//6.ѡ�����
//if  switch
//int main()
//{
//	int input = 0;
//	printf("�������ѧϰ\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}


//7.ѭ�����
//for  while  do while 
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 20000)
//	{
//		printf("д����\n",line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("��offer");
//	}
//	return 0;
//}


//8.����
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}


//9.����
//���һ����ͬ���͵�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr1[10] = { 0 };//����ȫ��ʼ����������Ĭ�ϻ��ʼ��Ϊ0
//	char ch2[] = {'a','b','c'};
//	char ch3[] = { 0 };
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d",&arr[i]);
//		i++;
//	}
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}


//10.������
//���������� + - * / %
//int main()
//{
//	//  /�����ţ����˵Ĳ���������Ƕ���������ִ�е�������������
//	//������һ���������Ǹ�������ִ�еĲ��Ǹ������ĳ���
//	//int a = 7 / 2;
//	//printf("%d\n", a);
//
//	//float f = 7 / 2;
//	//printf("%f", f);
//
//	float f = 7.0 / 2;
//	printf("%f", f);
//	return 0;
//}

//int main()
//{
//	// % ����������ע���ǳ����������
//	//��������������������
//	int a = 7 % 2;
//	printf("%d", a);
//	return 0;
//}

//��λ������ >>  <<  - ������λ

//λ������ & ^ |  - ������λ

//��ֵ������ = += -= *= /= &= ^= |= >>= <<=

//��Ŀ������
//int main()
//{
//	int a = 10;
//	char ch = 'w';
//	int arr[10] = { 0 };
//
//	printf("%d\n", sizeof(a)); 
//	printf("%d\n", sizeof a);//�����������ſ���ʡ��
//	printf("%d\n", sizeof (int));//�������͵����Ų���ʡ��
//	printf("%d\n", sizeof(ch));
//	printf("%d\n", sizeof ch);
//	printf("%d\n", sizeof (char));
//	
//	printf("%d\n", sizeof (arr));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
//strlen�ǿ⺯����ֻ������ַ��������ַ����ĳ��ȣ�������ַ�����\0֮ǰ���ַ�����
//sizeof�ǲ�������������ռ�ڴ�ռ�Ĵ�С

//int main()
//{
//	int a = 10;
//	int b = ++a;//ǰ��++����++����ʹ��
//	printf("a=%d b=%d\n", a, b);//11
//
//	int c = a++;//����++����ʹ�ã���++
//	printf("a=%d c=%d\n", a, c);
//	return 0;
//}

//��ϵ������ > >= < <= != ==
//#include <string.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	//�����ַ�������ʹ��== ���ж���ȣ�ʹ��strcmp
//	if (strcmp(arr1, arr2) == 0)
//		printf("==\n");
//	else
//		printf("!=\n");
//	return 0;
//}

//�߼������� &&�߼��� ||�߼���

//����������(��Ŀ������) exp1?exp2:exp3
//int main()
//{
//	int a = 5;
//	int b = 0;
//	if (a > 5)
//		b = 3;
//	else
//		b = -3;
//
//	(a > 5) ? (b = 3) : (b = -3);
//
//	b = (a > 5 ? 3 : -3);
//
//	printf("%d", b);
//	return 0;
//}

//���ű��ʽ exp1,exp2,exp3, ...expN
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	int d = (a += 2, b = b - c + a, c = a + b);
//	//���ű��ʽ���ص㣺
//	//�����������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
//}

//�±����á��������úͽṹ��Ա
//[]       ()        . ->  



//11.�����ؼ���
//auto �Զ� - �Զ�������
//�ֲ����������Զ��������Զ����ٵģ����Ծֲ���������auto���ε�
//default - Ĭ��
//�Զ������� - enum(ö��)  struct(�ṹ��) union(������/������)
//extern(�����ⲿ����) 
//register - �Ĵ����ؼ���
//static - ��̬
//typedef - �����ض���
//volatile

//int main()
//{
//	//�����10���ڼĴ�����
//	register int a = 10;
//	return 0;
//}

//typedef unsigned int unit;
//int main()
//{
//	unsigned int num1;
//	unit num2;
//	return 0;
//}

//void test()
//{
//	//��ͨ�ľֲ������Ƿ����ڴ��ջ���ϵģ�����ֲ���Χ���������������˾ֲ���Χ��������
//	//��static���ξֲ�������ʱ�򣬾ֲ�����ʵ�ھ�̬�����ٿռ�ģ���ʱ�ľֲ�������������������������٣�
//	//�´ν�ȥ������ʹ�õ�����һ������������
//	//�ı��˴洢λ�ã���ջ��->��̬����ʹ�ñ������������ڷ����˱仯
//	static int a = 3;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//ȫ�ֱ��������ⲿ���������ԣ����ȫ�ֱ�����static���Σ��ⲿ�������Ծͱ�����ڲ��������ԣ�����Դ�ļ���û��ͨ�������ҵ��������
//static���εľֲ�����ֻ�����Լ����ڵ�.c�ļ���ʹ��

//�����Ǿ����ⲿ�������Եģ�����Դ�ļ���ʹ�ú�����ֻ��Ҫ��ȷ�������Ϳ���
//���Ǻ�����static���Σ��ⲿ�������Ծͱ�����ڲ��������ԣ����ʱ����ֻ�����Լ����ڵ�.c�ļ��ڲ�ʹ�ã��������ⲿʹ��



//12.define���峣���ͺ�

//1.���峣��
//#define MAX 1000
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	int arr[MAX] = { 0 };
//	printf("%d\n", a);
//	printf("%s\n", STR);
//	return 0;
//}

//2.�����
//#define ADD(x,y) ((x)+(y))
//#define MAX(x,y) ((x)>(y)?(x):(y))
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	int d = MAX(a, b);
//	printf("%d", d);
//	return 0;
//}



//13.ָ��
//ָ����ǵ�ַ����ַ�����ڴ浥Ԫ�ı��
//ָ����� - ���ָ��ı���

//ָ��Ĵ�С
//ָ�������������ŵ�ַ�ģ�����ָ������Ĵ�Сȡ���ڴ洢һ����ַ��Ҫ���Ŀռ�
//int main()
//{
//	//sizeof����Ľ�����޷�������
//	//��Ӧ�Ĵ�ӡ��ʽ�� - %zu
//	printf("%zu\n", sizeof(char*));
//	printf("%zu\n", sizeof(short*));
//	printf("%zu\n", sizeof(int*));
//	printf("%zu\n", sizeof(long*));
//	printf("%zu\n", sizeof(long long*));
//	printf("%zu\n", sizeof(float*));
//	printf("%zu\n", sizeof(double*));
//	return 0;
//}



//14.�ṹ��
struct Stu
{
	char name[20];
	int age;
	float score;

};
void print(struct Stu* ps)
{
	//1.
	printf("%s %d %f\n", (*ps).name, (*ps).age, (*ps).score);
	//2.�ṹ��ָ��->�ṹ���Ա
	printf("%s %d %f\n", ps->name, ps->age, ps->score);
}
int main()
{
	struct Stu s = { "zhangsan",20,95.5f };
	struct Stu s2 = { "lisi",20,96.0f };
	//�ṹ�����.�ṹ���Ա
	printf("%s %d %f\n", s.name, s.age, s.score);
	//������Ϣ
	scanf("%s %d %f", s2.name, &(s2.age), &(s2.score));
	print(&s2);
	return 0;
}
