//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}

//定义函数Add，Add可以计算两个整型的和，在主函数中调用了Add函数
//#include <stdio.h>
//int Add(int a, int b)
//{
//    return a + b;
//}
//int main()
//{
//    int x, y, sum = 0;
//    printf("Input tow integers:");
//    scanf("%d%d", &x, &y);
//    sum = Add(x, y);
//    printf("sum=%d\n", sum);
//    return 0;
//}

//输入一个小写字母，输出这个小写字母和它的ASCII值，输出相应的大写字母和大写字母的ASCII值
//#include <stdio.h>
//int main()
//{
//    char a;
//    scanf("%c", &a);
//    char b = a - 32;
//    printf("%c %d\n%c %d", a, a, b, b);
//    return 0;
//}

//请将以下公式转换为C语言表达式1
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//  float a = 30;
//  float b = 40;
//  float c = 2.3;
//  //float e = <表达式>;
//  float e = sqrt(a * a + b * b)/(2 * c);
//  printf("%.2f", e);
//  return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//  float a = 30;
//  float b = 40;
//  float c = 2.3;
//  float d = -3.6;
//  float e = fabs((a + b) * (c + d) + 2);
//  printf("%.2f", e);
//  return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//  float x = 2.2;
//  float y = 3.4;
//  float e = (log(x) + sin(y)) / 2;
//  printf("%.2f\n", e);
//  return 0;
//}

//#include <stdio.h>
//#include <math.h>
//int main() {
//  float x = 2.2;
//  float y = 3.4;
//  float f = (sin(3.14159 / 6) + 2 * exp(x)) / (2 * y + pow(y , x));
//  printf("%.2f\n", f);
//  return 0;
//}

//#include <stdio.h>
//int main()
//{
//  int x = 2;
//  float y = 1.0 / (1.0 + 1.0 / x);
//  printf("%.2f\n", y);
//  return 0;
//}

//输入三角形的两条边及夹角(度数)，计算其面积并输出，结果保留2位小数
//假设圆周率=3.14159
//#include <stdio.h>
//#include <math.h>
//#define PI 3.14159
//int main()
//{
//    float r1, r2, angle;
//    scanf("%f %f %f", &r1, &r2, &angle);
//    float S = r1 * r2 * sin(angle * PI / 180.0) / 2;
//    printf("area=%.2f", S);
//    return 0;
//}

//试编程计算点到直线的距离
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float x0, y0, A, B, C;
//    scanf("%f %f\n%f %f %f", &x0, &y0, &A, &B, &C);
//    float d =(fabs(A * x0 + B * y0 + C) / sqrt(A * A + B * B));
//    printf("distance=%.3f", d);
//    return 0;
//}

//已知三角形的三条边，计算其面积
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    float a, b, c;
//    scanf("%f %f %f", &a, &b, &c);
//    float p = (a + b + c) / 2;
//    float s = sqrt(p * (p - a) * (p - b) * (p - c));
//    printf("area=%.2f", s);
//    return 0;
//}

//输入两个double类型的数x和y, 计算以下表达式,输出结果保留10位小数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    double x, y;
//    scanf("%lf,%lf", &x, &y);
//    double res = x * x + sqrt(y) + exp(x) + pow(x, y) + log(x) +log10(y);
//    printf("res=%.10f", res);
//    return 0;
//}
