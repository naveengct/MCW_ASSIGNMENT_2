#include<stdio.h>
int abs(int a)
{
    return (int)a;
}
int power(int a,int b)
{
    int res=1;
    for(int i=0;i<b;i++)
    res*=a;
    return res;
}
void main()
{
  printf("%d",power(3,abs(4.4)));
}