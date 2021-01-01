#include<stdio.h>
struct str{
        int add;
        int mul;
    }s;
struct str call(int a,int b)
{
    struct str s;
    s.add=a+b;
    s.mul=a*b;
    return s;
}
void main()
{
    int a=10,b=15;
    
    s=call(a,b);
    printf("Add=>%d\nMultiply=>%d\n",s.add,s.mul);
}