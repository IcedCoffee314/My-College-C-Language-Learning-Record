//生成一个1~100的随机数让玩家猜
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int magic;
    int guess;
    int counter = 0;
    srand(time(NULL));             //为函数rand()设置随机数种子
    magic = rand() % 100 + 1;
    do{
        printf("Please guess a magic number:");
        scanf("%d", &guess);
        counter++;
        if (guess > magic)
        {
            printf("Wrong! Too high!\n");
        }
        else if (guess < magic)
        {
            printf("Wrong! Too low!\n");
        }
        else
        {
            printf("Right!\n");
            printf("The number is:%d\n", magic);
        }
    } while (guess != magic);
    printf("counter = %d \n", counter);
    return 0;
}
