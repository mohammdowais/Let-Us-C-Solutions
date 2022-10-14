/*Write a program to receive an integer and find its octal equivalent*/
#include<stdio.h>
void main()
{
    int r,o=0,d,temp=0;
    printf("Enter any number:"); 
    scanf("%d",&d);
    while(d)
    {
        r=d%8;  
        temp=temp*10+r; 
        d/=10;
    }
    while(temp)
    {
        r=temp%10;                
        o=o*10+r;
        temp/=10;
    }
    printf("\nOctal equivalent for given number= %d",o);
}