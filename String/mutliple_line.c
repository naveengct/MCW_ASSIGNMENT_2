#include<stdio.h>
void main()
{
    char s[100];
    printf("To stop press tab and enter:\n");
    scanf("%[^\t]s",s);
    printf("%s",s);
}