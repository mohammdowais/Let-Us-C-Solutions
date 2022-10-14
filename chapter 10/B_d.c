/*A positive integer is entered through the keyboard, write a function
to find the binary equivalent of this number :
(1) Without using recursion
(2) Using recursion*/
#include<stdio.h>
int binary(int);
void main()
{
 int deci,bin;
 printf("Enter any integer");
 scanf("%d",&deci);
 binary(deci);
 //printf("\nBinary = %d",bin);
}
int binary(int d)
{
    int b=0,r,base=1;
   if(d>0)
    {
        r=d%2;
        d=d/2;
        b=b+r*base;
        base=base*10;
        binary(d);
    }
    printf("%d",b);
}
