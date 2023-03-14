#include<stdio.h>
int main()
{
    int grade;
    printf("请输出你的成绩（分）");
    scanf("%d",&grade);
    int a= grade/10;
    switch(a){
        case 10:
        printf("A+");
        break;
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        default:
        printf("F");
        break;

    } 
    return 0;
}