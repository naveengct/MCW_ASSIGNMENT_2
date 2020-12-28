#include<stdio.h>
//Declaration
void sum(int a,int b);
void main()
{
  int a=10,b=15;
  //Call
  sum(a,b);
}
//Definition
void sum(int a,int b){
    printf("Sum-%d",a+b);
}