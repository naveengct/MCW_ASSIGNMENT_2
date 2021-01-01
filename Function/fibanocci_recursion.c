#include<stdio.h>
int limit=10;
int flag;
int fib(int n,int m)
{
if(flag!=limit){
 flag++;
  int temp=n+m;
  printf("%d,",m);
  fib(m,temp);
}
}
void main()
{
  printf("0,");
  fib(0,1);
  printf("\b");
}