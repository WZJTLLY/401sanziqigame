#define _CRT_SECURE_NO_WARNINGS 1
#define ROW 3 //ROW���е���˼
#define COL 3 // COL���е���˼
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//����
void Initboard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void playermove(char board[ROW][COL], int row, int col);
void computermove(char board[ROW][COL], int row, int col);

//��������������Ϸ��״̬
//���Ӯ�� y
//����Ӯ�� d
//ƽ��     p
//����     j

char iswin(char board[ROW][COL], int row, int col);