//[C语言][第八章]根据姓名查找记录
//这是一个输入姓名查找某学生信息的程序，请补充完整

//当不加双引号输入学号时，是一个数字，应该用长整型存储
//#include <stdio.h>
//#include <string.h>
//#define N 8
//struct DATA
//{
//    long long num;   //学号用长整型存储
//    char name[10];
//    int a1;
//    int a2;
//};
//struct DATA *func(struct DATA *p, int n, char name[])
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if(strcmp(p->name ,name)==0)
//        {
//            return p;
//        }
//        else
//            p++;
//    }
//    return NULL;
//}
//void output(struct DATA *p)
//{
//    if(p==NULL)
//    {
//        printf("Not find!");
//    }
//    else
//    {
//        printf("%lld,%s,%d,%d", p->num, p->name, p->a1, p->a2);
//    }
//}
//int main()
//{
//    struct DATA data[N] =
//    {
//        {2023141450008, "zhao", 81, 93},  //学号数字对应long long类型
//        {2023141450007, "qian", 83, 83},
//        {2023141450006, "sun", 81, 74},
//        {2023141450005, "li", 81, 74},
//        {2023141450004, "zhou", 98, 87},
//        {2023141450003, "wu", 82, 70},
//        {2023141450002, "zheng", 73, 82},
//        {2023141450001, "wang", 95, 92}
//    };
//    char name[10];
//    scanf("%s", name);
//    struct DATA *p = func(data, N, name);
//    output(p);
//    return 0;
//}

//当加双引号输入学号时，才是一个字符串，用字符数组存储
#include <stdio.h>
#include <string.h>
#define N 8
struct DATA
{
    char num[20];    // 学号用字符串存储
    char name[10];
    int a1;
    int a2;
};
struct DATA *func(struct DATA *p, int n, char name[])
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(strcmp(p->name, name) == 0)
        {
            return p;
        }
        p++;
    }
    return NULL;
}
void output(struct DATA *p)
{
    if(p == NULL)
    {
        printf("Not find!");
    } else
    {
        printf("%s,%s,%d,%d", p->num, p->name, p->a1, p->a2);
    }
}
int main()
{
    struct DATA data[N] =
    {
        {"2023141450008", "zhao", 81, 93},   //学号字符串对应char类型数组
        {"2023141450007", "qian", 83, 83},
        {"2023141450006", "sun", 81, 74},
        {"2023141450005", "li", 81, 74},
        {"2023141450004", "zhou", 98, 87},
        {"2023141450003", "wu", 82, 70},
        {"2023141450002", "zheng", 73, 82},
        {"2023141450001", "wang", 95, 92}
    };
    char name[10];
    scanf("%s", name);
    struct DATA *p = func(data, N, name);
    output(p);
    return 0;
}
