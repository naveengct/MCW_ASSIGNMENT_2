#include<stdio.h>
#define LEN(a) sizeof(a)/sizeof(*a)
void main(){
   int a[5]={1,2,3,4,5};
   printf("%ld\n",LEN(a));
}