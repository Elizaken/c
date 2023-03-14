#include <stdio.h>
#include <stdlib.h>
#define OK 1
#define ERROR 0
#define OVERFLOW -2

typedef int Status;//给int型起个别名为Status
typedef float ElemType;//三元组的类型先定义为float，可以随时变换为别的类型
typedef ElemType *Triplet;//定义指针指向Triplet

//创建三元组T，依此置T的3个元素初值
Status InitTriplet(Triplet &T, ElemType v1, ElemType v2, ElemType v3) {
 T = (ElemType *)malloc(3 * sizeof(float)); //分配3个元素的存储空间
 if (!T)
  exit (OVERFLOW);//分配空间失败
 T[0] = v1;
 T[1] = v2;
 T[2] = v3;
 return OK;
}

//取出三元组中第i个元素的值
Status Get(Triplet T, Status i, float &e) {
 if (i < 1 || i > 3)
  return ERROR;
 else
  e = T[i - 1];
 return OK;
}

//置三元组T的第i元的值为e
Status Put(Triplet &T, Status i, float e) {
 if (i < 1 || i > 3)
  return ERROR;
 else
  T[i - 1] = e;
 return OK;
}

//求三元组的最大分量
Status Max(Triplet T, float &e) {
 if (T[0] > T[1])
  e = T[0];
 else
  e = T[1];
 if (T[2] > e)
  e = T[2];
 return e;
}

//求三元组的最小分量
Status Min(Triplet T, float &e) {
 if (T[0] < T[1])
  e = T[0];
 else
  e = T[1];
 if (T[2] < e)
  e = T[2];
 return e;
}

//显示三元组
Status Print(Triplet T) {
 printf("三元组为：\n");
 printf("%f %f %f",
  T[0], T[1], T[2]);
 printf("\n");
}

//销毁三元组
Status DestroyTriplet(Triplet &T) {
 free(T);
 T = NULL;
 return OK;
}

Status main() {
 ElemType v1, v2, v3;
 Status i, n, flag; //n为循环，flag为操作序号
 ElemType e, e1, e2; //e1=max,e2=min
 Triplet T;

 printf("请给三元组V1，v2,v3赋值：\n");
 scanf("%f %f %f", &v1, &v2, &v3);

 InitTriplet(T, v1, v2, v3);
 Get(T, i, e);
 Put(T, i, e);
 printf("该程序可进行如下操作：1.求最大值。2.求最小值。3.输出所有数值。\n");

//利用循环进行操作
 for (n = 1; n <= 3; n++) {

  printf("请输入需操作序号\n");
  scanf("%d", &flag);
  if (flag == 1) {
   e1 = Max(T, e);
   printf("三元组最大值为：%f", e1);
   printf("\n\n");
  }

  if (flag == 2) {
   e2 = Min(T, e);
   printf("三元组最小值为：%f", e2);
   printf("\n\n");
  }

  if (flag == 3)
   Print(T);
 }

 DestroyTriplet(T);
 return OK;
}