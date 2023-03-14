#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int factor = 1;
    //int i;
    int i=1;
    for(i=2;i<=n;i++){
        factor*=i;
        }
        printf("%d!=%d",n,factor);
        return 0;

}