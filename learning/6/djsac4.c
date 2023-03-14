#include<stdio.h>
int main ()
{
    char c =127;
    c = c+1;
    char s = -128;
    s--;
    printf("s = %d,c = %d\n",s,c);
    return 0;
}