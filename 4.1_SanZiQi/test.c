#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("**********************\n");
	printf("******   1.play  *****\n");
	printf("******   0.exit  *****\n");
	printf("**********************\n");
}

void game()
{
	//数据的存储需要一个3*3的二维数组
	char board[ROW][COL] = {0};
	char ret = 0;
	init_board(board, ROW, COL);
	display_board(board, ROW, COL);
	//玩游戏
	while (1)
	{
		player_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
		
		computer_move(board, ROW, COL);
		display_board(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'Q')
	{
		printf("平局\n");
	}
	display_board(board, ROW, COL);

}

//玩家赢 - '*'
//电脑赢 - '#'
//平局了 - 'Q'
//游戏继续 - 'C'

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>\n");
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
			printf("选择错误，重新选择:>\n");
			break;
		}
	} while (input);
	return 0;
}







