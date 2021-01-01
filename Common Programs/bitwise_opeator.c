#include<stdio.h>
int setkbit(int n,int k){
    k--;
    return (1<<k)|n;
}
int resetkbit(int n,int k)
{
    k--;
    return ~(1<<k)&n;
}
int flipkbit(int n,int k)
{
    k--;
    return (1<<k)^n;
}
int querykbit(int n,int k){
    k--;
    return ((1<<k)&n)>>k;
}
void main(){
    printf("Set 3rd bit in 10: %d\n",setkbit(10,3));
    printf("Reset 4th bit in 10: %d\n",resetkbit(10,4));
    printf("Flip 2nd bit in 10: %d\n",flipkbit(10,2));
    printf("%d is the 2nd bit of 10\n",querykbit(10,2));
}