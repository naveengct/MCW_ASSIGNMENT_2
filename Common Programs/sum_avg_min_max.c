#include<stdio.h>
#include<limits.h>
void main()
{
    int a[5]={4,8,2,9,6},min=INT_MAX,max=INT_MIN,sum=0,avg;
    for(int i=0;i<5;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
        sum+=a[i];
    }
    printf("Min-%d\nMax-%d\nSum-%d\nAverage-%.2f\n",min,max,sum,(float)sum/5);
}