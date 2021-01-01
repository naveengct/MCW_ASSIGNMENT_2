#include<stdio.h>
#include<string.h>
static char buffer[100];
char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
void hexadecimal(int n){
    static int t=0;
    if(n>0){
        hexadecimal(n/16);
        buffer[t++]=a[n%16];
    }
}
void main(){
    float n,f;
    int f1,t1,cnt=0;
    char b[10]={0};
    scanf("%f",&n);
    hexadecimal((int)n);
    f=(n-(float)((int)n));
    f*=100000;
    f1=(int)f;
    while(cnt!=5 && f1)
    {
        f1=f1*16;
        t1=f1/100000;
        f1=f1%100000;
        b[cnt]=a[t1];
        cnt++;
    }
    printf("%s.%.4s\n",buffer,b);

}