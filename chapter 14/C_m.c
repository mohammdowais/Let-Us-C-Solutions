/*For the following set of sample data, compute the standard
deviation and the mean.
-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2*/
#include<stdio.h>
#include<math.h>
void main()
{
    system("cls");
    int x[]={-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2},n;
    float mean=0.0,sd,d=0.0,sum=0;
    n=sizeof(x)/sizeof(x[0]);
    printf("\nSample data:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",x[i]);
        sum+=x[i];
    }
    mean=sum/n;
    printf("\nMean of the given data is:%f",mean);
    for(int i=0;i<n;i++)
    {
        
        d+=pow(x[i]-mean,2);
    }
    
    sd=sqrt(d/n);
    printf("\nStandard deviation of the given data is:%f",sd);
    getch();
}