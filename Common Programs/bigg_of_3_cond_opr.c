#include<stdio.h>
void main()
{
    int a=40,b=50,c=30;
    printf("Biggest is %d.\n",a>b?(a>c?a:c):(b>c?b:c));
}