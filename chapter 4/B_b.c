/*Write a program to find the factorial value of any number entered
through the keyboard.*/
#include<stdio.h>
void main()
{
    int n,fact=1,t;
    printf("Enter any number");
    scanf("%d",&n);
    t=n;
    while(n>1)
    {
        fact*=n--;
    }
    printf("\n%d! = %d",t,fact);
}