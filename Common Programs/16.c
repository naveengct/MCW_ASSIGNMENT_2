#include<stdio.h>
void main()
{
    int x=1,y=5,z;
    z=++x && ++y;  // x=2,y=6,z=1
    z=--x && --y;  // x=1,y=5,z=1
    z=--x && --y; // x=0,y=5,z=0
    z=++x || ++y; //x=1,y=5,z=1
    z=--x || --y; //x=0,y=4,z=1
}