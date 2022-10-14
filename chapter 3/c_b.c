/*Any integer is input through the keyboard. Write a program to find
out whether it is an odd number or even number.*/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    n%2==0?printf("\nNumber is even"):printf("\nNumber is odd");
}