/*Two numbers are entered through the keyboard. Write a program
to find the value of one number raised to the power of another.*/
#include<stdio.h>
void main()
{
    int a,t,b,pwr=1;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    t=b;
    while(b)
    {
        pwr*=a;
        b--;
    }
    printf("%d^%d=%d",a,t,pwr);
}