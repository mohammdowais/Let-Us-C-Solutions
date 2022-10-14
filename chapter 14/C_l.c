/*A 6 x 6 matrix is entered through the keyboard. Write a program to
obtain the Determinant value of this matrix.*/
#include<stdio.h>
#include<math.h>
#define N 6
void input(int *t,int n)
{
    for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                scanf("%d",(t+i*n+j));
                
            }
        //printf("\n");
        }
}
void print(int *t,int n)
{
    for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                printf(" %d ",*(t+i*n+j));
            }
        printf("\n");
        }
}
void submatrix(int a[N][N],int temp[N][N],int k,int y)
{
    int i=0,j=0;
    for(int row=0;row<y;row++)
        for(int col=0;col<y;col++)
        {
            if(row!=0 && col!=k)
            {
                temp[i][j++]=a[row][col];
                if(j==y-1)
                {
                    j=0;
                    i++;
                }
            }
        }
}
int  determinant(int a[N][N],int m)
{
    int det=0;
    if(m==1)
    return a[0][0];

    int sign=1;
      int temp[N][N];
        for(int i=0;i<m;i++)
        {
            submatrix(a,temp,i,m);
            det+=sign*a[0][i]*determinant(temp,m-1);
            sign=-sign;
        }
    
    return det;
}    
void main()
{
    int a[N][N];/*= { { 1, 0, 2, -1 },
                      { 3, 0, 0, 5 },
                      { 2, 1, 4, -3 },
                      { 1, 0, 5, 0 } };*/
    system("cls");

    printf("Enter any 6x6 matrix");
    input(a,N);
    print(a,N);
   
    printf("%d",determinant(a,N));
}
