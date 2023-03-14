#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;

    a = 1.345f;
    b = 1.123f;
    c = a+b ;
    if (fabs(a+b-2.468)<9e-8)
        printf ("相等 ");
    else
    printf("不相等! c=%.10f,or%f\n",c,c);
    printf("%.9f\n",fabs(a+b-2.468));
    return 0;
}