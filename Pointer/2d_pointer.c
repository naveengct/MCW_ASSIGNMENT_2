#include<stdio.h>
void main(){
    int arr[3][4]={{2,3,4,5},{6,7,8,9},{10,11,12,13}};
    int (*p)[4];
     p=arr;
    printf("%ld..%ld..%ld\n",sizeof(p), sizeof(*p), sizeof(**p));
    for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
    printf("%d,%d,%d\n",arr[i][j], (*(p+i))[j], *(*(p+i)+j));
}