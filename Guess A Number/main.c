#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int magic, guess, counter = 0;
    srand(time(NULL));
    magic = rand() % 100 + 1;
    do{
        printf("Please guess a magic number:");
        scanf("%d", &guess);
        counter++;
        if (guess > magic)
            printf("Wrong! Too high!\n");
        else if (guess < magic)
            printf("Wrong! Too low!\n");
        else
            printf("Right!\nThe number is:%d\n", magic);
    } while (guess != magic);
    printf("counter = %d \n", counter);
    return 0;
}
