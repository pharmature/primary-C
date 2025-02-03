#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_COUNT 40

// 初始化数组
void init_board(char board[ROWS][COLS], int rows, int cols, char set);

// 显示棋盘
void display_board(char board[ROWS][COLS], int row, int col);

// 布置雷
void set_mine(char mine[ROWS][COLS], int row, int col);

// 排查雷
void find_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
