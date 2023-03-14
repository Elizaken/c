#include <stdio.h>
#include <malloc.h>
#define OK 1
#define ERROR 0
typedef int Status;
typedef float Elemtype;
typedef struct{
	Elemtype e[3];
}Triplet;
 
/*初始化三元组T且初始化赋值*/
Status InitTriplet(Triplet &T,Elemtype v1,Elemtype v2,Elemtype v3)
{
	T.e[0]=v1;
	T.e[1]=v2;
	T.e[2]=v3;
	return 	OK;
}
/*初始化三元组T1且初始化赋值*/
Status InitTriplet1(Triplet &T1,Elemtype v1,Elemtype v2,Elemtype v3)
{
	T1.e[0]=v1;
	T1.e[1]=v2;
	T1.e[2]=v3;
	return 	OK;
}
/*取三元组T中第i个元素赋值给e*/
Status Getelem(Triplet T,Status i,Elemtype &e)
{
	if(i<1||i>3)
	    return ERROR;
	else
	    e=T.e[i-1];
	return OK;
}
/*将三元组T中第i个元素置换成所输入的e的值*/
Status Put(Triplet &T,Status i,Elemtype e)
{
	if(i<1||i>3)
	    return ERROR;
	else
	    T.e[i-1]=e;
	return OK;
}
/*找出三元组T中最大值并将其赋值给e*/
Elemtype GetMax(Triplet &T,Elemtype &e)
{
	Status i;
	e=T.e[0];
	for(i=1;i<3;i++)
		if(T.e[i]>e)
                    e=T.e[i];
	return e;
}
/*找出三元组T中最小值并将其赋值给e*/
Elemtype GetMin(Triplet &T,Elemtype &e)
{
	if(T.e[0]<T.e[1])
	    e=T.e[0];
	else
	    e=T.e[1];
	if(T.e[2]<e)
	    e=T.e[2];
	return e;
}
/*输出三元组T的三个元素值*/
Status ShowTriplet(Triplet &T,Status &t)
{
	Status i;
	if(t>=1&&t<=3)
	    printf("置换第%d值后，三元组的三个值为：",t);
	for(i=0;i<3;i++)
	    printf("%2f  ",T.e[i]);
	return OK;
}
/*输出三元组T1的三个元素值*/
Status ShowTriplet1(Triplet &T1)
{
	Status i;
	for(i=0;i<3;i++)
	printf("%2f  ",T1.e[i]);
	return OK;
}
/*判断三元组T是否是递增排序*/
Status IsAscending(Triplet &T)
{
	return ((T.e[0]<=T.e[1])&&(T.e[1]<=T.e[2]));
}
 
/*判断三元组T是否是递减排序*/
Status IsDescending(Triplet &T)
{
	return ((T.e[0]>=T.e[1])&&(T.e[1]>=T.e[2]));
}
/*销毁三元组T*/
Status DestroyTriplet(Triplet *T)
{
	free(T);
	T=NULL;
	return OK;
}
/*两个三元组对应元素相加，并将其依次放入数组x中*/
Status AddTriplet(Triplet &T,Triplet &T1,Elemtype x[])
{
    Status i;
    for(i=0;i<3;i++)
    {
        x[i]=T.e[i]+T1.e[i];
    }
    return OK;
}
/*两个三元组对应元素相减，并将其依次放入数组x1中*/
Status SubtractTriplet(Triplet &T,Triplet &T1,Elemtype x1[])
{
    Status i;
    for(i=0;i<3;i++)
    {
        x1[i]=T.e[i]-T1.e[i];
    }
    return OK;
}
/*输出数组x或x1的各元素值*/
Status ShowResult(Elemtype x[])
{
    Status i;
    for(i=0;i<3;i++)
        printf("%f  ",x[i]);
    printf("\n");
    return OK;
}
/*三元组T的各元素同乘一个比例因子k*/
Status MultiplyNumberT(Triplet &T,Elemtype k)
{
    Status i;
    for(i=0;i<3;i++)
        T.e[i]=k*T.e[i];
    return OK;
}
/*三元组T1的各元素同乘一个比例因子k*/
Status MultiplyNumberT1(Triplet &T1,Elemtype k)
{
    Status i;
    for(i=0;i<3;i++)
        T1.e[i]=k*T1.e[i];
    return OK;
}
int main()
{
	Triplet T,T1;
	Status i,flag,flag1,t=0;
	Elemtype v1,v2,v3,a1,a2,a3,e,x[3],x1[3],k;
	printf("Please input three values into Triplet v1,v2,v3:\n");
	scanf("%f%f%f",&v1,&v2,&v3);
	flag=InitTriplet(T,v1,v2,v3);
	printf("初始化三元组T：flag：%d(1:成功)\n",flag);
	printf("三元组T1中三个值分别为：\n");
	ShowTriplet(T,t);
	printf("\nPlease input three values into Triplet1 a1,a2,a3:\n");
	scanf("%f%f%f",&a1,&a2,&a3);
	flag1=InitTriplet1(T1,a1,a2,a3);
	printf("初始化三元组T1：flag1：%d(1:成功)\n",flag1);
	printf("三元组T1中三个值分别为：\n");
	ShowTriplet(T1,t);
	printf("\n输入三元组T想获得的第几个元素值（1-3）：\n");
	scanf("%d",&t);
	Getelem(T,t,e);
	printf("三元组T中第%d的值为：%f\n",t,e);
	printf("你想重置T中第几个的值（1-3）:\n");
	scanf("%d",&t);
	printf("重置它的值为：\n");
	scanf("%f",&e);
	Put(T,t,e);
	printf("重置T中第%d的值后，三元组T的三个值为：%f,%f,%f\n",t,T.e
 
[0],T.e[1],T.e[2]);
	printf("max=%f,min=%f\n",GetMax(T,e),GetMin(T,e));
	ShowTriplet(T,t);
	printf("\n");
	if(IsAscending(T))
	    printf("T是一个升序三元组！\n");
	if(IsDescending(T))
	    printf("T是一个降序三元组！\n");
	flag=DestroyTriplet(&T);
	AddTriplet(T,T1,x);
	printf("两个三元组对应分量相加后的三个结果为：\n");
	ShowResult(x);
	SubtractTriplet(T,T1,x1);
	printf("两个三元组对应分量相减后的三个结果为：\n");
	ShowResult(x1);
	printf("请输入比例因子k: ");
	scanf("%f",&k);
	MultiplyNumberT(T,k);
	printf("\n三元组T各元素乘过比例因子k后，得到的三个元素值分别为：\n");
	t=0;
	ShowTriplet(T,t);
	MultiplyNumberT1(T1,k);
	printf("\n三元组T1各元素乘过比例因子k后，得到的三个元素值分别为：\n");
	ShowTriplet1(T1);
	flag1=DestroyTriplet(&T);
	printf("\n销毁三元组T：flag=%d(1:成功)\n",flag);
	flag1=DestroyTriplet(&T1);
	printf("销毁三元组T1：flag1=%d(1:成功)",flag1);
	return OK;
}