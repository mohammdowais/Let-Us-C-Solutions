/*Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight*/
#include<stdio.h>
void main()
{
 int i=1;
 while(i<=24)
 {
     if(i<=12)
     printf("%d AM\n",i);
     else
     printf("%d PM\n",i-12);
     i++;
 }
}