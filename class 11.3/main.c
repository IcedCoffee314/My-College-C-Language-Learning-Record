//假设银行定期存款的年利率rate为2.25%，存款期为n年，存款本金为capital元，求n年后按复利计算的本利deposit。
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int n;
//    double capital;
//    double rate = 0.0225;
//    scanf("%d%*c%lf", &n, &capital);
//    printf("deposit = %f\n", capital * pow((1 + rate), n));
//    return 0;
//}

//从键盘任意输入一个三位数x，要求正确分离出它的个位、十位、百位数，并分别在屏幕上输出。
//#include <stdio.h>
//int main()
//{
//    int a, b, c, d;
//    scanf("%d", &a);
//    b = a / 100;
//    c = a % 10;
//    d = a / 10 % 10;
//    printf("bit0=%d, bit1=%d, bit2=%d", c, d, b);
//    return 0;
//}

//从键盘输入一个5位以内的任意位数的整数，编程计算它的每位数字之和
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//    int x, a, b, c, d, e;
//    scanf("%d", &x);
//    x = fabs(x);
//    a = x % 10;
//    b = x / 10 % 10;
//    c = x / 100 % 10;
//    d = x / 1000 % 10;
//    e = x / 10000;
//    printf("%d", a + b + c + d + e);
//    return 0;
//}

//符号函数sign(n)
//#include <stdio.h>
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n == 0)
//        printf("sign(%d) = 0", n);
//    else if (n > 0)
//        printf("sign(%d) = 1", n);
//    else if (n < 0)
//        printf("sign(%d) = -1", n);
//    return 0;
//}

//输入一个字符，判断这个字符属于哪一种类型
//#include <stdio.h>
//int main()
//{
//    char ch;
//    ch = getchar();
//    if (ch >= 48 && ch <= 57)
//        printf("数字");
//    else if (ch >= 65 && ch <= 90)
//        printf("大写字母");
//    else if (ch >= 97 && ch <= 122)
//        printf("小写字母");
//    else
//        printf("符号");
//    return 0;
//}

//输入学生的百分制成绩，如果成绩小于0或成绩大于100(输出一个提示信息，然后结束程序)
//#include <stdio.h>
//int main()
//{
//    float a;
//    int b;
//    scanf("%f", &a);
//    if (a < 0 || a > 100)
//        printf("请输入0-100以内的数");
//    else
//    {
//        b = (int) a / 10;
//        switch (b)
//        {
//            case 10:
//            case 9:
//            printf("成绩%g属于A等级", a);
//            break;
//            case 8:
//            printf("成绩%g属于B等级", a);
//            break;
//            case 7:
//            printf("成绩%g属于C等级", a);
//            break;
//            case 6:
//            printf("成绩%g属于D等级", a);
//            break;
//            default:
//            printf("成绩%g属于E等级", a);
//        }
//    }
//    return 0;
//}

//输入1屏幕输出One输入2屏幕输出Two输入3屏幕输出Three其他输入则输出input error
//#include <stdio.h>
//int main()
//{
//    int a;
//    scanf("%d", &a);
//    switch (a)
//    {
//    case 1:
//        printf("One");
//        break;
//    case 2:
//        printf("Two");
//        break;
//    case 3:
//        printf("Three");
//        break;
//    default:
//        printf("input error");
//    }
//    return 0;
//}

//输入n个整数，计算这些整数之和,输入分两行，第一行输入n，第二行输入n个整数
//#include <stdio.h>
//int main()
//{
//    int n, x, sum = 0, i;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        scanf("%d", &x);
//        sum+=x;
//    }
//    printf("sum=%d", sum);
//    return 0;
//}

//计算并输出1+2+3...+n的值
//#include <stdio.h>
//int main()
//{
//    int n, sum = 0, i;
//    scanf("%d", &n);
//    for(i=1;i<=n;i++)
//    {
//        sum+=i;
//    }
//    printf("sum=%d", sum);
//    return 0;
//}

//高速公路超速处罚,在一行中给出2个正整数，分别对应车速和限速，其间以空格分隔。
//在一行中给出处理意见：若属于正常行驶，则输出"OK";若应处罚款，则输出“Exceed x%.Ticket 200”；若应吊销驾驶证，则输出“Exceed x%.License Revoked” ,其中x是整数类型的超速百分数
//#include <stdio.h>
//int main()
//{
//    int a, b, c;
//    scanf("%d %d", &a, &b);
//    if(a<=b)
//        printf("OK");
//    if(a>b)
//    {
//        c = 100 * (a-b) / b;
//        if(c<10)
//            printf("OK");
//        else if(c>=10 && c<50)
//            printf("Exceed %d%%.Ticket 200", c);
//        else if(c>=50)
//            printf("Exceed %d%%.License Revoked", c);
//    }
//    return 0;
//}

//请输入一个简单的表达式(+,-,*,/,%)，并计算它的值(只考虑整数计算，比如5/3=1)。
//#include <stdio.h>
//int main()
//{
//    int a, b;
//    char c, d;
//    scanf("%d %c%d %c", &a, &c, &b, &d);
//    if(d!='=')
//        printf("input error!");
//    else switch(c)
//    {
//    case '+':
//        printf("%d%c%d=%d", a, c, b, a+b);
//        break;
//    case '-':
//        printf("%d%c%d=%d", a, c, b, a-b);
//        break;
//    case '*':
//        printf("%d%c%d=%d", a, c, b, a*b);
//        break;
//    case '/':
//        printf("%d%c%d=%d", a, c, b, a/b);
//        break;
//    case '%':
//        printf("%d%c%d=%d", a, c, b, a%b);
//        break;
//    default:
//        printf("input error!");
//    }
//}

//输入一个正整数，请判断这个数是否是素数
//#include <stdio.h>
//int main()
//{
//    int a, i, x = 1;
//    scanf("%d", &a);
//    for(i=2;i<a;i++)
//    {
//        if(a%i==0)
//        {
//            x = 0;
//            break;
//        }
//    }
//    switch (x)
//    {
//    case 0:
//        printf("no");
//        break;
//    case 1:
//        printf("yes");
//    }
//}

//输入一个正整数，计算1到这个正整数（含）之间所有7的倍数或个位数是7的数之和
//#include <stdio.h>
//int main()
//{
//    int a, i, sum = 0;
//    scanf("%d", &a);
//    for(i=1;i<=a;i++)
//    {
//        if(i%7==0 || i%10==7)
//            sum += i;
//    }
//    printf("%d", sum);
//}

//编程统计从键盘输入的字符中数字字符的个数，用换行符结束循环。
//#include <stdio.h>
//int main()
//{
//    int count = 0;
//    char ch;
//    scanf("%c", &ch);
//    while(ch!='\n')
//    {
//        if(ch>=48 && ch<=57)
//        {
//            count++;
//        }
//        scanf("%c", &ch);
//    }
//    printf("%d", count);
//}

//统计输入字符的字母、数字、符号(除字母、数字、空格外的其他字符)、空格的数量并按样例格式输出直方图，输入字符以回车结束。
//#include <stdio.h>
//int main()
//{
//    int a=0, b=0, c=0, d=0, A, B, C, D;
//    char ch;
//    scanf("%c", &ch);
//    while(ch!='\n')
//    {
//        if((ch>=65 && ch<=90) || (ch>=97 &&ch <=122))
//            a++;
//        else if(ch>=48 && ch<=57)
//            b++;
//        else if(ch>=32 && !((ch>=65 && ch<=90)|| (ch>=97 &&ch <=122) || (ch>=48 && ch<=57)) && ch!=' ')
//            c++;
//        else if(ch==' ')
//            d++;
//        scanf("%c", &ch);
//    }
//    printf("^\n|\n|");
//    for(A=1;A<=a;A++)
//        printf("*");
//    printf(" 字母(%d)\n|\n|", a);
//    for(B=1;B<=b;B++)
//        printf("*");
//    printf(" 数字(%d)\n|\n|", b);
//    for(C=1;C<=c;C++)
//        printf("*");
//    printf(" 符号(%d)\n|\n|", c);
//    for(D=1;D<=d;D++)
//        printf("*");
//    printf(" 空格(%d)\n|\n", d);
//    printf("------------------------------------------------->");
//}

//若将一个正整数化为二进制数，在此二进制数中，我们将数字1的个数多于数字0的个数的这类二进制数称为A类数，否则就称其为B类数。输入一个正整数，判断它为A类数还是B类数
//#include <stdio.h>
//int main()
//{
//    int a=0, b=0, c=0, d=0;
//    scanf("%d", &a);
//    d = a;
//    do {
//        if(a%2==1)
//            b++;
//        else
//            c++;
//        a/=2;
//    } while (a!=0);
//    if(b>c)
//        printf("%d是A类数", d);
//    else
//        printf("%d是B类数", d);
//    return 0;
//}

//编写一个程序，寻找所有的水仙花数字。水仙花数字是三位数字上各个位数上的数字的三次方和恰好等于该数字本身。 输出：每个水仙花数用一个空格隔开
//#include <stdio.h>
//int main()
//{
//    int a, b, c, i;
//    for(i=100;i<=999;i++)
//    {
//        a=i/100;
//        b=(i-100*a)/10;
//        c=i%10;
//        if(i==a*a*a+b*b*b+c*c*c)
//            printf("%d ", i);
//    }
//    return 0;
//}

