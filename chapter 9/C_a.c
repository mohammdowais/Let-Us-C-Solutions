/*Write a function that receives 5 integers and returns the sum,
average and standard deviation of these numbers. Call this function
from main( ) and print the results in main( ).*/
#include<stdio.h>
#include<math.h>
void calc();
void main()
{
    calc();
}
void calc()
{
    int a[4],sum1=0,sum2=0;
    float avg,sd;
    printf("Enter 5 integer:");
    for(int i=0;i<=4;i++)
    {
    scanf("%d",&a[i]);
    sum1+=a[i];
    }
    avg=sum1/5;
    for(int i=0;i<=4;i++)
    {
        sum2+=pow(a[i]-avg,2);
    }
    sd=sqrt(sum2/5);
    printf("\nsum:%d\nAverage:%f\nStandard deviation:%f",sum1,avg,sd);
}