/*Write a function to compute the greatest common divisor given by
Euclid’s algorithm, exemplified for J = 1980, K = 1617 as follows:
1980 / 1617 = 1 1980 – 1 * 1617 = 363
1617 / 363 = 4 1617 – 4 * 363 = 165
363 / 165 = 2 363 – 2 * 165 = 33
5 / 33 = 5 165 – 5 * 33 = 0
Thus, the greatest common divisor is 33.*/
#include<stdio.h>
int gcd(int,int);
void main()
{
    int x,y,hcf;
    printf("Enter any two numbers:");
    scanf("%d%d",&x,&y);
    hcf=gcd(x,y);
    printf("GCD of given number:%d",hcf);
}
int gcd(int a,int b)
{
    int q,r;
   
    while(r>0)
    {
        q=a/b;
        r=a-b*q;
        if(r==0)
        break;
        else{
            a=b;
            b=r;
            }
    }
    
    return b;
    
}