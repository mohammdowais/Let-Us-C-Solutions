/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour
worked above 40 hours. Assume that employees do not work for
fractional part of an hour*/
#include<stdio.h>
void main()
{
    int ot,i=1;
    while(i<=10)
    {
        printf("\n\nEnter duration of your work (hours)");
        scanf("%d",&ot);
        if(ot<40){
            printf("\nOvertime duration insufficient for pay");
          continue;}
        else
            printf("\nYour overtime pay = %d ",(ot-40)*12);
    }
}