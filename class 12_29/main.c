//编程判断输入的一串字符是否为“回文”。所谓“回文”，是指顺读和倒读都一样的字符串，如“level”和“ABCCBA”都是回文。
//#include <stdio.h>
//int main()
//{
//    int i, j=0, k=1;
//    char a[100];
//    gets(a);
//    for(i=0;a[i]!='\0';i++);
//    while(k && j<=i/2)
//    {
//        for(j=0;j<=i/2;j++)
//        {
//            if(a[j]!=a[i-1-j])
//                k=0;
//        }
//    }
//    if(k)
//        printf("\"%s\"是回文", a);
//    else
//        printf("\"%s\"不是回文", a);
//    return 0;
//}

//在一个字符串中寻找是否存在另一个字符串，如果存在，返回子串在字符串的位置，如果不存在，则返回-1；
//#include <stdio.h>
//#include <string.h>
//// 比较两个字符串是否相等，相等返回1，不等返回0
//int cmp_str(const char *s1, const char *s2)
//{
//    int i;
//    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++)
//    {
//        if(s1[i]!=s2[i])
//            return 0;
//    }
//    if(s1[i]=='\0'&&s2[i]=='\0')
//        return 1;
//    return 0;
//}
//// 思路：a字符串从0开始，去与b字符串比较，如果不等就往后移动到下一个字符，继续比较，相等就表示找到了
//int find_str(const char *a, const char *b)
//{
//    int i, j;
//    int len_a=strlen(a);
//    int len_b=strlen(b);
//    if(len_b>len_a)
//        return -1;
//    for(i=0;i<=len_a-len_b;i++)
//    {
//        int match=1;
//        for(j=0;j<len_b;j++)
//        {
//            if(a[i+j]!=b[j])
//            {
//                match=0;
//                break;
//            }
//        }
//        if(match)
//        {
//            return i+1;
//        }
//    }
//    return -1;
//}
//int main()
//{
//    char a[100];
//    char b[100];
//    gets(a);
//    gets(b);
//    printf("%d\n", find_str(a, b));
//    return 0;
//}

//寻找最长公共子串
//#include <stdio.h>
//#include <string.h>
//void find_str(const char *a, const char *b)
//{
//    int i, j;
//    int len_a = strlen(a);
//    int len_b = strlen(b);
//    int m[len_a+1][len_b+1];
//    int max=0;
//    int index=0;
//    for(i=0;i<=len_a;i++)
//    {
//        for(j=0;j<=len_b;j++)
//        {
//            m[i][j] = 0;
//        }
//    }
//    for(i=1;i<=len_a;i++)
//    {
//        for(j=1;j<=len_b;j++)
//        {
//            if(a[i-1]==b[j-1])
//            {
//                m[i][j]=m[i-1][j-1] + 1;
//            }
//            if(m[i][j]>max)
//            {
//                max=m[i][j];
//                index=i;
//            }
//        }
//    }
//    for(i=index-max;i<index;i++)
//    {
//        printf("%c", a[i]);
//    }
//}
//int main()
//{
//    char a[1000];
//    char b[1000];
//    scanf("%s %s", a, b);
//    find_str(a, b);
//    return 0;
//}

//输入一段文章，统计文章中的单词数。
//#include <stdio.h>
//int main()
//{
//    int i, num;
//    char a[1000];
//    gets(a);
//    num = (a[0] != ' ') ? 1 : 0;
//    for(i=1;a[i]!='\0';i++)
//    {
//        if(((a[i]>='a'&& a[i]<='z') || (a[i]>='A'&& a[i]<='Z') || (a[i]>='0'&& a[i]<='9')) &&
//           !((a[i-1]>='a'&& a[i-1]<='z') || (a[i-1]>='A'&& a[i-1]<='Z') || (a[i-1]>='0'&& a[i-1]<='9')))
//            num++;
//    }
//    printf("%d", num);
//    return 0;
//}

//设计Swap函数
//#include <stdio.h>
//void Swap(int *x, int *y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main()
//{
//    int a, b;
//    int *pa = &a, *pb = &b;
//    scanf("%d,%d", pa, pb);
//    Swap(pa, pb);
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}

//定义一个结构体类型STUDENT，包含学号，姓名，年龄，输入各成员的值，再输出。
//#include <stdio.h>
//struct STUDENT
//{
//    char id[20];
//    char name[10];
//    int age;
//};
//int main()
//{
//    struct STUDENT student1;
//    scanf("%s", student1.id);
//    scanf("%s", student1.name);
//    scanf("%d", &student1.age);
//    printf("id:%s\n", student1.id);
//    printf("name:%s\n", student1.name);
//    printf("age:%d\n", student1.age);
//    return 0;
//}

//交换两个结构体变量的值
//#include <stdio.h>
//struct TIME
//{
//    int a;
//    int b;
//    int c;
//};
//void Swap(struct TIME *p1,struct TIME *p2)
//{
//    int temp1, temp2, temp3;
//    temp1 = p1 -> a;
//    p1 -> a = p2 -> a;
//    p2 -> a = temp1;
//    temp2 = p1 -> b;
//    p1 -> b = p2 -> b;
//    p2 -> b = temp2;
//    temp3 = p1 -> c;
//    p1 -> c = p2 -> c;
//    p2 -> c = temp3;
//}
//void output(struct TIME t)
//{
//    printf("%02d:%02d:%02d\n", t.a, t.b, t.c);
//}
//int main()
//{
//    struct TIME t1 = {20, 51, 1};
//    struct TIME t2 = {8, 10, 25};
//    Swap(&t1, &t2);
//    output(t1);
//    output(t2);
//    return 0;
//}

//研究生招生考试分初试和复试，每个研究生记录其考号和姓名，初试考政治（100）、英语（100）、数学（150）、专业课（150），
//复试分笔试（80）和面试（120），总成绩由初试成绩和复试成绩构成，其中初试成绩占50%，复试成绩占50%。
//请设计一个结构体类型来描述上述信息，并计算每个考生的初试成绩、复试成绩和总成绩并按总成绩从大到小输出。
//#include <stdio.h>
//struct STUDENT
//{
//    char id[10];
//    char name[5];
//    int score[6];
//    int a;
//    int b;
//    float total;
//};
//void Get(struct STUDENT *p)
//{
//    int i;
//    scanf("%s %s", p->id, p->name);
//    for(i=0;i<6;i++)
//    {
//        scanf("%d", &p->score[i]);
//    }
//    p->a = p->score[0] + p->score[1] + p->score[2] + p->score[3];
//    p->b = p->score[4] + p->score[5];
//    p->total = (float)p->a*0.5 + (float)p->b*0.5;
//}
//void PX(struct STUDENT stu[], int n)
//{
//    struct STUDENT temp;
//    int i, j;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(stu[j].total>stu[i].total)
//            {
//                temp = stu[i];
//                stu[i] = stu[j];
//                stu[j] = temp;
//            }
//        }
//    }
//}
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    struct STUDENT stu[n];
//    for(i=0;i<n;i++)
//    {
//        Get(&stu[i]);
//    }
//    PX(stu, n);
//    printf("考号--- 姓名---- 政治 英语 数学 专业 笔试 面试 初试 复试 总分-\n");
//    for(i=0;i<n;i++)
//    {
//        printf("%-7s %-8s %4d %4d %4d %4d %4d %4d %4d %4d %5.1f\n", stu[i].id, stu[i].name,
//               stu[i].score[0], stu[i].score[1], stu[i].score[2], stu[i].score[3], stu[i].score[4],
//               stu[i].score[5], stu[i].a, stu[i].b, stu[i].total);
//    }
//    return 0;
//}

//病人登记看病，编写一个程序，将登记的病人按照以下原则排出看病的先后顺序：
//1. 老年人（年龄≥60岁）比非老年人优先看病。
//2. 老年人按年龄从大到小的顺序看病，年龄相同的按登记的先后顺序排序。
//3. 非老年人按登记的先后顺序看病。
//#include <stdio.h>
//struct OLD
//{
//    char id[10];
//    int age;
//    int order;
//};
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    struct OLD old[n], temp;
//    for(i=0;i<n;i++)
//    {
//        scanf("%s %d", old[i].id, &old[i].age);
//        old[i].order = i;
//    }
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            int swap = 0;
//            if(old[j].age < 60 && old[j+1].age >= 60)
//            {
//                swap = 1;
//            }
//            else if(old[j].age >= 60 && old[j+1].age >= 60)
//            {
//                if(old[j].age < old[j+1].age)
//                {
//                    swap = 1;
//                }
//                else if(old[j].age == old[j+1].age && old[j].order > old[j+1].order)
//                {
//                    swap = 1;
//                }
//            }
//            else if(old[j].age < 60 && old[j+1].age < 60)
//            {
//                if(old[j].order > old[j+1].order)
//                {
//                    swap = 1;
//                }
//            }
//            if(swap)
//            {
//                temp = old[j];
//                old[j] = old[j+1];
//                old[j+1] = temp;
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%s\n", old[i].id);
//    }
//    return 0;
//}

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
