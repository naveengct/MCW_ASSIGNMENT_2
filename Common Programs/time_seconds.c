#include<stdio.h>
int stamp_to_sec(char a[])
{
   int hrs=0,min=0 ,sec=0,res=0;
   for(int i=0;i<2;i++)
   {
       hrs=hrs*10+((int)a[i])-48;
       min=min*10+((int)a[i+3])-48;
       sec=sec*10+((int)a[i+6])-48;
   }
   return (hrs*60*60)+(min*60)+sec;
}
void sec_to_stamp(int n){
    int hrs,min;
    printf("\nSeconds=>%d",n);
    hrs=n/3600;
    n=n%3600;
    min=n/60;
    n=n%60;
    printf("\n%02d:%02d:%02d\n",hrs,min,n);
}
void main()
{
  char a[10];
  scanf("%s",a);
  printf("hrs:min:sec(01:02:30)\n%d\n",stamp_to_sec(a));
  sec_to_stamp(7319);
}