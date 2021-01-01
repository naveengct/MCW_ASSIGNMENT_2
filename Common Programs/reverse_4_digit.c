#include<stdio.h>
void main()
{
    int a=1234,n=0,r;
    printf("4 digit number %d\n",a);
    while(a){
       r=a%10;
       n=(n*10)+r;
       a=a/10;
   }
    printf("reversed 4 digit number %d\n",n);
}