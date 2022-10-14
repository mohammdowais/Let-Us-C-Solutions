/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’)*/
#include<stdio.h>
void main()
{
    system("cls");
    int n,r,sum=0;
    printf("Enter any 5 digit number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("sum of the digits of given number=%d",sum);
}