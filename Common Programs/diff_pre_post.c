#include<stdio.h>
void main()
{
    int i=2,j=2,k;
    printf("Value of i = %d\n",i); //2
    printf("Pre increment i = %d\n",++i); //3
    printf("Post increment i = %d\n",i++);  //3
    printf("After post increment i = %d\n",i); //4
    printf("Value of i++*10 is %d\n",i++*10);  //40
    printf("After post increment i = %d\n",i); //5
    printf("Value of ++i*10 is %d\n",++i*10);  //60
    printf("Value of i = %d\n",i); //6
    printf("Value of i--/2 is %d\n",i--/2);  //3
    printf("Value of i = %d\n",i); //5
    printf("Value of --i/2 is %d\n",--i/2);  //2
    printf("Value of i = %d\n",i); //4
}