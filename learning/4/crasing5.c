#include<stdio.h>
int main()
{
    int number;
    int sum=0;
    int a = 0;
    scanf("%d",&number);
    while(number!= -1)
    {   sum+=number;
        a++;
        scanf("%d",&number);
    }printf("%f",1.0*sum/a);
    return 0;
}