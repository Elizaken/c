#include<stdio.h>
int main()
{   
    printf("请输入一个整数\n");
    int x;
    int Prime =0;
    scanf("%d",&x);
    for(int i=2;i<x;i++){
       if(x%i==0){
        Prime = 1;
        continue;//break;
       } printf("%d\n",i);
    }if(Prime==0){
        printf("是素数");
    }else{printf("不是素数");}
    return 0;

}