/*Given a point (x, y), write a program to find out if it lies on the Xaxis,
Y-axis or on the origin.*/
#include<stdio.h>
void main()
{
    int x,y;
    printf("Enter coordintes of any point(x,y):");
    scanf("%d%d",&x,&y);
    if(x==0&&y!=0)
    printf("\nPoint lies on Y axis");
    else if(y==0&&x!=0)
    printf("\nPoint lies on X axis");
    else if(x==0&&y==0)
    printf("\nPoint lies on origin");
    else
    printf("\nPoint doesnt lies on origin or axes it lies on cartesian plane");

}