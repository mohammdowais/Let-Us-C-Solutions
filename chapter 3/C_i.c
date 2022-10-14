/*Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter.*/
#include<stdio.h>
void main()
{
    int l,b,a,p;
    printf("Enter the dimensions of rectangle");
    scanf("%d%d",&l,&b);
    a=l*b;
    p=l+b;
    if(a==p)
    printf("Area of rectangle is equal to its perimeter");
    if(a>p)
    printf("Area of rectangle is greater than its perimeter");
    if(a<p)
    printf("Area of rectangle is le than its perimeter");
}