#include<stdio.h>
typedef struct marks{
    int id;
    int marks[5];
    int total;
}M;
int total(int a[]){
    int res=0;
    for(int i=0;i<5;i++)
    res+=a[i];
    return res;
}
void main()
{
  M m[3];
  int n1,m1;
  for(int i=0;i<3;i++){
  m[i].id=i;
  for(int j=0;j<5;j++)
  m[i].marks[j]=40+i+j;
  m[i].total=total(m[i].marks);
  }
  printf("Enter student id and subject:");
  scanf("%d %d",&n1,&m1);
  printf("Id=>%d\nMarks=>%d\n",m[n1].id,m[n1].marks[m1]);
  printf("Enter subject to find total:");
  scanf("%d",&m1);
  int res=0;
  for(int i=0;i<3;i++)
    res+=m[i].marks[m1];
  printf("Total=>%d\n",res);
}