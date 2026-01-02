//翻译无线电台的数字读音
//#include <stdio.h>
//void read(int a)
//{
//    if(a==0)
//        return;
//    read(a/10);
//    switch(a%10)
//    {
//    case 1:
//        printf("幺");
//        break;
//    case 2:
//        printf("两");
//        break;
//    case 3:
//        printf("三");
//        break;
//    case 4:
//        printf("四");
//        break;
//    case 5:
//        printf("五");
//        break;
//    case 6:
//        printf("六");
//        break;
//    case 7:
//        printf("拐");
//        break;
//    case 8:
//        printf("八");
//        break;
//    case 9:
//        printf("勾");
//        break;
//    case 0:
//        printf("洞");
//        break;
//    }
//}
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    if(a==0)
//        printf("洞");
//    else
//        read(a);
//    return 0;
//}

//小小乘法口诀表
//#include <stdio.h>
//int main()
//{
//    int i, j;
//    for(i=1;i<=9;i++)
//    {
//        for(j=1;j<=i;j++)
//        {
//            printf("%dx%d=%d ",j ,i , i*j);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//打印有趣的图形十三
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<n;i++)
//        printf(" ");
//    for(i=1;i<=n;i++)
//        printf("*");
//    printf("\n");
//    for(i=2;i<n;i++)
//    {
//        for(j=i;j<n;j++)
//            printf(" ");
//        printf("*");
//        for(j=2;j<n;j++)
//            printf(" ");
//        printf("*");
//        printf("\n");
//    }
//    for(i=1;i<=n;i++)
//        printf("*");
//    return 0;
//}

//求PI的值
//#include <stdio.h>
//double f1(int a)
//{
//    int i;
//    double sum=1;
//    for(i=1;i<=a;i++)
//    {
//        sum*=i;
//    }
//    return sum;
//}
//double f2(int a)
//{
//    int i;
//    double sum=1;
//    for(i=1;i<=a;i+=2)
//    {
//        sum*=i;
//    }
//    return sum;
//}
//int main()
//{
//    double a, pi=0;
//    int n, i;
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        a=f1(i)/f2(2*i+1);
//        pi+=a;
//    }
//    printf("n=%d,pi=%.14f", n, pi*2);
//    return 0;
//}

//二分法方程求根
//#include <stdio.h>
//#include <math.h>
//#define EPS 1e-6
//double fx(double x)
//{
//    double f;
//    f=exp(x)*log(x)-x*x;
//    return f;
//}
//int main()
//{
//    double left=1,right=4,mid;
//    do{
//        mid=(left+right)/2;
//        if(fx(mid)*fx(left)<0)
//            right = mid;
//        else
//            left = mid;
//    }while(fabs(fx(mid))>EPS);
//    printf("%f", mid);
//    return 0;
//}

//编写函数将一个正整数取出其奇数位组成新数
//#include <stdio.h>
//int func(int n)
//{
//    int count=1,result=0,x=1;
//    while(n)
//    {
//        if(count%2)
//        {
//            result+=n%10*x;
//            x*=10;
//        }
//        count++;
//        n/=10;
//    }
//    return result;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", func(n));
//    return 0;
//}
