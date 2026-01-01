#include <stdio.h>
void Bin(int n)
{
    if(n==0)
        return;
    Bin(n/2);
    printf("%d", n%2);
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n<0)
    {
        printf("-");
        n=-n;
    }
    Bin(n);
    return 0;
}
