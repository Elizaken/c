//not found in current context
//每个函数有自己的变量空间
//函数参数表---形参----参数
//调用函数时给的值---实参----值
//传值
#include<stdio.h>
void swap();
int main(void){
   int a = 5;
   int b =6;
   swap(a,b);
   {
    int a = 0;
    printf("a = %d\n",a);
   }
   printf("a=%d,b=%d\n",a,b);
   return 0;
}
void swap(double a,double b)
{
    int swap;
    int t = a;
    printf("in swap,a=%f,b=%f\n",a,b);
    a = b;
    b = t;
}