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
	// mine数组存放雷的数据
	// show数组存放给玩家的界面
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	// 1. 上下、左右各需要有一行边界，方便计算周围8个位置的雷数
	// 2. 两个数组一样，方便后续mine排查雷之后操作show

	// 初始化棋盘
	init_board(mine, ROWS, COLS, '0');
	init_board(show, ROWS, COLS, '*');

	// 显示棋盘 - 中间的棋盘，不包括预留的边界
	display_board(show, ROW, COL);
	//display_board(mine, ROW, COL);

	// 布置雷
	set_mine(mine, ROW, COL);
	display_board(mine, ROW, COL);

	// 排查雷
	find_mine(mine, show, ROW, COL);

}


int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("推出游戏\n");
			break;
		default:
			printf("选项错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}