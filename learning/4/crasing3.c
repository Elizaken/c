#include<stdio.h>
int main()
{

    int a = 0;
    int x;
    printf("请输入一个整数");
    scanf("%d",&x);
    do{
        a++;
        x/=10;
    }while(x>0);
    printf("%d",a);
    return 0;
}