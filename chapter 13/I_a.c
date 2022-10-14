/*Write a program to copy the contents of one array into another in
the reverse order.*/
#include<stdio.h>
void main()
{
    int a[]={1,2,3,4,5},b[5];
    printf("before copying:");
    printf("\nArray1 : ");
    for(int i=0;i<5;i++)
      printf("%d " ,a[i]);
      printf("\nArray2 : ");
    for(int i=0;i<5;i++)
      printf("%d ",b[i]);       //prints garbage value since nothing is stored in b

    for(int i=0;i<5;i++)
    b[i]=a[i];
    printf("\nAfter copying:");
    printf("\nArray1 : ");
    for(int i=0;i<5;i++)
      printf("%d " ,a[i]);
      printf("\nArray2 : ");
    for(int i=0;i<5;i++)
      printf("%d ",b[i]);
}