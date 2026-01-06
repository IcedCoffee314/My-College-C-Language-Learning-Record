//任意给定某年某月某日，打印出他是这一年的第几天
//已知某一年的第几天，计算他是这一年的几月几日
#include <stdio.h>
#include <stdlib.h>
//定义静态全局整形数组，存放平年及闰年每月天数
static int dayTab[2][13] = {{0,31,28,31,30,31,30,31,31,30,31,30,31},
                             {0,31,29,31,30,31,30,31,31,30,31,30,31}};
//这一年的第几天
//函数功能：对给定的年year、月month、日day,计算并返回它是这一年的第几天
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
//这一年的几月几日
//函数功能：对给定的year年的第yearDay天，计算它是这一年地第几月第几日
//          指针变量pMonth，指向存储这一年第几月的整型变量
//          指针变量pDay，指向存储第几日的整型变量
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
//菜单
//函数功能：显示一个固定式菜单
void Menu(void)
{
    printf("1. year/month/day -> yearDay\n");
    printf("2. yearDay -> year/month/day\n");
    printf("3. Exit\n");
    printf("Please enter your choice:");
}
//主函数
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
