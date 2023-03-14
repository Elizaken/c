#include<stdio.h>
int main()
{   //读入三个整数
    int a,b,c;
    printf("请输入3个整数\n");
    scanf("%d %d %d",&a,&b,&c);
    //判断大小并且以由大到小输出
    if (a>b)
    {
        if(a>c)
        {
            if(b>c){
            printf("%d,%d,%d",a,b,c);
            }else{
                printf("%d,%d,%d",a,c,b);
            }
        }else{
            printf("%d,%d,%d",c,a,b);
        }
        
    }else{
        if(b>c){
            if(c>a){
                printf("%d,%d,%d",b,c,a);
            }else{
                printf("%d,%d,%d",b,a,c);
            }
            
        }else{
            printf("%d,%d,%d",c,b,a);
        }
    }
    


    return 0;

}