#include<stdio.h>
#define setkbit(n,k) n|1<<(k-1)
#define resetkbit(n,k) n&~(1<<(k-1))
#define flipkbit(n,k) n^(1<<(k-1))
#define querykbit(n,k) (1<<(k-1)&n)>>(k-1)
void main(){
    printf("Set 3rd bit in 10: %d\n",setkbit(10,3));
    printf("Reset 4th bit in 10: %d\n",resetkbit(10,4));
    printf("Flip 2nd bit in 10: %d\n",flipkbit(10,2));
    printf("%d is the 2nd bit of 10\n",querykbit(10,2));
}