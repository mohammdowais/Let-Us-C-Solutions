/*Write a program to add first seven terms of the following series
1/1!+2/2!+3/3!+.................
sing a for loop:*/
#include<stdio.h>
void main()
{
    int n=1,c;
    float fact,sum=0.0;
    printf("Sum of first 7 terms of following series\n\t1/1!+2/2!+3/3!+.................=");
    while(n<=7)
    {
        fact=1;
       for(c=1;c<=n;c++)
        {
            fact=fact*c;
           
        }
        sum+=n/fact;
        n++;
    }
    printf("%f",sum);
}
