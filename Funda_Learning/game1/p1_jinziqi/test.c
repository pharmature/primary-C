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
	// ��һ����ά����洢����
	char board[ROW][COL] = { 0 };

	// ��ʼ������
	init_board(board, ROW, COL);
	// չʾ����
	
	//system("cls");
	display_board(board, ROW, COL);

	int ret = 0;
	while (1)
	{
		// �������
		player_move(board, ROW, COL);
		// չʾ����
		display_board(board, ROW, COL);
		// �ж���Ӯ
		ret = is_win(board, ROW, COL);
		if('C' != ret )
		{
			break;
		}
	
		// ��������
		computer_move(board, ROW, COL);
		// չʾ����
		display_board(board, ROW, COL);
		// �ж���Ӯ
		ret = is_win(board, ROW, COL);
		if('C' != ret )
		{
			break;
		}
	}
	if ('*' == ret)
	{
		printf("��ϲ���ʤ\n");
	}
	else if ('#' == ret)
	{
		printf("�ܿ�ϧ������Ӯ��\n");
	}
	else if ('Q' == ret)
	{
		printf("ƽ��");
	}
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}