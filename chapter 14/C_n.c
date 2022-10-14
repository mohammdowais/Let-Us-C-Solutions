/*The area of a triangle can be computed by the sine law when 2
sides of the triangle and the angle between them are known.
Area = (1 / 2 ) ab sin ( angle )
Given the following 6 triangular pieces of land, write a program to
find their area and determine which is largest.
PlotNo.       a      b      angle
    1       137.4   80.9    0.78
    2       155.2   92.62   0.89
    3       149.3   97.93   1.35
    4       160.0   100.25  9.00
    5       155.6   68.95   1.25
    6       149.7   120.0   1.75*/
#include<stdio.h>
#include<math.h>
#define n 6
void area( double ar[n],double a[n],double b[n],double angle[n],int t)
{
    for(int i=0;i<t;i++){
        
        double theta=3.142857*angle[0]/180;
        ar[i]=0.5*a[i]*b[i]*sin(theta);
    }
}
void printarray(double ar[n],int t)
{
    for(int i=0;i<t;i++)
        printf("\nArea of Plot number %d :%lf\n",i+1,ar[i]);
}
void greatest(double ar[n],int plot[n],int t)
{
    double max=ar[0];
    int maxp=plot[0];
    for(int i=0;i<t;i++){
        if(ar[i]>max){
        max=ar[i];
        maxp=plot[i];
        }
    }
    printf("\nPlot no. %d has greatest area",maxp);
}
void main()
{
    int plot[n]={1,2,3,4,5,6};
    double a[n]={137.4,155.2,149.3,160.0,155.6,149.7},b[n]={80.9,92.62 , 97.93, 100.25, 68.95 , 120.0 };
    double angle[n]={0.78,0.89,1.35,9.00,1.25,1.75}, ar[n];
    
    area(ar,a, b,angle,n);
    printarray(ar,n);
    greatest(ar, plot, n);
    getch();
}