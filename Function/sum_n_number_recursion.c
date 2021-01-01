#include<stdio.h>
int count(int* a,int cur,int sum){
    if(cur<=4){
        sum+=*a;
        *a++;
        cur+=1;
       sum=count(a,cur,sum);
    }
    return sum;
}
void main()
{
  int a[10]={1,2,3,4,5},sum=0,cur=0;
  printf("%d$",count(a,cur,sum));
}