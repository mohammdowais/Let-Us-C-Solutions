/*According to the Gregorian calendar, it was Monday on the date
01/01/01. If any year is input through the keyboard write a program
to find out what is the day on 1st January of this year.*/
#include<stdio.h>
void main()
    {
        //system("cls");
        int d,ly,y,i;
        char w[][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        printf("Enter any year:");
        scanf("%d",&y);
        d=(y-1)*365 + (y-1)/4;
        i=d%7;
        printf("%d",i);
        printf("The day on 1st January %d is %s ",y,w[i]);
    }
