#include<stdio.h>
int main()
{
    int x;
    printf("请输入小于十的钱数（元）");
    scanf("%d",&x);
    int one,two,five;
    for(one=1;one<x*10;one++){
        for(two=1;two<x*10/2;two++){
            for(five=1;five<x*10/5;five++){
                if(one+two*2+five*5==x*10){
                    printf("需要%d个1角，%d个2角和%d个5角凑出%d元\n",one,two,five,x);
                    goto out;
                    
                }
            }


        }

    }
    out: return 0;

    
}