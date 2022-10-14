/*Write a program to receive Cartesian co-ordinates (x, y) of a point
and convert them into polar co-ordinates (r,theta ).
Hint: r = sqrt ( x^2 + y^2 ) and theta=tan-1 ( y / x )*/
#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,a,b;
    float r,thta;
    printf("Enter cartetion coordinate of any point:");
    scanf("%d%d",&x,&y);
   // a=pow(x,2);
    //b=pow(y,2);
    r=sqrt(pow(x,2)+pow(y,2));
    thta=atan(y/x);
    printf("Catrtesian coordinates :(%f,%f)",r,thta);
}