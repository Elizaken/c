#include<stdio.h>
int main()
{

    const int price = 100;
    int amount;
    printf("请输入票面（元）：");
    scanf("%d",&amount);
    int change =  amount - price ;
    printf("找您%d元。\n",change);
    return 0;

}