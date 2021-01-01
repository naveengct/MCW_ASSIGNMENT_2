#include<stdio.h>
void main()
{
    char a[20],b[10]="hello",c[10]="bye";
    sprintf(a,"%s %s",b,c);
    printf("Concat=> %s\n",a);
    sprintf(a,"%s",b);
    printf("Copy=> %s\n",a);
    printf("length=>%d\n",sprintf(a,"%s",b));
}