/*Write a program to enter numbers till the user wants. At the end it
should display the count of positive, negative and zeros entered.*/
#include<stdio.h>
void main()
    {
        int n,s1=0,s2=0,s3=0,i;
        printf("how many numbers you want to enter:");
        scanf("%d",&n);
        printf("\nEnter no.s:");
        while(n)
        {
            scanf("%d",&i);
            if(i<0)
            s1++;
            if(i>0)
            s2++;
            if(i==0)
            s3++;
            
            n--;
        }
        printf("\nNumber of negative integer=%d\nNumber of positive integer=%d\nNumber of zeroes=%d",s1,s2,s3);
    }
