#include<stdio.h>
void call(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void reference(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a=10,b=15;
    printf("A=>%d   B=>%d\n",a,b);
    call(a,b);
    printf("A=>%d   B=>%d\n",a,b);
    reference(&a,&b);
    printf("A=>%d   B=>%d\n",a,b);
}