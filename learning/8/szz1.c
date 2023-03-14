#include<stdio.h>
int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];//定义数组
    scanf("%d",&x);
    while(x!=-1){
        number[cnt] = x;//对数组中的元素赋值
        //
        {
            int i ;
            printf("%d\t",cnt);
            for( i =0;i<=cnt;i++){
                printf("%d\t",number[i]);
            }
            printf("\n");
        }
        //
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt > 0){
        printf("%f\n",sum/cnt);
        int i;
        for(i = 0;i<cnt;i++){
            if(number[i]>sum/cnt){
                printf("%d\n",number[i]);

            }
        }//遍历数组
    }
    return 0;
}