#include<stdio.h>
void main(){
    void *p,*q;
    int a=10,b=20;
    char c='a';
    p=&a;
    q=&b;
    printf("sum of two value in void=>%d\n",*(int*)p+*(int*)q);
    p=&c;
    printf("Char value in void=>%c\n",*(char*)p);
}