#include<stdio.h>
void main()
{
    int a=10,b=15,temp;
    printf("Before Swap\n%d--%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After Swap\n%d--%d",a,b);
}