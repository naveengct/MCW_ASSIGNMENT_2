#include<stdio.h>
typedef union A{
    union{
        char c;
        int n;
    };
}a;
void main(){
    a a1;
    a1.c='a';
    a1.n=65;
    printf("%c,%d",a1.c,a1.n);
}