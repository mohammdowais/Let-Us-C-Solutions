/*Write a program that converts a string like "124" to an integer 124.*/
#include<stdio.h>
#include<string.h>
void main()
{
    int a=21,n=0,base=1,l,i;
    char c[50];
    printf("Enter any number string:");
    gets(c);
    l=strlen(c);
    printf("\nAfter converting string into integer:");
    for(i=0;i<l;i++){
        n=n*base+c[i]-48;
       base=10;
    }
    printf("%d\n",n);
}