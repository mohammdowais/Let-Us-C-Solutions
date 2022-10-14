/*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
#include<conio.h>
void main()
{
    system("cls");
    int bs,da,hr,gs;
    printf("Enter basic salary of Ramesh");
    scanf("%d",&bs);
    da=bs*40/100;
    hr=bs*20/100;
    gs=bs+hr+da;
    printf("Gross salary of Ramesh=%d",gs);
    getch();
}