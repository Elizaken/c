#include<stdio.h>
void d();
int main(){
    d();
    printf("here\n");
    return 0;

}
void d()
{
    int a[10];
    a[10000000000000000] = 0;
}