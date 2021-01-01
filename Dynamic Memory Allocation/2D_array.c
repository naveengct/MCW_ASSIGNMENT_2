#include<stdio.h>
#include<stdlib.h>
void main(){
   int n=4,m=4;
   int **a=(int**)malloc(n*sizeof(int*));
   for(int i=0;i<n;i++)
      a[i]=(int*)malloc(m*sizeof(int));
   for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
     a[i][j]=i+j;
   for(int i=0;i<n;i++){
   for(int j=0;j<m;j++)
   printf("%d ",a[i][j]);
   printf("\n");
   }
}