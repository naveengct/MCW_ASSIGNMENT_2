#include<stdio.h>
int y; //function cannot return local variable address
int* test(int x)
{
y=x*x;
return &y;
}
void main()
{
    printf("%d",*test(3));
}