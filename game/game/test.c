#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
	printf("**************************\n");
	printf("***  1.play   0.exit   ***\n");
	printf("**************************\n");
}
//��Ϸ�������㷨ʵ��
void game()
{
	int ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	Initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�������
		playermove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ��
		ret=iswin(board, ROW, COL);
		if(ret!='j')
		{
			break;
		}
		//��������
		computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ��
		ret = iswin(board, ROW, COL);
		if (ret != 'j')
		{
			break;
		}

	}
	if (ret = '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��");
	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
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

}
int main()
{
	test();
	return 0;
}