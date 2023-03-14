#include<stdio.h>
int main()
{  int a,b;
   int max = 0;
   printf("请输入两个整数");

    scanf("%d %d",&a,&b);
if (a>b)
{
    printf("max = %d",a);
}else{
    printf("max = %d",b);
}
    
    return 0;
}