#include<stdio.h>
void main()
{
    int iu,cu,ch1,ch2;
    float area,carea;
    printf("Enter the unit of area of your plot:\nPress 1 for acre\tPress 2 for beegah\nPress 3 for squaare feet\n");
    scanf("%d",&choice1);
    printf("Enter area of your plot")
    scanf("%d",&area);
    printf("Enter the unit you want to convert:\nPress 1 for acre\tPress 2 for beegah\nPress 3 for squaare feet\n");
    scanf("%d",&choice2);
    if(choice1==choice2)
    {
        printf("both units are same");
        exit 0;
    }

    if(choice1==1)
    switch(choice2)
    {
        case 2:carea=area*3.025;
        break;
        case 3:carea=area*43560;
        break;
        
    }
    if(choice1==2)
    switch(choice2)
    {
        case 1:carea=area/3.025;
        break;
        case 3:carea=area*26,910.66 ;
        break;
        
    }
    if(choice1==3)
    switch(choice2)
    {
        case 1:carea=area*3.025;
        break;
        case 2:carea=area*26,910.66 ;
        break;
        
    }
}