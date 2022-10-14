/*Write a program to find the absolute value of a number entered
through the keyboard.*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n<0)
    printf("Absolute value Of %d = %d",n,(-1)*n);
    else
    printf("Absolute value Of %d = %d",n,n);

}