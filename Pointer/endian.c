#include<stdio.h>
void main()
{
    unsigned int i=1;
    char *c =(char *)&i;
    if(*c) printf("little");
    else  printf("little");
}