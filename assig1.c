#include<stdio.h>
int* add(int*x,int*y){

//static int sum;
sum=*x+*y;
return &sum;

}
int sum=0;
int main()
{
   int a=10;
   int b=5;


   int *res=add(&a,&b);
   printf("answer is %d",*res);
}



