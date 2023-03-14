//数组的单元在内存中时连续存放的
#include<stdio.h>
int main()
{

    int array[10],i;
    printf("%d\n",sizeof(int));
    for(i=0;i<10;i++)
    {
        printf("array[%d]:%ld\n",i,&array[i]);
    }

    return 0;
}