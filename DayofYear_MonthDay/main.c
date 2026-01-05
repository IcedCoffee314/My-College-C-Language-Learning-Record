//任意给定某年某月某日，打印出他是这一年的第几天
//已知某一年的第几天，计算他是这一年的几月几日
#include <stdio.h>
#include <stdlib.h>

static int dayTab[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},
                             {0,31,29,31,30,31,30,31,31,30,31,30,31}};

int DayofYear(int year, int month, int day)
{
    int i, leap;
    leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    for(i = 1; i < month; i++)
    {
        day = day + dayTab[leap][i];
    }
    return day;
}

void MonthDay(int year, int yearDay, int *pMonth, int *pDay)
{
    int i, leap;
    leap = ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
    for(i = 1; yearDay > dayTab[leap][i]; i++)
    {
        yearDay = yearDay - dayTab[leap][i];
    }
    *pMonth = i;
    *pDay = yearDay;
}

void Menu(void)
{
    printf("1. year/month/day -> yearDay\n");
    printf("2. yearDay -> year/month/day\n");
    printf("3. Exit\n");
    printf("Please enter your choice:");
}

int main(void)
{
    int year, month, day, yearDay, choice;
    Menu();
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:     printf("Please enter year, month, day: ");
                    scanf("%d,%d,%d", &year, &month, &day);
                    yearDay = DayofYear(year, month, day);
                    printf("yearDay = %d\n", yearDay);
                    break;
        case 2:     printf("Please enter year, yearDay: ");
                    scanf("%d,%d", &year, &yearDay);
                    MonthDay(year, yearDay, &month, &day);
                    printf("month = %d, day = %d\n", month, day);
                    break;
        case 3:     exit(0);
        default:    printf("Input error!");
    }
    return 0;
}
