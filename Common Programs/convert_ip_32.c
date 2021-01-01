#include<stdio.h>
long call(char ip[]);
long power(int n);
long power(int n){
    long res=1;
    for(int i=0;i<n;i++)
    res*=2;
    return res;
}
union ip{
    char ip[16];
    long n;
};
void main()
{
    union ip add;
    printf("Enter the ip: ");
    scanf("%s",add.ip);
    add.n=call(add.ip);
    printf("Integer is %ld\n",add.n);
}
long call(char ip[])
{
    long n=0,val;
    int temp=24,i;
    char *tok,*ptr;
    while(*ip>=48 && *ip<=57)
    {
        val=0;
        for(i=0;ip[i]!='.'&&ip[i]!='\0';i++)
        val=val*10+((int)ip[i]-48);
        n+=val*power(temp);
        temp-=8;
        while(i){
        i--;
        *ip++;
        }
        *ip++;
    }
    return n;
}