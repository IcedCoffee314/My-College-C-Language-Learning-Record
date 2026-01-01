//输出有趣的回文数字
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//    int n, i;
//    scanf("%d", &n);
//    for (i=1;i<=2*n-1;i++)
//    {
//        printf("%d ", i<n?i:2*n-i);
//    }
//    return 0;
//}

//统计0和1的个数
//请指出以下程序的错误并改正，在错误的语句后面用注释写出原因
//#include <stdio.h>
//int main() {
//    char a[100];
//    scanf("%s", a);
//    func(a);
//    return 0;
//}
//void func(char s) {
//    int i, one, zero;
//    while (s) {
//        switch (s) {
//            case 0: zero++;
//            case 1: one++;
//        }
//    }
//    printf("one:%d zero:%d\n", one, zero);
//}
//改:
//#include <stdio.h>
//int main() {
//    char a[100];
//    scanf("%s", a);
//    func(a);
//    return 0;
//}
//void func(char s[]) { //数组做函数参数，可以省略长度，但不能省略方括号
//    int i, one=0, zero=0; //计数器应当初始化为0
//    for(i=0;s[i]!='\0';i++) //用for循环访问数组
//    {
//        switch (s[i]) {
//            case '0': zero++;break; //开关语句用break跳出,case后常量应为字符
//            case '1': one++;
//        }
//    }
//    printf("one:%d zero:%d\n", one, zero);
//}

//旋转矩阵问题,输入一个正整数n，按要求输出一个nxn的矩阵（n<10），输出格式"%2d "。
//#include <stdio.h>
//void matrix(int n);
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    matrix(n);
//    return 0;
//}
//void matrix(int n)
//{
//    int arr[10][10] = {0};
//    int num = 1, up=0,down=n-1,left=0,right=n-1,i,j;
//    while (num <= n*n)
//    {
//        for(i=left;i<=right && num <= n*n;i++)
//        {
//            arr[up][i] = num;
//            num++;
//        }
//        up++;
//        for(i=up;i<=down && num <= n*n;i++)
//        {
//            arr[i][right] = num;
//            num++;
//        }
//        right--;
//        for(i=right;i>=left && num <= n*n;i--)
//        {
//            arr[down][i] = num;
//            num++;
//        }
//        down--;
//        for(i=down;i>=up && num <= n*n;i--)
//        {
//            arr[i][left] = num;
//            num++;
//        }
//        left++;
//    }
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<n;j++)
//            printf("%2d ", arr[i][j]);
//        printf("\n");
//    }
//}

//Bresenham算法生成圆
//在图形学上可以用Bresenham算法来快速画圆，根据圆的对称性，将圆周分为8个象限，只需生成一个象限的坐标就可以画出整个圆周。
//计算得到一个圆周上的坐标x,y后，利用对称性就可以得到另外7个象限的坐标：(x,y)、(-x,y)、(x,-y)、(-x,-y)、(y,x)、(-y,x)、(y,-x)、(-y,-x)。
//Bresenham生成圆算法描述如下：
//1、设初值x=0, y=r, 误差p=3-2r
//2、用x,y画8个象限的圆周点
//3、如果p小于0，则更新p值为上一个p值加上4x+6
//  否则更新p值为上一个p值加上4(x-y)+10，并且y值更新为y-1
//4、x更新为x+1
//5、如果x>y则结束，否则跳到步骤2
//请输入圆心的x0、y0坐标和半径r，在50x50的二维字符数组用上述算法生成圆再显示出来。
//#include <stdio.h>
//#define size 50
//int main()
//{
//    int x0, y0, r;
//    int i, j;
//    char arr[size][size];
//    for(i=0;i<size;i++)
//        for(j=0;j<size;j++)
//            arr[i][j]= '.';
//    scanf("%d %d %d", &x0, &y0, &r);
//    int x=0, y=r, p=3-2*r;
//    while(x<=y)
//    {
//        arr[x0+x][y0+y] = '*';
//        arr[x0-x][y0+y] = '*';
//        arr[x0+x][y0-y] = '*';
//        arr[x0-x][y0-y] = '*';
//        arr[y0+y][x0+x] = '*';
//        arr[y0-y][x0+x] = '*';
//        arr[y0+y][x0-x] = '*';
//        arr[y0-y][x0-x] = '*';
//        if(p<0)
//            p+=4*x+6;
//        else
//        {
//            p+=4*(x-y)+10;
//            y-=1;
//        }
//        x+=1;
//    }
//    for(i=0;i<size;i++)
//    {
//        for(j=0;j<size;j++)
//            printf("%c", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//一群猴子排成一圈，按1，2，...n 编号，数到m只，踢出局，直到剩下最后一个猴子是大王。
//约瑟夫环问题
//#include <stdio.h>
//int main()
//{
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int arr[100] = {0};
//    int i, num=0, count=0, out;
//    while(out<n)
//    {
//        if(arr[num]==0)
//        {
//            count++;
//            if(count==m)
//            {
//                arr[num]=1;
//                out++;
//                count=0;
//                printf("%d ", num+1);
//            }
//        }
//        num=(num+1)%n;
//    }
//    return 0;
//}

//输入5x5阶的矩阵，编程计算：
//（1）两条对角线上的各元素之和，
//（2）两条对角线上行、列下标均为偶数的各元素之积。
//#include <stdio.h>
//#define SIZE 5
//int main()
//{
//    int i, j;
//    int sum=0, pro=1;
//    int arr[SIZE][SIZE];
//    for(i=0;i<SIZE;i++)
//        for(j=0;j<SIZE;j++)
//            scanf("%d", &arr[i][j]);
//    for(i=0,j=0;i<SIZE,j<SIZE;i++,j++)
//        sum+=arr[i][j];
//    for(i=0,j=SIZE-1;i<SIZE,j>=0;i++,j--)
//    {
//        if(i==j)
//            continue;
//        else
//            sum+=arr[i][j];
//    }
//    for(i=0,j=0;i<SIZE,j<SIZE;i+=2,j+=2)
//        pro*=arr[i][j];
//        for(i=0,j=SIZE-1;i<SIZE,j>=0;i+=2,j-=2)
//    {
//        if(i==j)
//            continue;
//        else
//            pro*=arr[i][j];
//    }
//    printf("%d:%d", sum, pro);
//    return 0;
//}

//从键盘任意输入10个整数，用函数编程实现将其中的最大数与最小数位置对换后，再输出调整后的数组。
//#include <stdio.h>
//#define SIZE 10
//int main()
//{
//    int i, j, k;
//    int min=0 ,max=0;
//    int arr[SIZE];
//    for(i=0;i<SIZE;i++)
//        scanf("%d", &arr[i]);
//    for(i=0;i<SIZE;i++)
//    {
//        if(arr[i]<arr[min])
//            min=i;
//        else if(arr[i]>arr[max])
//            max=i;
//    }
//    k=arr[min];
//    arr[min]=arr[max];
//    arr[max]=k;
//    for(i=0;i<SIZE;i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//请输入10个整数，设计一个排序函数将这10个整数从低到高排序后输出。
//#include <stdio.h>
//#define SIZE 10
//void Sort(int a[], int n)
//{
//    int i, j, k;
//    int temp;
//    for(i=0;i<n-1;i++)
//    {
//        k=i;
//        for(j=i+1;j<n;j++)
//        {
//            if(a[j]<a[k])
//                k=j;
//        }
//        if(k!=i)
//        {
//            temp=a[k];
//            a[k]=a[i];
//            a[i]=temp;
//        }
//    }
//}
//int main()
//{
//    int i;
//    int arr[SIZE];
//    for(i=0;i<SIZE;i++)
//        scanf("%d", &arr[i]);
//    Sort(arr, SIZE);
//    for(i=0;i<SIZE;i++)
//        printf("%d ", arr[i]);
//    return 0;
//}

//编程打印杨辉三角形（n<=20）
//#include <stdio.h>
//#define SIZE 20
//int main()
//{
//    int n;
//    int i, j;
//    int arr[SIZE][SIZE] = {0};
//    scanf("%d", &n);
//    for(i=0;i<n;i++)
//    {
//        arr[i][0] = 1;
//        for(j=1;j<=i;j++)
//            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
//    }
//    for(i = 0; i < n; i++)
//    {
//        for(j = 0; j <= i; j++)
//        {
//            printf("%-8d", arr[i][j]);  // 左对齐，宽度3
//        }
//        printf("\n");
//    }
//}

//查找算法之顺序查找
//#include <stdio.h>
//int Search(int a[], int n, int x)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if (a[i]==x)
//            return(i);
//    }
//    return(-1);
//}
//int main()
//{
//    int arr[] = {10,14,19,26,54,27,31,33,35,42,44,66};
//    int x;
//    scanf("%d", &x);
//    printf("%d", Search(arr, sizeof(arr)/sizeof(arr[0]), x));
//    return 0;
//}

//查找算法之折半查找
//#include <stdio.h>
//void BinSearch(int a[], int n, int x)
//{
//    int mid;
//    int low = 0;
//    int high = n-1;
//    int count = 0, index = -1;
//    while(low<=high)
//    {
//        count++;
//        mid = (high + low) / 2;
//        if(x>a[mid])
//            low=mid+1;
//        else if(x<a[mid])
//            high=mid-1;
//        else
//        {
//            index = mid;
//            break;
//        }
//    }
//    printf("count=%d,index=%d", count, index);
//}
//int main()
//{
//    int arr[] = {10,14,19,26,27,31,33,35,42,44,54,66};
//    int x;
//    scanf("%d", &x);
//    BinSearch(arr, sizeof(arr)/sizeof(arr[0]), x);
//    return 0;
//}
