#include<stdio.h>
#include <stdarg.h> 
void vsum(int arg, ...){
    va_list a;
    va_start(a,arg); 
    for(int i=0;i<arg;i++)
    printf("%d ",va_arg(a,int));
    printf("\n");
    va_end(a);
}
void miniprintf(const char* b,int arg,...){
    printf("%s\n",b);
    va_list a;
    va_start(a,arg);
    for(int i=0;i<arg;i++)
    printf("%d ",va_arg(a,int));
    printf("\n");
}
void main()
{
    vsum(6,4,5,6,9,4,1);
    miniprintf("Hi",2,99,77);
}