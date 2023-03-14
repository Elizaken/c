#include<stdio.h>
int main()
{
   int foot = 0;
   int inch = 0;
   int cm = 0;
   printf("请输入厘米数");
   scanf("%d",&cm);
   foot = cm/30.48;
   inch = ((cm/30.48)-foot)*12; 
   printf("%d %d",foot,inch);




    return 0;
}