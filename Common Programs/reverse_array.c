#include<stdio.h>
#define N 5
void main()
{
    int i,j,a[N]={1,4,3,6,8};
    printf("original array\n");
    for(i=0;i<N;i++)
    printf("%d,",*(a+i));
    printf("\b");
    for(i=0,j=N-1;i<=N/2;i++,j--)
    {
        int temp =*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
    }
    printf("\nreversed array\n");
    for(i=0;i<N;i++)
    printf("%d,",*(a+i));
    printf("\b");
}