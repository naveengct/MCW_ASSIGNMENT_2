#include<stdio.h>
void count();
void main()
{
  for(int i=0;i<5;i++)
  count();
}
//Definition
void count(){
    static int i;
    int j=0;
    printf("Static Variable-%d\nNon-Static Variable-%d\n\n",i++,j++);
}