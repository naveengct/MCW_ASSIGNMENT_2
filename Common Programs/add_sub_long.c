#include<stdio.h>
#include<math.h>
int power(int n, int m){
    int res=1;
    for(int i=0;i<m;i++)
    res=res*n;
    return res;
}
long int reverse(long int a){
    long int n=0,r;
    while(a){
       r=a%10;
       n=(n*10)+r;
       a=a/10;
   }
   return n;
}
void main(){
    long int a=10250,b=250,res=0,r1,r2,res1=0;
    printf("a=%ld\nb=%ld\n",a,b);
    int flag=0,temp,temp1,flag1=0,c1=0,c2=0;
    while(a && b){
      r1=a%10;
      r2=b%10;
      temp=flag+r1+r2;
      if(r2>r1){
          r1+=10;
          temp1=r1-r2-flag1;
          flag1=1;
      }
      else{
          temp1=r1-r2-flag1;
          flag1=0;
      }
      flag=temp/10;
      temp=temp%10;
      if(temp==0 && res==0)      
      c1++;
      if(temp1==0 && res1==0)
      c2++;
      res=res*10+temp;
      res1=res1*10+temp1;
      a=a/10;
      b=b/10;
    }
    while(a)
    {
        r1=(a%10);
        temp=r1+flag;
        temp1=r1-flag1;
        res=res*10+temp;
        res1=res1*10+temp1;
        if(temp==0 && res==0)      
        c1++;
        if(temp1==0 && res1==0)
        c2++;
        a=a/10;
        flag=0;
        flag1=0;
    }
    while(b)
    {
        r1=(b%10);
        temp=r1+flag;
        temp1=r1-flag1;
        res=res*10+r1;
        res1=res1*10+temp1;
        if(temp==0 && res==0)      
        c1++;
        if(temp1==0 && res1==0)
        c2++;
        b=b/10;
        flag1=0;
        flag=0;
    }
    printf("Add=>%ld\nSubract=>%ld\n",reverse(res)*power(10,c1),reverse(res1)*power(10,c2));
}