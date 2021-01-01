#include<stdio.h>
#define N 5
void main()
{
    int a[N]={3,8,5,1,6},b[N]={5,6,2,9,8},i,k=0;
    while(k!=N){
    a[k]=a[k]+b[k];
    k++;
    }
     for(i=0;i<N;i++)
    printf("%d,",a[i]);
    printf("\b");
}