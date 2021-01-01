#include<stdio.h>
int gcd(int n,int m){
    if(m!=0)
    return gcd(m,n%m);
    else
    return n;
}
void main()
{
   printf("%d\n",gcd(8,36));
}