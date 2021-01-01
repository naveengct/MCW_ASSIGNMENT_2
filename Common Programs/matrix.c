#include<stdio.h>
#define N 3
#define M 3
void dispaly(int a[][M])
{
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++)
        printf("%d ",a[i][j]);
    printf("\n");
    }
}
void add(int a[][M],int b[][M]){
    int temp[N][M];
    printf("\nAddition:\n");
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        temp[i][j]=a[i][j]+b[i][j];
    dispaly(temp);
}
void sub(int a[][M],int b[][M]){
    int temp[N][M];
    printf("\nSubraction:\n");
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++)
        temp[i][j]=a[i][j]-b[i][j];
    dispaly(temp);
}
void mul(int a[][M],int b[][M]){
    int temp[N][M];
    printf("\nMultiplication:\n");
    for(int i=0;i<N;i++)
        for(int j=0;j<M;j++){
            temp[i][j]=0;
            for(int k=0;k<N;k++)
            temp[i][j]+=a[i][k]*b[k][j];
        }
    dispaly(temp);
}
void transpose(int a[][M])
{
    printf("Transpose:\n");
    for(int i=0;i<N-1;i++)
    for(int j=i+1;j<M;j++){
        int temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
    }
    dispaly(a);
}
void trace(int a[][M]){
    int res=0;
    printf("Trace:\n");
    for(int i=0;i<N;i++)
    res+=a[i][i];
    printf("%d\n",res);
}
void determinant(int a[][M]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            for(int k=0;k<N;k++){
                if(j!=i && i!=k)
                {
                    //printf("%d..%d..%d\n",a[j][k],j,k);
                }
            }
        }
        printf("\n");
    }
}
void null(int a[][M]){
       printf("Null Matrix:\n");
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            if(a[i][j]!=0){
                printf("No\n");
            return ;
            }
    printf("Yes\n");
}
void identy(int a[][M]){
     printf("Identiy :\n");
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++){
            if(i==j)
            if(a[i][j]!=1){
                printf("No\n");
            return ;
            }
            if(i!=j)
            if(a[i][j]!=0){
                printf("No\n");
            return ;
            }
        }
        printf("Yes\n");
}
void main()
{
    int a[N][M]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    int b[N][M]={{1,2,3},
                {4,5,6},
                {7,8,9}};
    int id[N][M]={{1,0,0},
                {0,1,0},
                {0,0,1}};
    int nul[N][M]={{0,0,0},
                {0,0,0},
                {0,0,0}};
    printf("\nMatrix_1:\n");
    dispaly(a);
    printf("\nMatrix_2:\n");
    dispaly(b);
    add(a,b);
    sub(a,b);
    mul(a,b);
    transpose(a);
    trace(a);
    dispaly(b);
    determinant(b);
    null(nul);
    identy(id);
}