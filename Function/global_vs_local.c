#include<stdio.h>
int a=10;
void main()
{
    {
        int a=5;
        printf("Local variable0-%d\n",a);
    }
     printf("Global variable0-%d\n",a);
}