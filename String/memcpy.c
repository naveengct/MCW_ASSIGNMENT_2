#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char a[],char b[]){
    char temp[20];
    memcpy(temp,a,10);
    memcpy(a,b,10);
    memcpy(b,temp,10);
}

void main(){
    char a[10]="hello",b[10]="bye",c[10];
    printf("Before Swap\n%s\n%s\n",a,b);
    swap(a,b);
    printf("After Swap\n%s\n%s\n",a,b);
    memcpy(c,b,10);
    printf("After copy(2 char):%s\n",c);
}