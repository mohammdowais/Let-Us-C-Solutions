/*The natural logarithm can be approximated by the following series.
(x-1)/x +(1/2){(x-1)/x}^2+(1/2){(x-1)/x}^3+(1/2){(x-1)/x}^4+............
If x is input through the keyboard, write a program to calculate the
sum of first seven terms of this series.*/
#include<stdio.h>
#include<math.h>
void main()
{
    int i=2;
    float term,sum=0,x,temp;
    printf("Enter value of x");
    scanf("%d",&x);
    term=(x-1)/x;
    sum=term;
    int a=2;
    while(i<7)
    {
        
        temp=pow(term,a);
        sum+=temp/2;
        a++;
        i++;
    }
    printf("Sum of the first seven terms=%f",sum);
}
/*?????????????????????????????????????????????
int a,x,i,j,term;
      float sol,sum;
      printf("Enter the value of x = ");
      scanf("%d",&x);
      term=(x-1)/x;
     sum=term;
     int power=2;
     for(i=1;i<=6;i++)
    {
	sol=pow(term,a)/2;
	sum=sum+sol;
	a++;
    }
    printf("%f is the sum of the series.\n", sum);
*/