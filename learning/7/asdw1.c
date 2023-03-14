#include<stdio.h>

void sum (int begin, int end);//声明
int main()//int sum(int,int)
{
    sum(1,10);
    sum(20,30);
    return 0;
}

void sum (int begin, int end)//定义
{   
    int i;
    int sum =0;
    for( i = begin;i<=end;i++){
        sum+=i;
    }
    printf("从%d到%d的和是%d\n",begin,end,sum);
}