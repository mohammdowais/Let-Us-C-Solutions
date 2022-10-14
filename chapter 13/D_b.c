/*Implement the 
    1 Selection Sort, 
    2 Bubble Sort and 
    3 Insertion sort
algorithms on a set of 25 numbers.???????????????????do not know if code is actually doing the same process???????????????????????*/
#include<stdio.h>
void selectsorting(int *,int);
void bubblesorting(int *,int);
void insertsorting(int *,int);
void swap(int *,int *);
void main()
{
    system("cls");
    int array[25];
    printf("Enter any 25 numbers");
    for(int i=0;i<25;i++)
    scanf("%d",&array[i]);
    
    //selectsorting(&array[0],25);
    //bubblesorting(&array[0],25);
    insertsorting(&array[0],25);
}
void selectsorting(int *a,int n)
{
    int array2[25];
    for(int i=0;i<n;i++,a++)
        array2[i]=*a;
    
    for(int i=0;i<25;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(array2[i]>=array2[j])
            {
               swap(&array2[i],&array2[j]);
            }
        }
       
    }
     printf("\nAfter select sorting");
    for(int i=0;i<25;i++)
    printf("\n%d",array2[i]);
}
void bubblesorting(int *a,int n)
{
 int array2[25];
    for(int i=0;i<n;i++,a++)
        array2[i]=*a;
   
   for(int i=0;i<25;i++)
    {
        for(int j=0;j<24-i;j++)
        {
            if(array2[j]>array2[j+1])
            {
               swap(&array2[j],&array2[j+1]);
            }
        }
         //for(int z=0;z<25;z++)
    //printf("\n%d",array2[z]);
    }
    
     printf("\nAfter bubble sorting");
    for(int i=0;i<25;i++)
    printf("\n%d",array2[i]);
    
}
void insertsorting(int *a,int n)
{
    int array2[25];
    for(int i=0;i<n;i++,a++)
        array2[i]=*a;
    
    for(int i=1;i<25;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(array2[i]<array2[j])
            {
               swap(&array2[i],&array2[j]);
               
            }
        }
       // for(int z=0;z<25;z++)
    //printf("\n%d",array2[z]);
       
    }
     printf("\nAfter insert sorting");
    for(int i=0;i<25;i++)
    printf("\n%d",array2[i]);
}
void swap(int *p,int *q)
{
    //printf("\n%d%d\n",p,q);
    int temp;
    temp=*q;
    *q=*p;
    *p=temp;
    //printf("\n\t%d%d\n",p,q);
}