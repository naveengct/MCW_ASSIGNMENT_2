#include<stdio.h>
void main()
{
    int a=10,b=15;
    printf("Before Swap\n%d--%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swap\n%d--%d",a,b);
}