#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{   srand(time(0));
    int number = rand()%100+1;
    int a=0;
    int x;
    printf("我已经想好了一个100以内的整数,来猜一猜\n");
    do{
        scanf("%d",&x);
        a++;
        if(x>number){
            printf("你猜的数大于我的数\n");
        }else if(x<number){
            printf("你猜的数小于我的数\n");
        }printf("再猜一猜吧\n");   
    }while(x!=number);
    printf("你猜中了，猜了%d次",a);
    return 0;
}