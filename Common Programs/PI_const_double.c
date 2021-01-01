#include<stdio.h>
#define PI 3.14
void main()
{
    int r=3;
    const double pi=3.14;
    printf("Symbolic constant area %f\n",PI*r*r);
    printf("Double constant area %f\n",pi*r*r);
    printf("Symbolic constant perimeter %f\n",2*PI*r);
    printf("Double constant perimeter %f\n",pi*2*r);
}
/**
o/p
void main()
{
    int r=3;
    const double pi=3.14;
    printf("Symbolic constant area %f\n",3.14*r*r);
    printf("Double constant area %f\n",pi*r*r);
    printf("Symbolic constant perimeter %f\n",2*3.14*r);
    printf("Double constant perimeter %f\n",pi*2*r);
}

where symbolic constant replace its value defined and the 
constant double variable cannot be changed. If we use symbolic
constant there won't be a use of variable and the compiler need
not needed to search the value of constant.
**/