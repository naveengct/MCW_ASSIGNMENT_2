#include<stdio.h>
#define M 30
void main(){
    #if M>20
    printf("PASS");
    #else
    printf("FAIL");
    #endif
    /**
    void main(){
    printf("PASS");
}**/
}