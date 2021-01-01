#include<stdio.h>
int sum_1D(int a[])
{
  int sum=0;
  for(int i=0;i<5;i++)
  sum+=a[i];
  return sum;
}
int sum_2D(int a[][3])
{
  int sum=0;
  for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
  sum+=a[i][j];
  return sum;
}
void transpose(int a[][3])
{
    for(int i=0;i<2;i++)
    for(int j=i+1;j<3;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
    printf("Transpose:\n");
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++)
    printf("%d ",a[i][j]);
    printf("\n");

}
}

void main(){
    int a[10]={1,2,3,4,5};
    int b[3][3]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    printf("1D sum %d\n",sum_1D(a));
    printf("2D sum %d\n",sum_2D(b));
    transpose(b);
    

}