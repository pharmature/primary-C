#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

//��̬�ڴ����

//1. Ϊʲô��Ҫ��̬�ڴ����
//֮ǰ���ڴ濪�ٷ�ʽ - ����
//���ٵĿռ��С�ǹ̶���
//������������ʱ�򣬱���ָ������ĳ��ȣ�������Ҫ���ڴ��ڱ���ʱ����


//2. ��̬�ڴ溯��
// 
//2.1 malloc
//void* malloc(size_t size)
//1. ������ٳɹ����򷵻�һ��ָ�򿪱ٺõĿռ��ָ�롣
//2. �������ʧ�ܣ��򷵻�һ�� NULL ָ�룬���malloc�ķ���ֵһ��Ҫ�����
//3. ����ֵ�������� void*,���� malloc ��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ�������
//4. �������sizeΪ0��malloc����Ϊ�Ǳ�׼δ����ģ�ȡ���ڱ�����

//2.2 free
//void free(void* ptr)
//�ͷŶ�̬���ٵ��ڴ�
//1. �������ptrָ��Ŀռ䲻�Ƕ�̬���ٵģ���ôfree��������Ϊ��δ�����
//2. �������ptr��NULLָ�룬����ʲô������

int main()
{
	//����
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}

	// ʹ��


	//�ͷ�
	free(p);
	p = NULL;
	return 0;
}