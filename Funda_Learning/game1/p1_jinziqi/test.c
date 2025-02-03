#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("*******    1.play   *******\n");
	printf("*******    0.exit   *******\n");
	printf("***************************\n");

}

void game()
{
	// 用一个二维数组存储棋盘
	char board[ROW][COL] = { 0 };

	// 初始化棋盘
	init_board(board, ROW, COL);
	// 展示棋盘
	
	//system("cls");
	display_board(board, ROW, COL);

	int ret = 0;
	while (1)
	{
		// 玩家下棋
		player_move(board, ROW, COL);
		// 展示棋盘
		display_board(board, ROW, COL);
		// 判断输赢
		ret = is_win(board, ROW, COL);
		if('C' != ret )
		{
			break;
		}
	
		// 电脑下棋
		computer_move(board, ROW, COL);
		// 展示棋盘
		display_board(board, ROW, COL);
		// 判断输赢
		ret = is_win(board, ROW, COL);
		if('C' != ret )
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("恭喜你获胜\n");
	}
	else if ('#' == ret)
	{
		printf("很可惜，电脑赢了\n");
	}
	else if ('Q' == ret)
	{
		printf("平局");
	}
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
			printf("退出游戏\n");
			break;
		default:
			printf("选项错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}