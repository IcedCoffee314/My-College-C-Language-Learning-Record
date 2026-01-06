#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
//定义结构体表示卡牌的花色和牌面
struct CARD
{
    char suit[10];
    char face[10];
};
//填充卡牌
//函数功能：将结构体数组wCARD中存储的52张牌，花色按黑桃，红桃，草花，方块的顺序
//         （存于指针数组wSuit中）排列，面值按A~K顺序（存于指针数组wFace中）排列
void FillCard(struct CARD wCard[], char *wFace[], char *wSuit[])
{
    int i;
    for(i=0;i<52;i++)
    {
        strcpy(wCard[i].suit, wSuit[i/13]);
        strcpy(wCard[i].face, wFace[i%13]);
    }
}
//模拟洗牌
//函数功能：模拟洗牌过程，将结构体指针wCard指向的52张牌的顺序打乱，循环52次每次
//          产生一个0~51的随机数，将当前的一张牌与所产生的随机数的那张牌进行交换
void Shuffle(struct CARD *wCard)
{
    int i, j;
    struct CARD temp;
    for(i=0;i<52;i++)
    {
        j = rand()%52;
        temp = wCard[i];
        wCard[i] = wCard[j];
        wCard[j] = temp;
    }
}
//模拟发牌
//函数功能：输出结构体指针wCard指向的结构体数组中存储的发牌结果
void Deal(struct CARD *wCard)
{
    int i;
    for(i=0;i<52;i++)
    {
        printf("%10s%10s\n", wCard[i].suit, wCard[i].face);
    }
}
//主函数
int main(void)
{
    char *suit[] = {"Spades", "Hearts", "Clubs", "Diamonds"};
    char *face[] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    struct CARD card[52];
    srand(time(NULL));
    FillCard(card, face, suit);
    Shuffle(card);
    Deal(card);
    return 0;
}
