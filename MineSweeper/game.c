//game.c游戏函数的实现
#include "game.h"
//初始化棋盘
//函数功能：用set将棋盘board全部填满
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
    int i, j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            board[i][j] = set;
        }
    }
}
//函数功能：打印扫雷游戏的棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
    int i, j;
    printf("--------扫雷游戏-------\n");
    for (i = 0; i <= col; i++)
    {
        printf("%d ", i);     //打印列数，从第1列到第col+1列
    }
    printf("\n");
    for (i = 1; i <= row; i++)
    {
        printf("%d ", i);     //打印行数，从第2行到第row+1行
        for (j = 1; j <= col; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
//函数功能：布置雷
void SetMine(char board[ROWS][COLS], int row, int col)
{
    //布置10个雷
    //生成随机的坐标，布置雷
    int count = EASY_COUNT;
    while (count)
    {
        int x = rand() % row + 1;       //rand()%row+1在1~row范围
        int y = rand() % col + 1;       //rand()%col+1在1~col范围,因为实际棋盘是ROWS=ROW+2，最外圈不放雷，所以x,y在1~row
        if (board[x][y] == '0')
        {
            board[x][y] = '1';
            count--;
        }
    }
}
//函数功能：统计（x，y）周围雷数
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
    return
    (mine[x+1][y+1]+mine[x][y+1]+mine[x-1][y+1]+mine[x+1][y]+mine[x-1][y]+mine[x+1][y-1]+mine[x][y-1]+mine[x-1][y-1]-8*'0');
}
//函数功能：扫雷过程
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
    int x = 0;
    int y = 0;
    int win = 0;            //用win来计数已经扫出的格子
    while (win < row * col - EASY_COUNT)
    {
        printf("请输入要排查的坐标:>");
        scanf("%d %d", &x, &y);
        printf("\n");
        if (x >= 1 && x <= row && y >= 1 && y <= col)
        {
            if (mine[x][y] == '1')          //挖到雷了
            {
                printf("很遗憾，你被炸死了\n");
                DisplayBoard(mine, ROW, COL);       //打印雷的棋盘
                printf("\n");
                break;
            }
            else
            {
                //该位置不是雷，就统计这个坐标周围有几个雷
                int count = GetMineCount(mine, x, y);
                show[x][y] = count + '0';
                DisplayBoard(show, ROW, COL);
                win++;
            }
        }
        else
        {
            printf("坐标非法，重新输入\n");
        }
    }
    if (win == row * col - EASY_COUNT)
    {
        printf("恭喜你，排雷成功\n");
        DisplayBoard(mine, ROW, COL);
        printf("\n");
    }
}
