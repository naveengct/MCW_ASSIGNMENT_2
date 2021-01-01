#include<stdio.h>
struct A
{
int x;
//char *str; // (or)
char str[20];
}; 
void main()
{
struct A a1 = { 101, "abc" },a2; 
//a1.x=10; a1.str="hello";
//works?
scanf("%d%s",&a1.x,a1.str); //works?
a2 = a1; //shallow copy or deep copy?
printf("%d\n%s",a2.x,a2.str);
}