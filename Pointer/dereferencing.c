#include<stdio.h>
void main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},arr1=10; 
    int (*parr)[10]; 
    parr=&arr; 
    printf("%ld..%ld..%ld\n",sizeof(parr), sizeof(*parr), sizeof(**parr));
    printf("%d\n",**parr);
    **parr=arr1;
    printf("%d..%d\n",**parr,arr[0]);
}