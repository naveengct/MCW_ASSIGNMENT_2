#include<stdio.h>
#define LEN(a) sizeof(a)/sizeof(a[0]),sizeof(a[0])/sizeof(*a[0])
void main(){
   int a[2][3]={{1,2,3},
            {4,5,6}};
   printf("Rows=>%ld\nColumns=>%ld\n",LEN(a));
}