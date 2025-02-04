#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("******** 扫雷 ********\n");
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void set_mine(char mine[ROWS][COLS], int row, int col)
{
	int count = MINE_COUNT;
	
	while (count)
	{
		// 每次循环需要重新生成一个随机数，所以放在循环里面
		int x = rand() % 9 + 1; // 范围1~9
		int y = rand() % 9 + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int get_mine_number(char mine[ROWS][COLS], int x, int y)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
			{
				count++;
			}
		}
	}
	return count;
	/*return mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';*/
}

void explosion_board(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col, int x, int y,int* pw)
{
	int num = get_mine_number(mine, x, y);
	if (num == 0)
	{
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			(*pw)++;
			show[x][y] = ' ';
			int i = 0;
			int j = 0;
			for (i = x - 1; i <= i + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (i != x || j != y)
					{
						if (show[i][j] == '*')
						{
							explosion_board(mine, show, row, col, i, j, pw);
						}
					}
					
				}
			}
		}
		
	}
	else
	{
		(*pw)++;
		show[x][y] = num + '0';
	}
}

void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int* pw = &win;
	while (win<row*col - MINE_COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("你被炸死了\n");
					display_board(mine, ROW, COL);
					break;
				}
				else
				{
					explosion_board(mine, show, row, col, x, y,pw);
					display_board(show, ROW, COL);
				}
			}
			else
			{
				printf("该位置已经排雷\n");

			}
		}
		else
		{
			printf("坐标超出范围\n");
		}
	}
	if (win == row * col - MINE_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		display_board(mine, ROW, COL);
	}
}










