#include<stdio.h>
#include<stdlib.h>
void main(){
    int *p,a=10;
    char *c,b='a';
    float *f,d=7.34;
    p=(int *)malloc(sizeof(int));
    c=(char *)malloc(sizeof(char));
    f=(float *)malloc(sizeof(float));
    p=&a;
    c=&b;
    f=&d;
    printf("%d..%c..%.2f\n",*p,*c,*f);
}