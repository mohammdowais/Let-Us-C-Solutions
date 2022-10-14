/*Consider a currency system in which there are notes of seven
denominations, namely, Rs. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If
a sum of Rs. N is entered through the keyboard, write a program to
compute the smallest number of notes that will combine to give Rs.
N.*/
#include<stdio.h>
void main()
{
    int c[6]={100,50,10,5,2,1},num,i,n[6],sum=0;
    printf("Enter any amount in rupees:");
    scanf("%d",&num);
    for(i=0;i<=5;i++)
    {
        n[i]=num/c[i];
        num%=c[i];
      
    }
printf("\nCurrency notes require:");
   for(i=0;i<=5;i++)
    {
     sum+=n[i];
     if(n[i]!=0){
        printf("\n%d %d Rupee notes",n[i],c[i]);
     }
    }
   printf("\nHence number of notes require=%d",sum);
}