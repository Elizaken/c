#include<stdio.h>
int main(void)
{
    int i = 1;
    int sum = 0;
    while(i <= 11111){
        sum += (3 * i);
        i *= 10;
        i++;
    }
    printf("%d\n", sum);
    printf("郭亚宁2213041825");

    return 0;
}