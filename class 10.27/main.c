//#include <stdio.h>
//int main()
//{
//    int a = 5, b = 7;
//    {
//        int temp = a;
//        a = b;
//        b = temp;
//    }//a,b在这个复合语句中被交换了值
//    //int x  = temp;复合语句中的变量temp不能在外面使用
//    printf("a = %d, b = %d", a, b);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 3;
//    printf("%d", (int)(11.0/3+0.5));
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 2, c = 5;
//    //printf("a=%%d, b=%%d\n", a, c );
//    printf("%f", 0.123456789);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a;
//    printf("Hello W%norld!\n", &a);
//    printf("%d", a);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int count1, count2, count3;
//
//    printf("Hello World!%n\n", &count1);
//    printf("字符数: %d\n", count1);  // 输出 12
//
//    printf("ABC%nDEF%nGHI%n", &count1, &count2, &count3);
//    printf("\ncount1=%d, count2=%d, count3=%d\n", count1, count2, count3);
//    // 输出: count1=3, count2=6, count3=9
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int count1, count2, count3;
//
//    printf("Hello World!%n\n", &count1);
//    printf("字符数: %d\n", count1);
//
//    count1 = count2 = count3 = 0;
//    printf("ABC%nDEF%nGHI%n\n", &count1, &count2, &count3);
//    printf("count1=%d, count2=%d, count3=%d\n", count1, count2, count3);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int count1, count2, count3;
//
//    // 方法1：使用 fflush 确保输出
//    printf("Hello World!");
//    fflush(stdout);  // 强制刷新输出缓冲区
//    printf("%n", &count1);
//    printf("\n字符数: %d\n", count1);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int count1, count2, count3;
//    char buffer[100];
//
//    // 使用 sprintf 到缓冲区，避免输出延迟问题
//    int len = sprintf(buffer, "Hello World!%n", &count1);
//    printf("%s\n", buffer);
//    printf("字符数: %d\n", count1);
//    printf("总长度: %d\n", len);
//
//    return 0;
//}

#include <stdio.h>
int main()
{
    double f1 = 1.123456789e+10;
    double f2 = 3.14;
    printf("%%f: %f\n", f1);
    printf("%%e: %e\n", f1);
    printf("%%g: %g\n", f1);

    return 0;
}
