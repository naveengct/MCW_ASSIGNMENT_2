#include <stdio.h> 

#define SQUARED(type,param) { \
type res; \
res=param*param; \
printf("%.2f\n",(float)res);\
}


void main() 
{ 
	SQUARED(int,4);
    SQUARED(float,4.2);
} 