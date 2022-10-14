/*Write a function to calculate the factorial value of any integer
entered through the keyboard*/
#include<stdio.h>
int fact(int);
void main()
{
    int n,f;
    
    printf("Enter any number");
    scanf("%d",&n);
    f=fact(n);
    printf("%d! = %d",n,f);
}
int fact(int x)
{
   int fac=1;
   if(x==1)
   return(1);
   else{
   fac=x*fact(x-1);
   return fac;
   }
}
