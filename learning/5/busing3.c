#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=1;
    int factor =1;
    for ( i = n; i>1; i--)
    {
        factor *=i;
    }
    printf("%d!=%d",n,factor);
    return 0;
}