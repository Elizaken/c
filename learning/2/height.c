#include<stdio.h>
int main()
{
    printf("请分别输入身高的英寸和英尺,"
   "如输入5 7来表示五英尺七英寸");
    int inch;
    int foot;
    scanf("%d %d",&foot,&inch);
    printf("身高是%f米\n",((foot+inch/12.0)*0.3048));
    return 0;
}