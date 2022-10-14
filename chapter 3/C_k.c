/*Given the coordinates (x, y) of center of a circle and its radius, write
a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)*/
#include<stdio.h>
#include<math.h>
void main()
{
   int x=2,y=3,x1,y1,r=5,d;
   printf("enter any point(x1,y1)");
   scanf("%d%d",&x1,&y1);
   d=sqrt(pow((x-x1),2)+pow((y-y1),2));
   printf("%d",d);
   if(d==r)
   printf("\nPoint lies on the circle");
   if(d>r)
   printf("\nPoint lies outside the circle");
   if(d<r)
   printf("\nPoint lies inside the circle");
}