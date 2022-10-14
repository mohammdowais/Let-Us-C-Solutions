/*Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements of
each row with the elements of the corresponding column.*/
#include<stdio.h>
void main()
{
    int a[4][4],t[4][4],i,j;
    
    printf("Enter any 4x4 matrix:");
    for( i=0;i<4;i++)
        for(j=0;j<4;j++)
            scanf("%d",&a[i][j]);

    printf("\nEntered  4x4 matrix is:\n");
    for( i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                printf(" %d ",a[i][j]); 

                t[i][j]=a[j][i];
            }
          printf("\n");   
        }
    
    printf("\nTranspose of given 4x4 matrix:\n");
    for( i=0;i<5;i++)
        {for(j=0;j<5;j++)
            {printf("%d ",t[i][j]);}
            printf("\n");}           
}