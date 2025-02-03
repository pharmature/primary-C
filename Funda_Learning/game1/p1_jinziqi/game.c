#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include "game.h"

void init_board(char board[ROW][COL],int row, int col)
{
	int i = 0;
	int j = 0;
	/*for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/
	memset(board, ' ', row * col * sizeof(board[0][0]));
}


void display_board(char board[ROW][COL], int row, int col)
{
	/*Sleep(1000);
	system("cls");*/
	int i = 0;
	int j = 0;
	for (i = 0; i < row;i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
		
	}
}


void player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("已有棋子，请重新落子\n");
			}
		}
		else
		{
			printf("落子出格，请重新输入:>\n");
		}
	}
	
}

void computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


// 0 继续
// 1 玩家赢
// 2 电脑赢
// 3 平局
// 不能使用代表输赢，要多两步判断过程
// 使用棋子代表输赢，可以直接当作返回值
// '*' 玩家赢
// '#' 电脑赢
// 'E' 平局
// 'C' 继续

int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		// 注意这里的棋子不能为空
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i]!=' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] !=' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1]!= ' ')
		return board[2][0];

	if (is_full(board, row, col))
		return 'E';
	
	return 'C';
}