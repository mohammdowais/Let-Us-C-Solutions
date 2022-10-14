/*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.*/
#include<stdio.h>

void main()
{
    int cm,m,km;
    system("cls");
    float f,in;
    printf("Enter distance between two cities in kilometers");
    scanf("%d",&km);
    m=km*1000;
    cm=m*1000;
    f=m*3.281;
    in=f*12;
    printf("\nThe distance between two cities in meters:%d",m);
    printf("\nThe distance between two cities in centimeters:%d",cm);
    printf("\nThe distance between two cities in feet:%f",f);
    printf("\nThe distance between two cities in inches:%f",in);
}
