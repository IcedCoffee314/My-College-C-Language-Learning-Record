//不能直接写答案，要写代码提交
//#include <stdio.h>
//char a[] = "AACBDCCCBC";  // 按顺序依次填写每题的答案
//int main()
//{
//  int n;
//  scanf("%d", &n);
//  printf("%c", a[n-1]);
//  return 0;
//}

//不能直接写答案，要写代码提交
//#include <stdio.h>
//const char *a[] =
//{
//"ABCD", // 1
//"AD", // 2
//"BCD", // 3
//"BD", // 4
//"ACD", // 5
//"BC", // 6
//"AC", // 7
//"ABC", // 8
//"ABD", // 9
//"CD", // 10
//};
//int main()
//{
//  int n;
//  scanf("%d", &n);
//  printf("%s", a[n-1]);
//  return 0;
//}

//程序改错题
//#include <stdio.h>
//int main()
//{
//    int n, count;
//    scanf("%d", &n);
//    count = dig_count(n);
//    printf("%d", count);
//    return 0;
//}
//int dig_count(int n)
//{
//    int result=0;
//    while (n != 0)
//    {
//       n /= 10;
//       result++;
//    }
//    return result;
//}

//程序填空题
//以下程序功能是：计算y年m1月d1日与当年的m2月d2日之间的天数（m2>=m1），并打印计算结果。
//若m1=m2且d1=d2则算1天，例如输入1997,2,27,3,10，<回车>时，输出为12，表明从1997年2月27日到1997年3月10日共有12天。请填空。
//#include <stdio.h>
//int main()
//{
//    int y, m1, d1, m2, d2;
//    int i, d;
//    scanf("%d,%d,%d,%d,%d", &y, &m1, &d1, &m2, &d2);
//    y = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0) ? 1 : 0);
//    d = -d1;
//    for (i = m1; i < m2; i++)
//    {
//        switch (i)
//        {
//            case 1:
//            case 3:
//            case 5:
//            case 7:
//            case 8:
//            case 10:
//            case 12: d += 31; break;
//            case 2:  d += ((y==1) ? 29 : 28); break;
//            case 4:
//            case 6:
//            case 9:
//            case 11: d += 30;
//        }
//    }
//    printf("%d", d + d2 + 1);
//    return 0;
//}

//从键盘输入x和angle，编程计算多项式的值：x为double型变量，angle为整数，代表角度，试编程计算下面表达式的值，结果输出4位小数，PI取3.1415926。
//#include <stdio.h>
//#include <math.h>
//#define PI 3.1415926
//int main()
//{
//    double x;
//    int angle;
//    scanf("%lf %d", &x, &angle);
//    double y = x*pow(sin((angle+45)*PI/180.0),2) -1.0/3*log(x)/log(2)/(exp(x)+sqrt(x*x+4));
//    printf("%.4f", y);
//    return 0;
//}

//某企业根据利润提成发放奖金。
//利润低于10万元（含）时，奖金可提10%；
//10万到20万元（含）时，高于10万元的部分，可提成7.5%；
//20万到40万（含）之间时，高于20万元的部分，可提成5%；
//40万到60万（含）之间时，高于40万元的部分，可提成3%；
//60万到100万（含）之间时，高于60万元的部分，可提成1.5%；
//高于100万元时，超过100万元的部分按1%提成。
//输入当月利润，求应发放奖金总数。
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    switch(n/10)
//    {
//        case 0:printf("%.4f", n*0.1);break;
//        case 1:printf("%.4f", 1+(n-10)*0.075);break;
//        case 2:
//        case 3:printf("%.4f", 1.75+(n-20)*0.05);break;
//        case 4:
//        case 5:printf("%.4f", 2.75+(n-40)*0.03);break;
//        case 6:
//        case 7:
//        case 8:
//        case 9:printf("%.4f", 3.35+(n-60)*0.015);break;
//        default:printf("%.4f", 3.95+(n-100)*0.01);break;
//    }
//    return 0;
//}

//从键盘输入两个两位的正整数，计算这两个数（含边界）之间个位和十位不同时为奇数且不同时为偶数的所有两位数之和并输出。
//注意，
//1，没有规定两个数在输入时一定小的在前，大的在后，
//2，两个数可能相等
//#include <stdio.h>
//int main()
//{
//    int a,b;
//    scanf("%d %d", &a, &b);
//    if(a>b)
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//    int sum = 0;
//    for(int i=a;i<=b;i++)
//    {
//        if((i/10%2==0)&&(i%10%2!=0))
//            sum+=i;
//        else if((i/10%2!=0)&&(i%10%2==0))
//            sum+=i;
//    }
//    printf("sum=%d", sum);
//    return 0;
//}

//根据给定的日期及序号，生成日期+4位整数格式的流水号，日期格式为：
//4位年份+2位月份+2位日期，每一部分不足位的，前面以0补足，例如，2023年9月17日第16号单据，对应的流水号应为202309170016。
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    char y[5], m[3], d[3], n[5];
//    scanf("%s %s %s %s", y, m, d, n);
//    char num[13];
//    strcat(num,y);
//    if(m[1]!='\0')
//    {
//        strcat(num,m);
//    }
//    else
//    {
//        num[4]='0';
//        num[5]=m[0];
//    }
//    if(d[1]!='\0')
//    {
//        strcat(num,d);
//    }
//    else
//    {
//        num[6]='0';
//        num[7]=d[0];
//    }
//    if(n[3]!='\0')
//    {
//        strcat(num,n);
//    }
//    else if(n[2]!='\0')
//    {
//        num[8]='0';
//        strcat(num,n);
//    }
//    else if(n[1]!='\0')
//    {
//        num[8]='0';
//        num[9]='0';
//        strcat(num,n);
//    }
//    else
//    {
//        num[8]='0';
//        num[9]='0';
//        num[10]='0';
//        strcat(num,n);
//    }
//    printf("%s", num);
//    return 0;
//}

//将字符串s中的数字字符挑出来，并组合成一个整数返回（题目保证组合的整数在整型范围内）。如输入字符串”kje89(*$,_1”则提取的整数为891。
//int fun(char *s);，其中，返回值即为提取的整数，s指向被提取的字符串首字符
//#include <stdio.h>
//int fun(char *s)
//{
//    int sum = 0;
//    for(;*s!='\0';s++)
//    {
//        if(*s>=48&&*s<=57)
//            sum = sum*10+*s-48;
//    }
//    return sum;
//}
//int main()
//{
//    char s[80];
//    gets(s);
//    printf("%d\n", fun(s));
//    return 0;
//}

//现有一二维数组，用户首先从键盘键入行数m和列数n，用空格隔开，行与列的值最大均不超过20，接着从键盘输入该二维数组的各个元素的值，
//然后实现将该二维数组中所有元素中的偶数取出，存入一个新的一维数组，并对这个一维数组实现从小到大排序，最后输出排序后的一维数组。
//#include <stdio.h>
//void Sort(int *p, int n)
//{
//   int i, j;
//   for(i=0;i<n-1;i++)
//        for(j=i+1;j<n;j++)
//        {
//            if(p[j]<p[i])
//            {
//                int temp = p[j];
//                p[j] = p[i];
//                p[i] = temp;
//            }
//        }
//
//}
//int main()
//{
//    int m, n;
//    scanf("%d %d", &m, &n);
//    int a[m][n];
//    int i, j, k=0;
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//            scanf("%d", &a[i][j]);
//    int b[m*n];
//    for(i=0;i<m;i++)
//        for(j=0;j<n;j++)
//        {
//            if(a[i][j]%2==0)
//            {
//                b[k] = a[i][j];
//                k++;
//            }
//        }
//    Sort(b, k);
//    for(i=0;i<k;i++)
//        printf("%d ", b[i]);
//    return 0;
//}

//某学校在选择教材时，主要关注教材的以下特性：名称（不包含空格和换行符）、评分（int）和定价（int），
//同时，在选定教材时，会综合考虑书的评分和定价，即给评分和定价各自一个权重w_m和w_p，
//其中：w_m+w_p=1，然后根据算式：w_m*mark(评分)-w_p*price（价格）的结果选择其中结果值最大的书作为教材，试编程实现：
//（1）定义符合上述要求的结构体，并声明一个结构体数组，可以存储5本书，从键盘输入各本书的信息，存入定义的结构体数组中
//（2）换行后输入w_m的值（float，值的范围(0~1)）
//（3）根据上述评价准则从（1）输入的各本书中找出某学校要订阅的书籍，并输出该书的书名。
#include <stdio.h>
#include <string.h>
struct BOOK
{
    char name[20];
    int mark;
    int price;
    float value;
};
int main()
{
    int i, k=0;
    struct BOOK book[5];
    for(i=0;i<5;i++)
    {
        scanf("%s %d %d", book[i].name, &book[i].mark, &book[i].price);
    }
    float w_m;
    char name[20];
    strcpy(name, book[0].name);
    scanf("%f", &w_m);
    book[0].value = w_m*book[0].mark - (1.0-w_m)*book[0].price;
    for(i=1;i<5;i++)
    {
        book[i].value = w_m*book[i].mark - (1.0-w_m)*book[i].price;
        if(book[i].value>book[k].value)
        {
            k=i;
            strcpy(name, book[i].name);
        }
    }
    printf("%s", name);
    return 0;
}
