#include<stdio.h>
void reverse(char a[]){
 if(*a){
    *a++;
    reverse(a);
    printf("%c",*(--a));
 }
}
int count(char *a,int n){
 if(a[n]){
     n=count(a,n+1);
 }
 return n;
}
int compare(char a[], char b[]){
  
   if(*a||*b){
       if(*a>*b)
       return -1;
       if(*a<*b)
       return 1;
       *a++;*b++;
       return compare(a,b);
   }   
   return 0;
}
int occurrence(char a[], char c,int cnt){
    if(*a){
        if(*a==c)
        cnt++;
        *a++;
        cnt=occurrence(a,c,cnt);
    }
    return cnt;
}
int occurrence_place(char a[], char c,int cnt){
    if(*a){
        if(*a==c)
        return cnt;
        *a++;
        cnt=occurrence_place(a,c,cnt+1);
    }
    return cnt;
}
int find(char a[],char b[],int ind){
    if(a[ind] && b[ind]){
    if(a[ind]!=b[ind])
      return 0;
   return find(a,b,ind+1);
    }
    return 1;
}
int substr(char a[],char b[]){
    if(*a)
    {
       if(find(a,b,0))
       return 1;
       *a++;
       return substr(a,b);
    }
    return 0;
}
void main()
{
   char a[100]="Hello tiger\0",b[100]="Hello bye\0";
   printf("Length=>%d\n",count(a,0));
   reverse(a);
   printf("\nCompare=>%d\n",compare(a,b));
   printf("Occurence of e in %s (count):%d\n",a,occurrence(a,'e',0));
   printf("Occurence of e in %s (index):%d\n",a,occurrence_place(a,'e',0));
   printf("%d\n",substr(a,"Hello"));
}