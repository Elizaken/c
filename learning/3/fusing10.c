#include<stdio.h>
int main()
{
   int type;
   scanf("%d",&type);
   switch(type)
   {
    case 1:
    printf("good morning");
    break;
    case 2:
    printf("good afternoon");
    break;
    case 3:
    printf("good evening");
    break;
    case 4:
    printf("good night");
    break;
    default:
    printf("excuse me?");
    break;

   }   
   return 0;
}