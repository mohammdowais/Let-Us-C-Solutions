/*Population of a town today is 100000. The population has increased
steadily at the rate of 10 % per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade.*/
#include<stdio.h>
void main()
{
    int pop=100000,year=10;
    while(year>=1)
    {
        year--;
        pop+=pop/10;
       
        printf("Population %d year back was=%d\n",10-year,pop);
    }
}