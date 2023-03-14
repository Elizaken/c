#include<stdio.h>
int main()
{
    int number;
    int digit;
    int x;
    printf("请输入要逆序的整数") ;
    scanf("%d",&number);
    while (number>0)
    {
        digit = number%10;
        //printf("%d",digit);
       x=x*10+digit;
        number/=10;
    }
    printf("%d",x);
    return 0;

}