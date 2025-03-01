#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>

// 1. strlen() -- ���ַ�������
// size_t strlen(const char* str){}
// �ַ�����'\0'Ϊ������־��strlen�������ص�����'\0'ǰ����ֵ��ַ�������������'\0'
// ����ָ����ַ���������'\0'����
// ע�⺯���ķ���ֵ��size_t�����޷��ŵ�

// ģ��ʵ��
// 1.1 ������

//int my_strlen(const char* str) // ����ֵ������int���������
//{
//	assert(str);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

// 1.2 �ݹ� - ��������ʱ����

//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}

// 1.3 ָ�� - ָ��

//int my_strlen(const char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	/*const char* str1 = "abcdef";
//	const char* str2 = "bbb";
//	if (strlen(str2) - strlen(str1))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}*/
//	// ����� > ,strlen�⺯���ķ���ֵ������ size_t
//
//
//	char arr[] = "hello world";
//	printf("%zd\n", strlen(arr));
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}


// 2. strcpy() -- �ַ�������
// char* strcpy(char* dest, const char* src)
// Դ�ַ���������'\0'����
// �ὫԴ�ַ����е�'\0'������Ŀ��ռ�
// Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ���
// Ŀ��ռ����ɱ�

// ģ��ʵ��
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[20] = { 0 };
//
//	/*strcpy(arr2, arr1); 
//	printf("%s\n", arr2);*/
//
//	//printf("%s\n", strcpy(arr2, arr1));
//
//	printf("%s\n", my_strcpy(arr2, arr1));
//
//	return 0;
//}


// 3. strcat() -- �ַ���׷��
// Դ�ַ���������'\0'����
// Ŀ��ռ�����㹻����������Դ�ַ���������
// Ŀ��ռ��������޸�

// ģ��ʵ��

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello "; // Ŀ��ռ�����㹻��
//	char arr2[] = "world";
//
//	//strcat(arr1, arr2);
//	/*my_strcat(arr1, arr2);
//	printf("%s\n", arr1);*/
//
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	// �ַ����Լ����Լ�׷�� -- ��ѭ��
//	printf("%s\n", my_strcat(arr1, arr1));
//	
//	return 0;
//}


// 4. strcmp() - �ַ����Ƚ�
// int strcmp(const char* str1, const char* str2)
// str1 ���� str2�����ش���0������
// str1 ���� str2������0
// str1 С�� str2������С��0������

// ģ��ʵ��
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abb";
//	
//	//int ret = strcmp(arr1, arr2);
//	int ret = my_strcmp(arr1, arr2);
//
//	printf("%d\n", ret);
//	return 0;
//}


// ���϶��ǳ��Ȳ������Ƶ��ַ������������м������Ƴ��ȵĺ���

// strncpy(char* dest, const char* src, size_t num)
// ���� num ���ַ���Դ�ַ�����Ŀ��ռ�
// ���Դ�ַ����ĳ���С��num���򿽱���֮����Ŀ��ĺ���׷��0��ֱ��num��

// strncat(char* dest, const char* src, size_t num)
// ׷�� num ���ַ���Դ�ַ�����Ŀ��ռ�
// ���Դ�ַ����ĳ���С��num������׷��0

// strncmp(const char* str1, const char* str2, size_t num)
// �Ƚϵ���������ַ���һ��������һ���ַ�������������num���ַ�ȫ���Ƚ���


// 5. strstr() - Ѱ���ַ���
// �ڵ�һ���ַ�����Ѱ�ҵڶ����ַ�����һ�γ��ֵ�λ�ã�û���򷵻�NULL

// ģ��ʵ�� - ���������㷨
//char* my_strstr(const char* str1, const char* str2)
//{
//	char* s1 = NULL;
//	char* s2 = NULL;
//
//	while (str1)
//	{
//		s1 = (char*)str1;
//		s2 = (char*)str2;
//		while (*s1 && *s2 && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return (char*)str1;
//		str1++;
//	}
//	return NULL;
//}
//// ���и����㷨 - KMP
//
//int main()
//{
//	char arr1[] = "abbbbcdef";
//	char arr2[] = "bcd";
//
//	//char* p = strstr(arr1, arr2);
//	char* p = my_strstr(arr1, arr2);
//
//	printf("%s\n", p);
//	return 0;
//}


// 6. strtok() - �ָ��ַ���
// char* strtok(char* str, const char* sep)
// sep������һ���ַ����������������ָ������ַ��ϼ�
// ��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı��
// strtok()�����ҵ�str�е���һ����ǣ���������'\0'��β������һ��ָ�������ǵ�ָ��
// ע��strtok()������ı䱻�������ַ���������ʹ��strtok()�����еķ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸�
// strtok()�����ĵ�һ��������ΪNULL�������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ��
// strtok()�����ĵ�һ������ΪNULL����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ�����
// ����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ��

//int main()
//{
//	//char arr[] = "pharmature@foxmail.com";
//	char arr[] = "192.163.255.255";
//	char cup[30] = { 0 };
//	strcpy(cup, arr); // ��ʱ����
//
//	//char* sep = "@.";
//	char* sep = ".";
//
//	char* str = NULL;
//	for (str = strtok(cup, sep); str != NULL; str = strtok(NULL, sep))
//	{
//		printf("%s\n", str);
//	}
//
//	return 0;
//}


// 7. strerror() - ��ȡ������Ϣ
// char* strerror(int errnum)
// ���ش���������Ӧ�Ĵ�����Ϣ

//int main()
//{
//	char* p = strerror(0);
//	printf("%s\n", p);
//
//	p = strerror(1);
//	printf("%s\n", p);
//
//	p = strerror(2);
//	printf("%s\n", p);
//
//	p = strerror(3);
//	printf("%s\n", p);
//	return 0;
//}

// C���ԵĿ⺯���ڵ���ʧ�ܵ�ʱ�򣬻Ὣ����������һ���� errno �ı�����
// ��������֪�����ÿ⺯����ʱ������ʲô���󣬾Ϳ��Խ�errno�Ĵ����뷭��ɴ�����Ϣ
//#include <errno.h>
//int main()
//{
//	// ���ļ�
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		printf("�ļ���ʧ�ܣ�������Ϣ��%s\n", strerror(errno));
//		return 1;
//	}
//
//	// ��д�ļ�
//
//	// �ر��ļ�
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// perror() - ��ӡ������Ϣ
//#include <errno.h>
//int main()
//{
//	// ���ļ�
//	FILE* p = fopen("test.txt", "r");
//	if (p == NULL)
//	{
//		perror("�ļ���ʧ��"); - �Դ�ð��
//		return 1;
//	}
//
//	// ��д�ļ�
//
//	// �ر��ļ�
//	fclose(p);
//	p = NULL;
//	return 0;
//}


// 8. memcpy() - �ڴ濽��
// void* memcpy(void* dest, const void* src, size_t num);
// ��src��λ�������num���ֽڵ����ݵ�dest���ڴ�λ��
// �������������'\0'��ʱ�򲢲���ͣ����
// ʹ�� void* ��ԭ�������߲�֪�����忽������ʲô���͵�����

// ���src��dest���κε��ص������ƵĽ����δ�����

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//��arr1�е�ǰ5�����ݿ�����arr2��
//	memcpy(arr2, arr1, 20);
//	return 0;
//}

// ģ��ʵ��
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//
//	// �����ص������
//	//my_memcpy(arr1 + 2, arr1, 20); //error
//	memcpy(arr1 + 2, arr1, 20); // VS�����¿���ʹ�ã��������������½��δ֪
//
//	return 0;
//}
// C���Թ涨��memcpy()�������ص����ڴ�
// VS�����¿���ʹ��


// 9. memmove() - �ص����ڴ濽��
// void* memmove(void* dest, const void* src, size_t num);
// ��memcpy�Ĳ�����memmove���������Դ�ڴ���Ŀ���ڴ���ǿ����ص���

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[8] = { 0 };
//	memmove(arr1 + 2, arr1, 20);
//
//	return 0;
//}

// ģ��ʵ��

//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//
//	// ��ǰ -> ��
//	if (dest < src)
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	// �Ӻ� -> ǰ
//	else
//	{
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//
//	return 0;
//}

// 10. memcmp() - �ڴ�Ƚ�
//void* memcmp(const void* ptr1, const void* ptr2, size_t num);
//�Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//����ֵ��strcmp()��strncmp()������ͬ

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,3,4,6 };
//	printf("%d\n", memcmp(arr1, arr2, 17));
//	return 0;
//}

// 11. memset() - �ڴ�����
//void* memset(void* ptr, int value, size_t num)
//��ptr��ʼ����num���ֽڵ��ڴ�����Ϊvalue

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


// �ַ����ຯ��
//iscntrl - �κο����ַ�
//isspace - �հ��ַ����ո�' ',��ҳ'\f'������'\n',�س�'\r'���Ʊ��'\t'����ֱ�Ʊ��'\v'
//isdigit - ʮ��������0~9
//isxdigit - ʮ���������֣�����ʮ�������֣�Сд��ĸa~f,��д��ĸA~F
//islower - Сд��ĸa~z
//isupper - ��д��ĸA~Z
//isalpha - ��ĸa~z����A~Z
//isalnum - ��ĸ�������֣�a~z,A~Z,0~9,
//ispunct - �����ţ��κβ��������ֻ�����ĸ��ͼ���ַ�(�ɴ�ӡ)
//isgraph - �κ�ͼ���ַ�
//isprint - �κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�


// �ַ�ת��
//tolower - ת����Сд
//toupper - ת���ɴ�д

#include <ctype.h>
int main()
{
	char arr[30] = { 0 };
	gets(arr);

	int i = 0;
	while (arr[i])
	{
		if (isupper(arr[i]))
		{
			arr[i] = tolower(arr[i]);
		}
		printf("%c", arr[i]);
		i++;
	}
	return 0;
}


