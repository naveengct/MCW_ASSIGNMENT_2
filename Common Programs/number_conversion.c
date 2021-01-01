#include<stdio.h>
#include<string.h>

void binary(int n)
{
    if(n>0){
        binary(n/2);
        printf("%d",n%2);
    }
}
void octal(int n){
    if(n>0){
        octal(n/8);
        printf("%d",n%8);
    }
}
void hexadecimal(int n){
    char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    if(n>0){
        hexadecimal(n/16);
        printf("%c",a[n%16]);
    }
}
void main(){
    int n=20;
    binary(n);
    printf("\n");
    octal(n);
    printf("\n");
    hexadecimal(n);
}