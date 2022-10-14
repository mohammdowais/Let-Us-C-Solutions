/*If an array arr contains n elements, then write a program to check if
arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.*/
#include<stdio.h>
void main()
{
    int a[10];

    printf("Enter 10 elements of array");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);
    
    for(int i=0,j=9;i<5,j>4;i++,j--)
       
            {
                if(a[i]==a[j])
                {
                printf("\n%d equal to %d",a[i],a[j]);
                
                }
                else
                {
                printf("\n%d not equal to %d",a[i],a[j]);
            
                }
            }
}