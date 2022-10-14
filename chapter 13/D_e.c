/*Write a program that interchanges the odd and even elements of
an array.*/
#include<stdio.h>
void main()
{
    int a[6];

    printf("Enter any 5 numbers");
    for(int i=0;i<6;i++)
    scanf("%d",&a[i]);

    for(int i=0;i<5;i++)
        for(int j=i+1;j<6;j++)
        {
           if(a[i]%2==0)
           {
               if(a[j]%2>0)
               {
                   int temp;
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                  // i=i+1;
                   //j=j+1;
                   break;
               }
           }
           else if(a[i]%2>0)
           {
               if(a[j]%2==0)
               {
                   int temp;
                   temp=a[i];
                   a[i]=a[j];
                   a[j]=temp;
                   //i=i+1;
                   //j=j+1;
                   break;
               }
           }
        }
    
    printf("\nAfter interchanging the odd and even elements");
    for(int i=0;i<6;i++)
    printf("\n%d",a[i]);
}