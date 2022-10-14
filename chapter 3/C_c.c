/*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/
#include<stdio.h>
void main()
{
    int y;
    printf("Enter any year:");
    scanf("%d",&y);
    y%2==0?printf("\nYear is leap year"):printf("\nYear is not leap year");
}