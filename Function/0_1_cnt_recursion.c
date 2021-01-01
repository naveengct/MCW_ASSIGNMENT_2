#include<stdio.h>
struct str{
    int cnt1;
    int cnt2;
};
struct str count(char* a,struct str s){
   if(*a){
       if(*a=='0')
       s.cnt1+=1;
       else
       s.cnt2+=1;
       *a++;
       s=count(a,s);
   }
   return s;
}
void main()
{
    char a[10]="10010101";
    struct str s={0,0};
    s=count(a,s);
    printf("Zero count %d\n",s.cnt1);
    printf("One count %d\n",s.cnt2);
}