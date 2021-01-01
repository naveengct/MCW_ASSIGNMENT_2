#include<stdio.h>
union A
{
int x; int y; int z; int arr[2];
}a1;
union B
{
int x;
short int y; 
char ch; 
char carr[4];
}b1;
void main(){
     a1.x=9;
     printf("%d,%d\n",a1.arr[0],a1.arr[1]);
     a1.y=3;
printf("x=%d\n",a1.x);
printf("%d,%d\n",a1.arr[0],a1.arr[1]);
a1.z=4;;
printf("%d,%d\n",a1.arr[0],a1.arr[1]);

b1.x=3;
printf("%c,%c\n",b1.carr[0],b1.carr[1]);
printf("%d,%d,%c\n",b1.x,b1.y,b1.ch);
b1.ch='a';
printf("%c,%c\n",b1.carr[0],b1.carr[1]);
printf("%d,%d,%c\n",b1.x,b1.y,b1.ch);


}