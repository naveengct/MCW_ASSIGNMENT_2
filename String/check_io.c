#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c;
    printf("enter two no.s\n");
    scanf("%d%d",&a,&b); //but here give input of 3 no.s separated by space.
    printf("enter another number\n");
    fpurge(stdin);
    scanf("%d",&c);
    printf("%d,%d,%d\n",a,b,c);
}