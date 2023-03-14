#include<stdio.h>
int main()
{
    int a = 2;
    int b = 4;
    int t;
    t = a ;
    a = b;
    b = t;
    printf("%d %d",a,b);
    return 0;

}