/*Write a program to find if a square matrix is symmetric*/
#include<stdio.h>
void main()
{
    int a[4][4],t[4][4],i,j,check=1;
    
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

    for( i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
            {
                //printf(" %d ",a[i][j]); 
                if(t[i][j]==a[i][j])
                continue;
                else if(t[i][j]!=a[i][j])
                {
                    check++;
                    break;
                }
            }
          //printf("\n");   
        }
    if(check>1)
    {
        printf("\nEntered matrix isnt symmetric");
    }
    else
        printf("\nEntered matrix is symmetric");
               
}