#include<stdio.h>
int length(char a[]){
    int cnt=0;
    for(int i=0;a[i]!='\0';i++)
     cnt++;
    return cnt;
}
char* copy(char a[]){
    static char temp[100];
    int i;
    for(i=0;a[i]!='\0';i++)
    temp[i]=a[i];
    temp[i]='\0';
    return temp;
}
char *concat(char a[],char b[]){
    int i=length(a);
    for(i;*b!='\0';i++)
    a[i]=*b++;
    a[i]='\0';
    return a;
}
int compare(char a[],char b[])
{
    int i;
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
        if(a[i]>b[i])
        return -1;
        if(a[i]<b[i])
        return 1;
    }
    if(a[i]) return 1;
    if(b[i]) return -1;
    return 0;
}
char* reverse(char a[])
{
    int n=length(a);
    for(int i=0;i<n/2;i++)
    {
        char temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    return a;
}
void occurrence(char a[],char c){
    int first=-1,last=-1,count=0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]==c && first==-1)
        first=i;
        if(a[i]==c){
        last=i;
        count++;
        }
    }
    printf("First occurrence=>%d\n",first);
    printf("last occurrence=>%d\n",last);
    printf("Total occurrence=>%d\n",count);

}
void substr(char a[],char b[])
{
    for(int i=0;a[i]!='\0';i++)
    {
        int k=0;
        for(int j=0;b[j]!='\0';j++)
        if(a[i+j]==b[j])
        k++;
        if(k==length(b)){
        printf("Substring found...\nStart=>%d\nEnd=>%d\n",i,i+k);
        return;
        }
    }
    printf("Substring Not found\n");
}
int stat_end_substr(char a[],char b[]){
    int i,n=length(a)-length(b),k=1,k1=1;
    for(i=0;b[i]!='\0';i++)
    if(a[i]!=b[i]){
    k=0;
    break;
    }
    for(i=n;b[i-n]!='\0';i++)
    if(a[i]!=b[i-n]){
    k1=0;
    break;
    }
    
    return k|k1;
}
void main()
{
  char a[100]="Hello world",*b,s1[30]="hi",s2[30]="hi hello";
  printf("Length=> %d\n",length(a));
  b=copy(a);
  printf("Copied String=>%s\n",b);
  printf("Conact=> %s\n",concat(a,b));
  printf("s1=>%s\ns2=>%s\n",s1,s2);
  printf("%d\n",compare(s1,s2));
  printf("Reversed=>%s\n",reverse(s1));
  occurrence(s2,'h');
  substr(s2,"hel");
  printf("Start End Substring=>%d\n",stat_end_substr(s2,"hello"));
}