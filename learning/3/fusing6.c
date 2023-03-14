#include<stdio.h>
 int main()
 {  //初始化
    const double RATE=8.25;
    const int STANDARD = 40;
    double pay = 0.0;
    //读取工作时间
    int hours;
    printf("请输入本周工作时长\n");
    scanf("%d",&hours);
    //判断并计算应给工资
    if(hours>STANDARD){

        pay = STANDARD*RATE+(hours-STANDARD)*RATE*1.5;
    }else{
        pay = hours*RATE;
    }
    printf("本周你的薪资是%f美元",pay);



    return 0 ;
 }