//test.c游戏测试逻辑
#include "game.h"
//菜单
void menu(void)
{
    printf("***********************\n");
    printf("***** 1. play *****\n");
    printf("***** 0. exit *****\n");
    printf("***********************\n");
}
//扫雷游戏
//函数功能：集合另一文件中的小模块，创建棋盘，初始化，打印，布置，并排查雷
void game(void)
{
    char mine[ROWS][COLS];//存放布置好的雷
    char show[ROWS][COLS];//存放排查出的雷的信息
    //初始化棋盘
    //1. mine数组最开始是全'0'
    //2. show数组最开始是全'*'
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //打印棋盘
    //DisplayBoard(mine, ROW, COL);         //雷的棋盘，现在全是0
    DisplayBoard(show, ROW, COL);
    //1. 布置雷
    SetMine(mine, ROW, COL);                //雷的棋盘，1的地方就是雷
    //DisplayBoard(mine, ROW, COL);
    //2. 排查雷
    FindMine(mine, show, ROW, COL);
}
//主函数
int main(void)
{
    int input = 0;
    srand(time(NULL));
    do{
        menu();
        printf("请选择:>");
        scanf("%d", &input);
        switch (input)
        {
            case 1:
                printf("\n");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择\n");
                break;
        }
    } while (input);
    return 0;
}
