/*Any year is entered through the keyboard. Write a function to
determine whether the year is a leap year or not.*/
#include<stdio.h>
void leap(int);
void main()
{
    int y;
    printf("Enter any year:");
    scanf("%d",&y);
    leap(y);
}
void leap(int x)
{
    x%4==0?printf("Year is leap year"):printf("Year is not a leap year");
}