#pragma once

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define ROW 3
#define COL 3
// 为了棋盘的灵活性

void init_board(char board[ROW][COL],int row, int col);

void display_board(char board[ROW][COL], int row, int col);

void player_move(char board[ROW][COL], int row, int col);

void computer_move(char board[ROW][COL], int row, int col);

char is_win(char board[ROW][COL], int row, int col);