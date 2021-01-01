#include<stdio.h>
int power(int n, int m){
    int res=1;
    for(int i=0;i<m;i++)
    res=res*n;
    return res;
}
void main()
{
    int a[100],x,n,res=0;
    printf("Enter the order: ");
    scanf("%d",&n);
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the %d coefficient value:\n",x+1);
    for(int i=0;i<=n;i++)
    scanf("%d",&a[i]);
    printf("Polynomial Equation:");
    for(int i=n;i>=0;i--){
    printf("%dx^%d + ",a[n-i],i);
    res+=(a[n-i]*power(x,i));
    }
    printf("\b\b");
    printf("\nResult=>%d\n",res);
}