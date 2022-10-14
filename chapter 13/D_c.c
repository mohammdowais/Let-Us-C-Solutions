/*Implement in a program the following procedure to generate prime 
numbers from 1 to 100. This procedure is called sieve of
Eratosthenes.
Step 1 Fill an array num[ 100 ] with numbers from 1 to
        100.
Step 2 Starting with the second entry in the array, set all
        its multiples to zero.
Step 3 Proceed to the next non-zero element and set all
        its multiples to zero.
        Step 4 Repeat Step 3 till you have set up the multiples of
        all the non-zero elements to zero.
Step 5 At the conclusion of Step 4, all the non-zero entries
        left in the array would be prime numbers, so
print out these numbers.???????????????????????????????*/
#include<stdio.h>
void main()
{
    int a[100],i,j,k,step;
    printf("Prime number form 1 to 100 using sieve of Eratosthenes");
    for( i=0;i<100;i++)
       {
            a[i]=i+1;
       }

    for( i=1;i<100;i++)
    {
        if(a[i]!=0)
        {
            k=a[i]*2-1;
            step=a[i];
            for(j=k;j<100;j=j+step)
            a[j]=0;
        }
    }

    for( i=0;i<100;i++)
       {
           if(a[i]!=0)
            printf("\n%d",a[i]);
       }
       
}