#include<stdio.h>
void main(int argc,char *argv[]){
    int sum=0,i;
    for( i=0;i<argc;i++)
    sum+=atoi(argv[i]);
    printf("Sum=>%d\nAverage=>%.2f\n",sum,(float)sum/(argc-1));
}