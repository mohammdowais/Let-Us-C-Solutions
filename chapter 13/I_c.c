/*Write a program using pointers to find the smallest number in an
array of 25 integers.*/
#include<stdio.h>
void main()
{
    int a[25],*j;

    printf("Enter 25 integers:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
       // j=&a[i];
    }
     j=&a[0];
    int min=a[0];
    
    for(int i=0;i<5;i++)
    {
        if(*j<min)
        min=*j;
        j++;
    }
    printf("mallest integer is:%d",min);
}