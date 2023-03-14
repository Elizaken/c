#include<stdio.h>
int main()
{

    int a;
    printf("请输入倒计时") ;
    scanf("%d",&a);
    while(a>0){
        a--;
        printf("%d\n",a);

    }
    printf("发射！\n");
    return 0;

}