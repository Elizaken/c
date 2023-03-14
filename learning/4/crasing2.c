#include<stdio.h>
int main()
{   printf("请输入一个整数");
    int a;
    int n=0;
    scanf("%d",&a);
    n++;
    a/=10;
    while( a > 0){
        n++;
        a/=10;
    }
    printf("%d\n",n);
    return 0;
}