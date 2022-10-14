/*Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the
following form:
29 * 1 = 29
29 * 2 = 58*/
#include<stdio.h>
void main()
{
    int i=1,n;
    printf("Enter any number:");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i++;
    }
}