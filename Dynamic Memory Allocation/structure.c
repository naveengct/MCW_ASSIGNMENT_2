#include<stdio.h>
#include<stdlib.h>
struct str{
    int n;
    char c[10];
};
void main()
{
    struct str *p;
    int m=3;
    p=(struct str*)malloc(m*sizeof(struct str));
    for(int i=0;i<3;i++){
        printf("Number: ");
        scanf("%d",&(p+i)->n);
        printf("Name: ");
        scanf("%s",(p+i)->c);
    }
    for(int i=0;i<3;i++)
    printf("Number:%d\nCharacter:%s\n",(p+i)->n,(p+i)->c);
}