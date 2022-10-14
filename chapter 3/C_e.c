/*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or not.*/
#include<stdio.h>
void main()
{
    system("cls");
    int n,r,rev=0;
    printf("Enter any 5 digit number");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    printf("reverse of given number=%d\n",rev);
    if(rev==n)
        printf("Entered number and its reverse  number are same");
    else
        printf("Entered number and its reverse  number are not same");
}