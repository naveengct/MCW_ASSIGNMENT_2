#include<stdio.h>
void main()
{
int a=10,b;
char c1='A';
b=sizeof(++a);
printf("a=%d,b=%d\n",a,b); // b will be size of int and sizeof don't evaluate
printf("%ld,%ld\n",sizeof(c1), sizeof('A')); // here c1 is character where 'A' returns
                                             // ASCII value of character A so its int
                                             // The sizeof int wiile be 4
}