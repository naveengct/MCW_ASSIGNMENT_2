#include<stdio.h>
#include <stdlib.h>
void main()
{
    int a[10],n,i;
    printf("Enter the number to search(0-9)");
    scanf("%d",&n);
    srand(time(0));
    for(i=0;i<10;i++){
    a[i]=rand()%9;
    printf("%d ",a[i]);
    if(a[i]==n){
        printf("\nFound");
        break;
        }
    }
    if(i==10)
    printf("\nNot Found");
}