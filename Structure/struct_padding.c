#include<stdio.h>
typedef struct marks{
    int id;
    char marks[5];
    int total;
}M;
#pragma pack(1) 
typedef struct marks1{
    int id;
    char marks[5];
    int total;
}M1;
void main(){
    M m;
    M1 m1;
    printf("Padding size=>%ld\n",sizeof(m)-sizeof(m1));
}