#include<stdio.h>
int main()
{
    printf("请你输入一个不超过四位数的整数");
    int a;
    int n;
    scanf("%d",&a);
    if(a>999){
        n=4;
    }else if(a>99){
        n=3;
    }else if(a>9){
        n=2;
    }else
        n=1;
    printf("%d\n",n);
    return 0;
    
}