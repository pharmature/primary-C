#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("*****************************\n");
	printf("****    1.ADD   2.DEL    ****\n");
	printf("****    3.SRC   4.MOD    ****\n");
	printf("****    5.SHOW  6.SORT   ****\n");
	printf("****    0.EXIT           ****\n");
	printf("*****************************\n");

}

enum Option
{
	EXIT,
	ADD,
	DEL,
	SRC,
	MOD,
	SHOW,
	SORT
};


int main()
{
	int input = 0;
	Contact con;
	//初始化
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SRC:
			SearchContact(&con);
			break;
		case MOD:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}