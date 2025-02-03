#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  2.exit  ******\n");
	printf("**********************\n");
}

void game()
{
	// mine�������׵�����
	// show�����Ÿ���ҵĽ���
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	// 1. ���¡����Ҹ���Ҫ��һ�б߽磬���������Χ8��λ�õ�����
	// 2. ��������һ�����������mine�Ų���֮�����show

	// ��ʼ������
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	// ��ʾ���� - �м�����̣�������Ԥ���ı߽�
	display_board(show, ROW, COL);
	//display_board(mine, ROW, COL);

	// ������
	set_mine(mine, ROW, COL);
	display_board(mine, ROW, COL);

	// �Ų���
	find_mine(mine, show, ROW, COL);

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("�Ƴ���Ϸ\n");
			break;
		default:
			printf("ѡ���������������\n");
			break;
		}
	} while (input);
	return 0;
}