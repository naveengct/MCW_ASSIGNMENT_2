#include<stdio.h>
#include <stddef.h>
union A{
int x;
int y;
char ch;
};
void main()
{
union A a1;
a1.x=0x10;
printf("X=>%d\n",a1.x);
a1.y=0x1121;
printf("X=>%d,Y=>%d\n",a1.x,a1.y);
printf("Size=>%ld",sizeof(a1));
printf("Offset\nx=>%ld,y=>%ld,ch=>%ld\n",offsetof(union A,x),offsetof(union A,y),offsetof(union A,ch));
}