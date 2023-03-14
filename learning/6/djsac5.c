#include<stdio.h>
int main()
{
   unsigned int a = 1 , b = 0;
    while (a!=0)
    a++;
    printf("int最大数%u\n",a-1);
    b++;
    while (a=a/10)
    {
        b++;
    }
        printf("%d",b);
        return 0 ;
}