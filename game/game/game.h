#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3 //ROW是行的意思
#define COL 3 // COL是列的意思
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//声明
void Initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);

//告诉我们四种游戏的状态
//玩家赢了 y
//电脑赢了 d
//平局     p
//继续     j

char iswin(char board[ROW][COL], int row, int col);