#include<stdio.h>
void main(){
    int n,r,res=0;
    char a[10]="1234532";
    for(int i=0;a[i]!='\0';i++)
    {
        n=(int)(a[i]-48);
        res=res*10+n;
        n=n/10;
    }
    printf("%d\n",res);
}