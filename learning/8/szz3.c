#include<stdio.h>
int main(void)
{
    const int number = 10;//决定数组的大小
   int x;
   int count[number];//定义数组 
   int i;
//数组初始化
   for (i=0;i<number;i++){
    count[i] = 0;
   }
   scanf("%d",&x);
   while(x!= -1){
    if(x>=0 &&x<=9){
        count[x]++;//数组参与运算
    }
    scanf("%d",&x);
   }
   //遍历数组
   for(i=0;i<number;i++){
    printf("%d;%d\n",i,count[i]);
   }
   return 0;
}