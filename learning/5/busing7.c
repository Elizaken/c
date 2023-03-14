#include<stdio.h>
int main()
{  int x;
   int cnt=0;
   for(x=1;cnt<50;x++){
     int i;
     int Isprime=1;
     for(i=2;i<x;i++){
        if(x%i==0){
            Isprime = 0;
            break;
        }
     }if(Isprime==1){
        if(x!=1){
        printf("%d\t",x);
        cnt++;if(cnt%5==0){
            printf("\n");
        }}
    
        }  
     }

   
    
return 0;
}