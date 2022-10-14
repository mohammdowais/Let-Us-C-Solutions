/*Write a program to find the range of a set of numbers entered
through the keyboard. Range is the difference between the smallest
and biggest number in the list.*/
#include<stdio.h>
void main()
{
    int n,a[100],max,min,i,r;
    printf("how many numbers you want to enter?");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
        
    }
    max=a[0];
    min=a[0];
    for( i=0;i<n;i++)
    {
        
        if(a[i]>max){
        max=a[i];
        }
        if(a[i]<min){
        min=a[i];
        }
    }
    printf("\nmax = %d",max);
    printf("\nmin= %d",min);
    r=max-min;
    printf("\nRange = %d",r);
}
