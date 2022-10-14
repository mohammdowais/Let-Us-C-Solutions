/*A 5-digit positive integer is entered through the keyboard, write a
recursive and a non-recursive function to calculate sum of digits of
the 5-digit number.*/
#include<stdio.h>
int sumdigit(int);
int sumdigit1(int );
void main()
{
    int num,sum;
    printf("Enter any 5 digit number:");
    scanf("%d",&num);
    sum=sumdigit1(num);
    printf("Sum of the digits of given integer is:%d",sum);
}
int sumdigit(int x)
{
    int sum1=0,r,n;
    while(x)
    {
    r=x%10;
    sum1+=r;
    x/=10;
    }
    return sum1;
}
int sumdigit1(int y)
{
    int rem,sum2=0;
    
    rem=y%10;
    if(rem==0)
    return 0;
    else
    {
    
    sum2=rem+sumdigit1(y/10);
    }
    
    return sum2;
}