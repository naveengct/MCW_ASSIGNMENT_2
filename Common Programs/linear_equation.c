#include<stdio.h>

void main()
{
    int a[100],b[100],x,n,res=0;
    char c[5]={'x','y','z'};
    printf("Enter the order: ");
    scanf("%d",&n);
    printf("Enter the %d coefficient value of eqn1:\n(a1x+a2y+a3z=a4)\n",n+1);
    for(int i=0;i<=n;i++)
    scanf("%d",&a[i]);
    printf("Enter the %d coefficient value of eqn2:\n(a1x+a2y+a3z=a4)\n",n+1);
    for(int i=0;i<=n;i++)
    scanf("%d",&b[i]);
    printf("Linear Equation:");
    for(int i=0;i<=n;i++)
    printf("%d%c + ",a[i]-b[i],c[i]);
    printf("\b\b");
}