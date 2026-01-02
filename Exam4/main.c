//求出e的值
//#include <stdio.h>
//double JC(int n)
//{
//    if(n==1)
//        return n*1.0;
//    else
//        return n*JC(n-1);
//}
//int main()
//{
//    int n, i;
//    double e=1;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        e+=1.0/JC(i);
//    }
//    printf("%.10f", e);
//    return 0;
//}

//打印有趣的图形二十一
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<n;i++)
//        printf(" ");
//    printf("*\n");
//    for(i=n-2;i>=0;i--)
//    {
//        for(j=i;j>0;j--)
//            printf(" ");
//        printf("*");
//        for(j=2*(n-2-i)+1;j>0;j--)
//            printf(" ");
//        printf("*\n");
//    }
//    for(i=1;i<=n-2;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf(" ");
//        printf("*");
//        for(j=1;j<=2*(n-2-i)+1;j++)
//            printf(" ");
//        printf("*\n");
//    }
//    for(i=1;i<n;i++)
//        printf(" ");
//    printf("*\n");
//    return 0;
//}

//输入一个正整数n，请输出n以内（含）所有素数
//#include <stdio.h>
//#include <math.h>
//int isPrime(int n)
//{
//    int i;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if(n%i==0)
//            return 0;
//    }
//    return 1;
//}
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    for (i = 2; i <= n; i++)
//    {
//        if (isPrime(i))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}

//自除数是指可以被它包含的每一位数除尽的数。
//自除数不允许包含0。
//#include <stdio.h>
//int ZCS(int n)
//{
//    int m[10];
//    int i, sum=0, k=n, j=0;
//    for(i=0;n;i++)
//    {
//        j++;
//        m[i] = n%10;
//        n/=10;
//    }
//    for(i=0;i<j;i++)
//    {
//        if(m[i]==0)
//            return 0;
//        else
//            sum+=k%m[i];
//    }
//    if(sum==0)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int left, right;
//    int i;
//    scanf("%d %d", &left, &right);
//    for(i=left;i<=right;i++)
//    {
//        if(ZCS(i))
//            printf("%d ", i);
//    }
//    return 0;
//}

//某公司人事管理系统有如下信息，工资均用整数表示
//职工号，姓名，基本工资，绩效工资
//请找出总工资最高的员工，输出其职工号和总工资（如果有多个员工只输出第一个）
//#include <stdio.h>
//struct STAFF
//{
//    int id;
//    char name[10];
//    int sal[2];
//    int total;
//};
//void Get(struct STAFF *p)
//{
//    scanf("%d", &p->id);
//    scanf("%s", p->name);
//    scanf("%d", &p->sal[0]);
//    scanf("%d", &p->sal[1]);
//    p->total = p->sal[0] + p->sal[1];
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int i, max=0;
//    struct STAFF sta[n];
//    for(i=0;i<n;i++)
//    {
//        Get(&sta[i]);
//    }
//    for(i=1;i<n;i++)
//    {
//        if(sta[i].total > sta[max].total)
//            max = i;
//    }
//    printf("%d %d", sta[max].id, sta[max].total);
//    return 0;
//}
