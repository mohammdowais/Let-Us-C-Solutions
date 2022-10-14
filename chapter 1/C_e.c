/*The length and breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the area
and perimeter of the rectangle, and the area and circumference of
the circle*/
#include<stdio.h>
void main()
{
    int l,b,ar;
    float r,ac;
    printf("Enter  the length bredth of rectangle and radius of circle");
    scanf("%d%d%f",&l,&b,&r);
    ar=l*b;
    ac=3.14*r*r;
    printf("Area of rectangle=%d\nArea of circle=%f",ar,ac);
}