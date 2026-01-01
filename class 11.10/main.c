//输入一个整数值，判断该整数值是正数还是负数，是奇数还是偶数
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d",&a);
//    if(a>0 && a%2==0)
//        printf("%d is a positive even", a);
//    else if(a>0 && a%2!=0)
//        printf("%d is a positive odd", a);
//    else if(a<0 && a%2==0)
//        printf("%d is a negative even", a);
//    else if(a<0 && a%2!=0)
//        printf("%d is a negative odd", a);
//    else if(a==0)
//        printf("%d is zero. It is an even", a);
//    return 0;
//}

//编程输出如下上三角形的九九乘法表。
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for(i=1;i<=9;i++)
//    {
//        for(j=1;j<i;j++)
//        {
//            printf("   ");
//        }
//        for(j=i;j<=9;j++)
//        {
//            printf("%2d ", i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//输入一个整数，按输出样例方式打印一个用*组成的直角三角形
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//求幂之和
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n, i, sum=0;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=pow(2,i);
//    }
//    printf("result = %d", sum);
//    return 0;
//}

//奇数求和
//#include <stdio.h>
//int main()
//{
//    int n, i, sum=0;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=(2*i-1);
//    }
//    printf("sum=%d", sum);
//    return 0;
//}

//求简单交错序列前N项和
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    double sum=0, sign=1;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=sign/(3*(i-1)+1);
//        sign=-sign;
//    }
//    printf("sum = %.3f", sum);
//    return 0;
//}

//（1）从键盘上循环输入若干个学生的C语言课程的成绩(可能有小数)，输入负数时结束； （2）进行如下统计： （a）统计人数 （b）计算最高成绩 （c）计算最低成绩 （d）计算总成绩 （e）计算平均成绩  （3）按样例要求输出结果（符号用英文字符）
//#include <stdio.h>
//int main()
//{
//    int count=0;
//    double a, b=0, c=100, sum=0;
//    scanf("%lf", &a);
//    while(a>=0)
//    {
//        count++;
//        sum+=a;
//        if(a>=b)
//            b = a;
//        if(a<=c)
//            c = a;
//        scanf("%lf", &a);
//    }
//    printf("人数:%d\n", count);
//    printf("总分:%.0f\n", sum);
//    printf("平均分:%.2f\n", sum/count);
//    printf("最高分:%.0f\n", b);
//    printf("最低分:%.0f\n", c);
//    return 0;
//}

//用多边形的周长代替圆的周长并应用圆的周长公式得到：圆周率 = n × a / 2圆的内接正n边形边长可以用迭代公式计算：
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n=6, i;
//    double a=1;
//    for(i=1;i<=15;i++)
//    {
//        printf("%6d, %.15f\n", n, n*a/2);
//        n*=2;
//        a=sqrt(2-2*sqrt(1-pow(a/2,2)));
//    }
//    return 0;
//}

//简单的口令检查程序
//#include <stdio.h>
//int main()
//{
//    const int password = 8888;
//    int n, count=1;
//    printf("Please input password:");
//    scanf("%d", &n);
//    while(n!=password)
//    {
//        count++;
//        printf("Wrong password!\n");
//        if(count<=3)
//        {
//            printf("Enter again:");
//            scanf("%d", &n);
//        }
//        else
//        {
//            printf("You have entered three times! You are not welcome!");
//            break;
//        }
//    }
//    if(n==password)
//        printf("You are welcome!");
//    return 0;
//}

//编写一个程序，寻找所有的玫瑰花数字。玫瑰花数字是四位数字上各个位数上的数字的四次方和恰好等于该数字本身。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int i, a, b, c, d;
//    for(i=1000;i<=9999;i++)
//    {
//        a=i/1000;
//        b=i/100%10;
//        c=i/10%10;
//        d=i%10;
//        if(i==pow(a,4)+pow(b,4)+pow(c,4)+pow(d,4))
//            printf("%d ", i);
//    }
//    return 0;
//}

//打印有趣的图形二
//#include <stdio.h>
//int main()
//{
//    int n, i, j, k;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=i;j<n;j++)
//            printf(" ");
//        for(k=1;k<=i;k++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//打印有趣的图形三
//#include <stdio.h>
//int main()
//{
//    int n, i, j, k;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        printf("*");
//        if(i>=2 && i<n)
//        {
//            for(k=3;k<=i;k++)
//                printf(" ");
//            printf("*");
//        }
//        else if (i==n)
//        {
//            for(k=1;k<n;k++)
//                printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}
