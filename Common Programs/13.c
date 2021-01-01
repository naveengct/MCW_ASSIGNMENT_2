#include<stdio.h>
void main()
{
    int a=10,b=20,c=30,d;
    d=++a,++b,++c,a+5; // d=11
    d=(++a,++b,++c,a+5); //d=17
}