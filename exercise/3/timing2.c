#include<stdio.h>
int main()
{  
    int time1;
    int time2;
    scanf("%d %d",&time1,&time2);
    int hour1 = time1/100;
    int minute1 = time1%100;
    int minute = hour1*60+minute1;
    int time = time2 + minute;
    printf("%d",time/60*100 + time%60);
    
 





    return 0;
}
