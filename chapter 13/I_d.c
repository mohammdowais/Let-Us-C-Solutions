/*Write a program which performs the following tasks:
 -Initialize an integer array of 10 elements in main( )
 -Pass the entire array to a function modify( )
 -In modify( ) multiply each element of array by 3
 -Return the control to main( ) and print the new array elements
in main( )*/
#include<stdio.h>
void modify(int *,int);
void main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    modify(&array[0],10);
    for(int i=0;i<10;i++)
    printf("  %d ",array[i]);
}
void modify(int *a,int n)
{

    for(int i=0;i<10;i++,a++)
    *a*=3;
}

