/*Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first few
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...*/
#include<stdio.h>
void fibonacci(int,int,int);
void main()
{
    
    fibonacci(0,1,1);
}
void fibonacci(int t1,int t2,int i)
{
    int nxt_term;
    printf("%d ",t1);
    nxt_term=t1+t2;
    i++;
    if(i<=25)
    {
        fibonacci(t2,nxt_term,i);
    }
}