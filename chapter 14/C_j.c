/*Write a program to multiply any two 3 x 3 matrices*/
#include<stdio.h>
void main()
{
    int a[3][3],b[3][3],prod[3][3],i,j,k;
    
    printf("Enter any 3x3 matrix A:");
    for( i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter any 3x3 matrix B:");
    for( i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);

    //printf("\nEntered  3x3 matrix is:\n");
    for( i=0;i<3;i++)
         for(j=0;j<3;j++)
         {
             prod[i][j]=0;
           for(k=0;k<3;k++)
                prod[i][j]+=a[i][k]*b[k][j];
              
         }
    
    printf("\nSum  of given 3x3 matrix:\n");
    for( i=0;i<3;i++)
        {for(j=0;j<3;j++)
            {printf("%d ",prod[i][j]);}
            printf("\n");}           
}