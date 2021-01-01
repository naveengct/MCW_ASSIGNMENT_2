#include<stdio.h>
int binary(int n)
{
    if(n>0){
        int temp=binary(n/2);
        printf("%d",n%2);
        n=temp;
    }
    return n;
}
int octal(int n){
    if(n>0){
       int temp=octal(n/8);
        printf("%d",n%8);
        n=temp;
    }
    return n;
}
void main()
{
  binary(7);
  printf("\n");
  octal(19);
}