/*Write a recursive function to obtain the running sum of first 25
natural numbers.*/
#include<stdio.h>
int sum(int);
void main()
{
    int s;
    s=sum(25);
    printf("%d",s);
}
int sum(int n)
{
    int sum2=0;
   if(n>0)
   {
       sum2=n+sum(n-1);
   }
    
    
    return sum2;
}