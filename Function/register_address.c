#include<stdio.h>
//register int a=10; register class cannot be specified as global class
void main()
{
       register int a=5;
        printf("%p\n",&a);
        //Throws error cant print address of RAM
}