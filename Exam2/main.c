//利用以下序列计算圆周率
//#include <stdio.h>
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    double pi=1, k=1;
//    for(i=1;i<=n;i++)
//    {
//        pi*=((2*k)/(2*k-1))*((2*k)/(2*k+1));
//        k++;
//    }
//    printf("%.8f", pi*2);
//    return 0;
//}

//输入三个正整数，如果三个数中至少有两个数，他们的各个数字之和相等则输出1，否则输出0。请编写func函数并添加必要的头文件
//#include <stdio.h>
//int num(int n)
//{
//    int sum=0;
//    while(n)
//    {
//        sum+=n%10;
//        n/=10;
//    }
//    return sum;
//}
//int func(int a, int b, int c)
//{
//    if (num(a)==num(b))
//        return 1;
//    else if (num(a)==num(c))
//        return 1;
//    else if (num(b)==num(c))
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    int a, b, c;
//    scanf("%d%d%d", &a, &b, &c);
//    printf("%d", func(a, b, c));
//    return 0;
//}

//编程将2行3列的矩阵中的元素向右移动一列，最右一列移至第一列。
//#include <stdio.h>
//#define ROW 2
//#define COL 3
//int main()
//{
//    int a[ROW][COL];
//    int i, j;
//    for (i = 0; i < ROW; i++)
//        for (j = 0; j < COL; j++)
//            scanf("%d", &a[i][j]);
//    for(i=0; i<ROW; i++)
//    {
//        int k = a[i][COL-1];
//        for(j=COL-2; j>=0; j--)
//        {
//            a[i][j+1] = a[i][j];
//        }
//        a[i][0] = k;
//    }
//    for (i = 0; i < ROW; i++)
//    {
//        for (j = 0; j < COL; j++)
//            printf("%-3d ", a[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//输入一个整数，插入到一个从小到大排列的数组中，仍然保持排序状态
//#include <stdio.h>
//void insert(int a[], int n, int x)
//{
//    int i,k;
//    for(i=0;i<n;i++)
//    {
//        if(x<a[i])
//        {
//            k=i;
//            break;
//        }
//        else
//            k=n;
//    }
//    for(i=n;i>k;i--)
//    {
//        a[i]=a[i-1];
//    }
//    a[k]=x;
//}
//int main()
//{
//    int a[6] = {2, 4, 6, 8, 10};
//    int x;
//    scanf("%d", &x);
//    insert(a, 5, x);
//    for (int i = 0; i < 6; i++)
//        printf("%d ", a[i]);
//    return 0;
//}

//请将以下公式转换为C语言表达式6
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double a, b, y;
//    scanf("%lf%lf", &a, &b);
//    y = sqrt(a*a+b*b) + log(a+b) - exp(-fabs(a-b));
//    printf("%f", y);
//    return 0;
//}
//输入3 5，输出7.775058

//请将以下公式转换为C语言表达式7
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double x, y;
//    scanf("%lf", &x);
//    y = exp(x)*sin(x) + log(x+1);
//    printf("%f", y);
//    return 0;
//}
//输入1，输出2.980502

//求三个数中最大值
//#include <stdio.h>
//int getMax(int a, int b, int c)
//{
//    return (a>b?a:b)>c?(a>b?a:b):c;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", getMax(a, b, c));
//	return 0;
//}

//分解质因数
//#include <stdio.h>
//void func(int n)
//{
//    int i;
//    printf("%d=", n);
//    for(i=2;i<=n;i++)
//    {
//        while(n%i==0)
//        {
//            printf("%d", i);
//            n/=i;
//            if(n>1)
//            printf("*");
//        }
//    }
//    if(n>1)
//    {
//        printf("%d", n);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    func(n);
//    return 0;
//}

//逆序数是指在一个排列中，前面的数大于后面的数的情况。
//换句话说，如果在一个排列中，一对数的前后位置与大小顺序相反，那么它们就构成一个逆序。
//一个排列中所有逆序的总数叫做这个排列的逆序数。
//#include <stdio.h>
//#define size 9
//int main()
//{
//    int a[size];
//    int i, j, counter=0;
//    for(i=0;i<size;i++)
//        scanf("%d", &a[i]);
//    for(i=0;i<size;i++)
//    {
//        for(j=i+1;j<size;j++)
//        {
//            if(a[i]>a[j])
//                counter++;
//        }
//    }
//    printf("%d", counter);
//    return 0;
//}

//将数组中重复的元素去掉，但不改变原来的顺序。
//#include <stdio.h>
//void func(int arr[], int n)
//{
//    int i, j, k, m;
//    for(i=0;i<n;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            k=j;
//            if(arr[j]==arr[i])
//            {
//                for(m=j+1;m<n;m++)
//                    arr[m-1]=arr[m];
//                j=k-1;
//                n--;
//            }
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        printf("%d ", arr[i]);
//    }
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    int arr[n], i;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    func(arr, n);
//    return 0;
//}
