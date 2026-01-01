//打印有趣的图形四
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=i;j<n;j++)
//            printf(" ");
//        for(j=1;j<=2*i-1;j++)
//            printf("*");
//        for(j=i;j<n;j++)
//            printf(" ");
//        printf("\n");
//    }
//    return 0;
//}

//打印有趣的图形五
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=i;j<n;j++)
//            printf(" ");
//        for(j=1;j<=2*i-1;j++)
//            printf("*");
//        for(j=i;j<n;j++)
//            printf(" ");
//        printf("\n");
//    }
//    for(i=n-1;i>0;i--)
//    {
//        for(j=i;j<n;j++)
//            printf(" ");
//        for(j=1;j<=2*i-1;j++)
//            printf("*");
//        for(j=i;j<n;j++)
//            printf(" ");
//        printf("\n");
//    }
//    return 0;
//}

//打印有趣的图形六
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=1;j<i;j++)
//            printf(" ");
//        for(j=1;j<=n;j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//打印有趣的图形七
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=n;j>i;j--)
//            printf(" ");
//        for(j=1;j<=n;j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//角谷定理,输入一个自然数，若为偶数，则把它除以2，若为奇数，则把它乘以3加1。经过如此有限次运算后，总可以得到自然数值1。求经过多少次可得到自然数1。
//#include <stdio.h>
//int main()
//{
//    int num, STEP=1;
//    scanf("%d", &num);
//    printf("%d", num);
//    while(num!=1)
//    {
//        if(num%2)
//        {
//            num=num*3+1;
//            printf(" %d", num);
//        }
//        else
//        {
//            num/=2;
//            printf(" %d", num);
//        }
//        STEP++;
//    }
//    printf("\nSTEP=%d", STEP);
//    return 0;
//}

//求交错序列前N项和,计算序列 1 - 2/3 + 3/5 - 4/7 + 5/9 + 6/11 + ... 的前N项之和
//#include <stdio.h>
//int main()
//{
//    int N, i;
//    double j, sum=0, sign=1;
//    scanf("%d", &N);
//    for(i=1;i<=N;i++)
//    {
//        j=sign*i/(2*i-1);
//        sum+=j;
//        sign=-sign;
//    }
//    printf("sum = %.8f", sum);
//    return 0;
//}

//有一分数序列： 2/1 3/2 5/3 8/5 13/8 21/13...... 求出这个数列的前N项之和，保留两位小数。
//#include <stdio.h>
//int main()
//{
//    int N, i;
//    double a=2, b=1, c, sum=0;
//    scanf("%d", &N);
//    for(i=1;i<=N;i++)
//    {
//        sum+=a/b;
//        c=a;
//        a+=b;
//        b=c;
//    }
//    printf("%.2f", sum);
//    return 0;
//}

//请输入一个正整数，如果一个三位数的个位数乘十位数乘百位数加上十位数的平方加上个位数的立方等于这个数，请输出这个三位数。
//#include <stdio.h>
//int main()
//{
//    int N, i, a, b, c, flag=0;
//    scanf("%d", &N);
//    for(i=100;i<=999;i++)
//    {
//        a=i/100;
//        b=i/10%10;
//        c=i%10;
//        if(N==a*b*c+b*b+c*c*c)
//        {
//            printf("%d ", i);
//            flag = 1;
//        }
//    }
//    if(flag==0)
//        printf("Not Find!");
//    return 0;
//}

//任意输入一个3的倍数的正整数，先把这个数的每一个数位上的数字计算其立方后再相加，得到一个新数，然后把这个新数的每一个数位上的数字再计算其立方和，重复运算下去，结果都是153，因此153被称为“数字黑洞”。
//请编程输入任意3的倍数的正整数，输出计算为153需要多少步。
//#include <stdio.h>
//#include <math.h>
//int judge(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n <= 0 || n % 3 != 0)
//    {
//        printf("error\n");
//        return 1;
//    }
//    printf("%d\n", judge(n));
//    return 0;
//}
//int judge(int n)
//{
//    int counter=0, sum=0;
//    while(n!=153)
//    {
//        counter++;
//        sum=0;
//        while(n>0)
//        {
//            sum+=pow(n%10, 3);
//            n/=10;
//        }
//        n=sum;
//    }
//    return counter;
//}

//请输入两个正整数，采用函数计算它们的最大公约数和最小公倍数。
//#include <stdio.h>
//int Max(int x, int y);
//int Min(int x, int y);
//int GreatestCommonDivisor(int x, int y);
//int main()
//{
//    int a, b;
//    scanf("%d %d", &a, &b);
//    if (a <= 0 || b <= 0)
//    {
//        printf("error\n");
//        return 1;
//    }
//    printf("%d ", GreatestCommonDivisor(a,b));
//    printf("%d", a*b/GreatestCommonDivisor(a,b));
//    return 0;
//}
//int Max(int x, int y)
//{
//    int result = (x>y)?x:y;
//    return result;
//}
//int Min(int x, int y)
//{
//    int result = (x>y)?y:x;
//    return result;
//}
//int GreatestCommonDivisor(int x,int y)
//{
//    int k;
////    while(x%y!=0)
////    {
////        k=x;
////        x=Max(k,y);
////        y=Min(k,y);
////        x%=y;
////    }
//    while(x!=y)
//    {
//        k=x;
//        x=Max(k,y);
//        y=Min(k,y);
//        x-=y;
//    }
//    return y;
//}

//将一个正整数反转输出
//#include <stdio.h>
//int ReverseInt(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", ReverseInt(n));
//    return 0;
//}
//int ReverseInt(int n)
//{
//    int sum=0;
//    while(n>0)
//    {
//        sum=sum*10+n%10;
//        n/=10;
//    }
//    return sum;
//}

//将输入的整数转为二进制数输出
//#include <stdio.h>
//void Binary(int n);
//void printBinary(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printBinary(n);
//    return 0;
//}
//void Binary(int n)
//{
//    if (n==0)
//        return;
//    Binary(n/2);
//    printf("%d", n%2);
//}
//void printBinary(int n)
//{
//    if (n==0)
//        printf("0");
//    else if (n>0)
//        Binary(n);
//    else
//    {
//        printf("-");
//        Binary(-n);
//    }
//}
