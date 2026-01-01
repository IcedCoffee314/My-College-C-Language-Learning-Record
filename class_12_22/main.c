//计算字符串的长度
//#include <stdio.h>
//int mystrlen(char s[])
//{
//    int cnt=0;
//    int i;
//    for(i=0;s[i]!='\0';i++)
//    {
//        cnt++;
//    }
//    return cnt;
//}
//
//int main()
//{
//    char s[80];
//    gets(s);
//    printf("\"%s\" have %d character.", s, mystrlen(s));
//    return 0;
//}

//字符串综合练习
//#include <stdio.h>
//// 字符串长度
//int mystrlen(char s[])
//{
//    int cnt=0;
//    int i;
//    for(i=0;s[i]!='\0';i++)
//    {
//        cnt++;
//    }
//    return cnt;
//}
//// 复制字符串
//void mystrcpy(char dest[], char src[])
//{
//    int i;
//    for(i=0;src[i]!='\0';i++)
//    {
//        dest[i]=src[i];
//    }
//    dest[i]='\0';
//}
//// 连接字符串
//void mystrcat(char dest[], char src[])
//{
//    int i, j;
//    for(j=0;dest[j]!='\0';j++);
//    for(i=0;src[i]!='\0';i++)
//    {
//        dest[j+i]=src[i];
//    }
//    dest[j+i]='\0';
//}
//int main()
//{
//    char s1[80];
//    char s2[80];
//    char s3[80];
//    gets(s1);
//    gets(s2);
//    mystrcpy(s3, s1);
//    mystrcat(s3, s2);
//    printf("\"%s\"+\"%s\"=\"%s\"", s1, s2, s3);
//    return 0;
//}

//设计字符串比较函数
//#include <stdio.h>
//// 字符串长度
//int mystrlen(char s[])
//{
//    int cnt=0;
//    int i;
//    for(i=0;s[i]!='\0';i++)
//    {
//        cnt++;
//    }
//    return cnt;
//}
//// 比较字符串
//int mystrcmp(char s1[], char s2[])
//{
//    int i;
//    for(i=0;s1[i] != '\0' && s2[i] != '\0';i++)
//    {
//        if(s1[i]>s2[i])
//        {
//            return 1;
//        }
//        else if(s1[i]<s2[i])
//        {
//            return -1;
//        }
//    }
//    if(s1[i] == '\0' && s2[i] == '\0')
//    {
//        return 0;
//    }
//    else if(s1[i]=='\0')
//    {
//        return -1;
//    }
//    else
//    {
//        return 1;
//    }
//}
//int main()
//{
//    char s1[80];
//    char s2[80];
//    gets(s1);
//    gets(s2);
//    int n = mystrcmp(s1, s2);
//    if(n==0)
//    {
//        printf("\"%s\"=\"%s\"", s1, s2);
//    }
//    else if(n>0)
//    {
//        printf("\"%s\">\"%s\"", s1, s2);
//    }
//    else if(n<0)
//    {
//        printf("\"%s\"<\"%s\"", s1, s2);
//    }
//    return 0;
//}

//字符串逆序
//编写一个函数Inverse()，实现将字符数组中的字符串逆序存放的功能，并设计main函数输入一个字符串，逆序这个字符串后输出
//#include <stdio.h>
//void Inverse(char a[])
//{
//    int n, i;
//    char temp;
//    for(n=0;a[n]!='\0';n++);
//    for(i=0;i<n/2;i++)
//    {
//        temp=a[i];
//        a[i]=a[n-1-i];
//        a[n-1-i]=temp;
//    }
//    return;
//}
//int main()
//{
//    char s[100];
//    gets(s);
//    Inverse(s);
//    puts(s);
//    return 0;
//}

//移动字符串
//请编写函数 fun，函数的功能是：移动字符串中的内容，移动的规则如下：把第 1 到第 m 个字符平移到字符串的最后，把第 m+1 到最后的字符移到字符串的前部。
//#include <stdio.h>
//void fun(char a[], int m)
//{
//    int n, i;
//    char b[100];
//    for(n=0;a[n]!='\0';n++);
//    m%=n;
//    for(i=0;i<m;i++)
//    {
//        b[i]=a[i];
//    }
//    for(i=0;i<n-m;i++)
//    {
//        a[i]=a[i+m];
//    }
//    for(i=0;i<m;i++)
//    {
//        a[i+n-m]=b[i];
//    }
//    return;
//}
//int main()
//{
//    int m;
//    char s[100];
//    gets(s);
//    scanf("%d", &m);
//    fun(s, m);
//    puts(s);
//    return 0;
//}

//请输出以下图形
#include <stdio.h>
int main() {
    char a[6] = "ABCDE";//字符串应比字符长度大一以放下\0
    int i, k;
    char temp;
    for (i = 1; i <= 5; i++)
    {
        printf("%s\n", a);//输出字符串应用格式符%s
        temp = a[0];
        for (k = 0; k < 4; k++)//for循环后接循环体，直接接分号等于空转
        {
            a[k] = a[k + 1];//应把后值赋给前值，字符串前移
        }
        a[4] = temp;
    }
    return 0;
}

//打印九宫图
//龟甲上有9种花点的图案，分别代表这9个数，而3行、3列以及两对角线上各自的数之和均为15
//输入奇数矩阵大小，比如3，5，9，... ，(<100)
//输出矩阵，输出行数据格式“%4d”，两个数据之间空一格
//#include <stdio.h>
//int main()
//{
//    int n, i, j;
//    int matrix[100][100] = {0};
//    scanf("%d", &n);
//    int a=n-1, b=n/2;
//    for(i=1;i<=n*n;i++)
//    {
//        if(matrix[a%n][b%n] == 0)
//        {
//            matrix[a%n][b%n] = i;
//            a++,b++;
//        }
//        else
//        {
//            a-=2,b-=1;
//            matrix[a%n][b%n] = i;
//            a++,b++;
//        }
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%4d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//旋转矩阵问题二
//#include <stdio.h>
//int main()
//{
//    int n;
//    int matrix[10][10] = {0};
//    scanf("%d", &n);
//    int a=n/2,b=n/2;
//    int num=1, i, k, j;
//    int step=1, dir=0;
//    int dira[] = {0, -1, 0, 1};
//    int dirb[] = {-1, 0, 1, 0};
//    matrix[a][b] = num;
//    while(num<=n*n)
//    {
//        for(k=0;k<2;k++)
//        {
//            for(i=0;i<step;i++)
//            {
//                a+=dira[dir];
//                b+=dirb[dir];
//                num++;
//                if(num>n*n)
//                    break;
//                matrix[a][b]=num;
//            }
//            if(num>n*n)
//                break;
//            dir=(dir+1)%4;
//        }
//        step++;
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//        {
//            printf("%2d ", matrix[i][j]);
//        }
//        printf("\n");
//    }
//    return 0;
//}

//冒泡法排序
//比较相邻的元素。如果第一个比第二个大（或小），就交换他们两个。
//对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。
//针对所有的元素重复以上的步骤，除了最后一个。
//持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要交换。
//#include <stdio.h>
//int bubble_sort(int arr[], int n)
//{
//	int i, j;
//	int c=0;
//	for (i = 0; i < n-1; i++)
//    {
//		int flag = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			c++;
//			if (arr[j]>arr[j+1])
//			{
//				int temp=arr[j];
//                arr[j]=arr[j+1];
//                arr[j+1]=temp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//            break;
//	}
//	return c;
//}
//int main()
//{
//	int n, i, loop;
//	scanf("%d", &n);
//	int arr[n];
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	loop = bubble_sort(arr, n);
//	printf("loop:%d\n", loop);
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}
