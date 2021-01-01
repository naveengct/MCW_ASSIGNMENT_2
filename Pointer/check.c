#include<stdio.h>
void main(){
    int a[5] = {10, 20, 30, 40, 50 }; 
    int *p=a, *q=*(&a+1)-1;
    printf("%d..%d\n",*p,*q);
    printf("%d,%d,%d,%d\n",*p++, *++p, (*p)++, ++(*p));
    printf("\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("%d,%d,%d,%d\n",*q--,*--q,(*q)--,--(*q));
    printf("\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("%d,%d,%d\n",++*p, *(p++), *(++p));
    printf("\n");
    for(int i=0;i<5;i++)
    printf("%d ",a[i]);
    printf("\n");
    printf("%d,%d,%d\n",--*q, *(q--),*(--q) );
}