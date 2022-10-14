/*Twenty-five numbers are entered from the keyboard into an array.
Write a program to find out how many of them are positive, how
many are negative, how many are even and how many odd.*/
#include<stdio.h>
void main()
{
    int a[25],neg=0,pos=0,even=0,odd=0;

    printf("Enter any 25 integers");
    for(int i=0;i<25;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<25;i++)
    {
        if(a[i]>=0)
        pos++;
        if(a[i]<0)
        neg++;
        if(a[i]%2==0)
        even++;
        else
        odd++;
    }
    printf("\n%d positive numbers\n%d negative numbers\n%d even numbers\n%d odd numbers\n",pos,neg,even,odd);
}