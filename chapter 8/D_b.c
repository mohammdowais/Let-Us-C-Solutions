/*Write a function power ( a, b ), to calculate the value of a raised to
b.*/
#include<stdio.h>
int power(int x,int y);
void main()
{
 int p,a,b;
 printf("Enter any number and power to be raised ");
 scanf("%d%d",&a,&b);
 p=power(a,b);
 printf("%d raised to the power %d is %d",a,b,p);
}
int power(int x,int y)
{
    int pow=x;
    for(int i=1;i<y;i++)
    {
        pow=pow*x;
    }
    return pow;
}