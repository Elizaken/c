#include<stdio.h>
int max (int a,int b)
{
    int ret;
    if(a>b){
        ret = a;
    } else{
        ret = b;
    }

    return ret;
}
int main()
{
    printf("%d",max(12,332));
    return 0;
}