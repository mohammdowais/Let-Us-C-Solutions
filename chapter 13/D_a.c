/*Twenty-five numbers are entered from the keyboard into an array.
The number to be searched is entered through the keyboard by the
user. Write a program to find if the number to be searched is
present in the array and if it is present, display the number of times
it appears in the array.*/
#include<stdio.h>
void main()
{
    int array[25],num,count=0;
    printf("Enter 25 numbers:");
    for(int i=0;i<25;i++)
    scanf("%d",&array[i]);
    
    printf("Enter the number you want to search");
    scanf("%d",&num);

    for(int i=0;i<25;i++)
    {
        if(array[i]==num)
        count++;
    }
    if(count==0)
    printf("\nEntered number isn't present in array.");
    else
    printf("\n%d appears %d times in array.",num,count);
}