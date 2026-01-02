//请将以下公式转换为C语言表达式8
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double a, b, y;
//    scanf("%lf%lf", &a, &b);
//    y = sqrt(a*a+b*b)*exp(-a/b);
//    printf("%f", y);
//    return 0;
//}

//打印有趣的图形十七
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        for(j=n-i;j>0;j--)
//            printf(" ");
//        for(j=n+1-i;j<2*n;j++)
//            printf("*");
//        printf("\n");
//    }
//    return 0;
//}

//一个偶数可以表示为两个质数之和
//#include <stdio.h>
//#include <math.h>
//int Zhi(int n)
//{
//    int i, sign=1;
//    for(i=2;i<=sqrt(n);i++)
//    {
//        if (n%i==0)
//        {
//            sign=0;
//            return sign;
//        }
//    }
//    return sign;
//}
//int main()
//{
//    int n, a, b;
//    scanf("%d", &n);
//    if(n>=4)
//    {
//        for(a=2;a<=n/2;a++)
//        {
//            b=n-a;
//            if(Zhi(a)==1&&Zhi(b)==1)
//                printf("%d %d\n", a, b);
//        }
//    }
//    return 0;
//}

//整数循环移位
//输入一个正整数n，将n的最低位移动到最高位。例如输入12345，则输出51234。
//#include <stdio.h>
//int func(int n)
//{
//    int low=n%10, dig=0;
//    int m = n;
//    while(m)
//    {
//        low*=10;
//        m/=10;
//    }
//    return low/10+n/10;
//}
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    printf("%d", func(n));
//    return 0;
//}

//数组去重并排序
//#include <stdio.h>
//void func(int a[], int n)
//{
//    int i, j, m;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            m=j;
//            if (a[j]==a[i])
//            {
//                for(j=m;j<n;j++)
//                {
//                    a[j]=a[j+1];
//                }
//                j=m-1;
//                n--;
//            }
//        }
//    }
//    Sort(a, n);
//    for(i=0;i<n;i++)
//        printf("%d ", a[i]);
//}
//void Sort(int a[], int n)
//{
//    int i, j, temp;
//    for(i=0;i<n-1;i++)
//    {
//        for(j=i+1;j<n;j++)
//        {
//            if(a[j]<a[i])
//            {
//                temp=a[j];
//                a[j]=a[i];
//                a[i]=temp;
//            }
//        }
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

//真假身份证
//公民身份号码是特征组合码，由十七位数字本体码和一位数字校验码组成。排列顺序从左至右依次为：六位数字地址码，八位数字出生日期码，三位数字顺序码，最后一位是数字校验码。
//校验码的计算方法：
//1、将前面的身份证号码17位数分别乘以不同的系数。从第一位到第十七位的系数分别为：7 9 10 5 8 4 2 1 6 3 7 9 10 5 8 4 2 ；
//2、将这17位数字和系数相乘的结果相加；
//3、用加出来和除以11，看余数是多少；
//4、余数只可能有0 1 2 3 4 5 6 7 8 9 10这11个数字。其分别对应的最后一位身份证的号码为1 0 X 9 8 7 6 5 4 3 2；
//如果校验码对不上说明身份证号是假的。
//请设计一个程序输入身份证号，验证此号码的校验码是否正确。
//#include <stdio.h>
//int main()
//{
//    int i;
//    char num[18];
//    for(i=0;i<18;i++)
//    {
//        scanf("%c", &num[i]);
//    }
//    int sum = (num[0]-48)*7 + (num[1]-48)*9 + (num[2]-48)*10 + (num[3]-48)*5 + (num[4]-48)*8 + (num[5]-48)*4 + (num[6]-48)*2 + (num[7]-48)*1 + (num[8]-48)*6 +
//                (num[9]-48)*3 + (num[10]-48)*7 + (num[11]-48)*9 + (num[12]-48)*10 + (num[13]-48)*5 + (num[14]-48)*8 + (num[15]-48)*4 + (num[16]-48)*2;
//    int n = sum%11;
//    switch(n)
//    {
//        case 0:
//            if(num[17]=='1')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 1:
//            if(num[17]=='0')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 2:
//            if(num[17]=='X')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 3:
//            if(num[17]=='9')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 4:
//            if(num[17]=='8')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 5:
//            if(num[17]=='7')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 6:
//            if(num[17]=='6')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 7:
//            if(num[17]=='5')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 8:
//            if(num[17]=='4')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 9:
//            if(num[17]=='3')
//                printf("true");
//            else
//                printf("false");
//            break;
//        case 10:
//            if(num[17]=='2')
//                printf("true");
//            else
//                printf("false");
//            break;
//        default:
//            printf("false");
//    }
//    return 0;
//}
