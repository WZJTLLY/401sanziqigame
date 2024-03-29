#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("***  1.play   0.exit   ***\n");
	printf("**************************\n");
}
//游戏的整个算法实现
void game()
{
	int ret = 0;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	Initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢了
		ret=iswin(board, ROW, COL);
		if(ret!='j')
		{
			break;
		}
		//电脑下棋
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢了
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}

	}
	if (ret = '*')
	{
		printf("玩家赢了\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

}
int main()
{
	test();
	return 0;
}