#include<stdio.h>
#include<string.h>
#include<limits.h>
#define CUR 2020
typedef struct emp{
    int id;
    char name[20];
    int salary;
    int year;
}e;
void service(e e1[]){
    int min=INT_MAX,max=INT_MIN,big,small;
    for(int i=0;i<4;i++){
        if(min>e1[i].year){
        min=e1[i].year;
        small=i;
        }
        if(max<e1[i].year){
        max=e1[i].year;
        big=i;
        }
    }
    printf("Max Experience=>%s\nMin Experience=>%s\n",e1[small].name,e1[big].name);
}
void main(){
    e e1[4];
    char n[4][10]={"Jhon","Albert","Jack","Ram"};
    int s[4]={10000,30000,20000,5000},y[4]={1992,1997,2014,2003};
    int sum=0,min=INT_MAX,max=INT_MIN;
    for(int i=0;i<4;i++)
    {
     e1[i].id=i;
     strcpy(e1[i].name,n[i]);
     e1[i].salary=s[i];
     e1[i].year=y[i];
     sum+=e1[i].salary;
     if(min>e1[i].salary)
     min=e1[i].salary;
     if(max<e1[i].salary)
     max=e1[i].salary;
    }    
    printf("Sum=>%d\nAverage=>%d\nMin=>%d\nMax=>%d\n",sum,sum/4,min,max);
    service(e1);
}