#include<stdio.h>
struct box{
    int a;
    int b;
    int c;
};
struct box create_cube(int s)
{
struct box b1={s,s,s};
return b1;
};
void main(){
    struct box b2;
    b2=create_cube(5);
    printf("%d,%d,%d\n",b2.a,b2.b,b2.c);
}