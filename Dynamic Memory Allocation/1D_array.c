#include<stdio.h>
#include<stdlib.h>
void main(){
   int n;
   scanf("%d",&n);
   int *a=(int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++)
   *(a+i)=i;
   for(int i=0;i<n;i++)
   printf("%d",*(a+i));
}