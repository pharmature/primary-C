#include <stdio.h>

int main()
{
	// ��һ��C���Գ���
	printf("hello world!!");
	return 0;

	// C���Ե���������
	printf("%d\n", sizeof(char)); // �ַ�
	printf("%d\n", sizeof(short)); // ������
	printf("%d\n", sizeof(int)); // ����
	printf("%d\n", sizeof(long)); // ������
	printf("%d\n", sizeof(long long)); // ����������
	printf("%d\n", sizeof(float)); // �����ȸ�����
	printf("%d\n", sizeof(double)); // ˫���ȸ�����
	//C����û���ַ�������
}


// ����
// �ֲ����� - ȫ�ֱ���
// ���������������֡���ĸ���»��ߣ����������ֿ�ͷ�����ִ�Сд��

// ����
// �ַ�����
// const���εĳ�����
// #define����ĳ���
// enumö�ٳ���
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


// �ַ���
// ������־ʱ \0 ת���ַ��������ַ������ȵ�ʱ��\0ʱ������־�������ַ������ݡ�

// ת���ַ�
// \n - ����
// \t - �Ʊ��
// \b - �˸��
// \r - �س�
// \a - ���Խ�
// \ddd - �˽������֣����ܴ���8
// \xdd - ʮ����������