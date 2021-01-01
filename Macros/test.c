#include<stdio.h>
#include "a.h"
#include "b.h"
#define CONCAT(a,b) a##b
#define PRINT(str) puts(#str)
#define SUM(x,y) x+y
#define SQUARED(X) X*X 
void main(){
    a();b();
    printf("\n%s",__TIMESTAMP__);
    printf("\n%d",__LINE__);
    printf("\n%s",__FUNCTION__);
    printf("\n%s",__FILE__);
    printf("\n%d\n",CONCAT(3,4));
    PRINT("Hello");
    printf("\nNested call: %d\n",SUM(2,SQUARED(3)));
}