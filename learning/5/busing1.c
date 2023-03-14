#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个整数");
    scanf("%d",&n);
    int i =1;
    int a=1;
    while(i<=n){
       a*=i;
       i++;
    }
    printf("%d!=%d",n,a);
    return 0;
}