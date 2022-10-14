/*Write a program to add two 6 x 6 matrices*/
#include<stdio.h>
void main()
{
    int a[6][6],b[6][6],sum[6][6],i,j;
    
    printf("Enter any 6x6 matrix A:");
    for( i=0;i<6;i++)
        for(j=0;j<6;j++)
            scanf("%d",&a[i][j]);
    
    printf("Enter any 6x6 matrix B:");
    for( i=0;i<6;i++)
        for(j=0;j<6;j++)
            scanf("%d",&b[i][j]);

    //printf("\nEntered  6x6 matrix is:\n");
    for( i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                //printf(" %d ",a[i][j]); 

                sum[i][j]=a[j][i]+b[j][i];
            }
          printf("\n");   
        }
    
    printf("\nSum  of given 6x6 matrix:\n");
    for( i=0;i<6;i++)
        {for(j=0;j<6;j++)
            {printf("%d ",sum[i][j]);}
            printf("\n");}           
}