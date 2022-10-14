/*When interest compounds q times per year at an annual rate of
r % for n years, the principal p compounds to an amount a as per
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int p,r,q,n,i=1;
    float a;
    while(i<=10)
    {
        i++;
        printf("\nEnter p,r,n & q:");
        scanf("%d%d%d%d",&p,&r,&n,&q);
        a=p*pow((1+r/q),(n*q));
        printf("Amount=%f",a);
    }
}