/*Write a program to pick up the largest number from any 5 row by 5
column matrix*/
#include<stdio.h>
void main()
{
    int a[5][5],max,i,j;

    printf("Enter any 5x5 matrix:");
    for( i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);

    printf("Given 5x5 matrix:\n");
    for( i=0;i<5;i++)
        {for(j=0;j<5;j++)
            {printf("%d ",a[i][j]);}
            printf("\n");}

    max=a[0][0];
    for( i=0;i<5;i++)
        for( j=0;j<5;j++)
        {
            if(max<=a[i][j])
             max=a[i][j];
        }
        printf("largest number from  matrix is %d",max);
}